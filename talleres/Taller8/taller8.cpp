#include "vectores.h"
#include <stdio.h>
#include <stdlib.h> // Necesario para la función exit
#include <string.h> // Necesario para usar strlen y otras funciones de cadenas

// Prototipos de funciones adicionales
void mostrarMenu();
void imprimirVector(const int vector[], int N);
void limpiarBuffer();
void pausa();

int main() {
    int vector[MAX_SIZE];
    int N, X,2
     opcion;
    char entrada[100]; // Buffer para entrada de usuario

    printf("Ingrese el tamaño del vector: ");
    fgets(entrada, sizeof(entrada), stdin);
    sscanf(entrada, "%d", &N); // Lee el número del buffer de entrada

    if (N > MAX_SIZE) {
        N = MAX_SIZE; // Limita el tamaño del vector al máximo permitido
    }

    do {
        int opcion;
        mostrarMenu(); // Muestra el menú de opciones
        fgets(entrada, sizeof(entrada), stdin);
        sscanf(entrada, "%d", &opcion); // Lee la opción del buffer de entrada

        switch (opcion) {
            case 1:
            leerVector(vector, N);
            printf("Vector leído con éxito.\n");
            imprimirVector(vector, N);
            break;
        case 2:
            generarVectorAleatorio(vector, N);
            printf("Vector generado aleatoriamente.\n");
            imprimirVector(vector, N);
            break;
        case 3:
            printf("Ingrese el valor de X: ");
            scanf("%d", &X);
            limpiarBuffer();
            printf("X se encontró %d veces en el vector.\n", contarXenVector(vector, N, X));
            break;
        case 4:
            invertirVector(vector, N);
            printf("Vector invertido.\n");
            imprimirVector(vector, N);
            break;
        case 5:
        {
            int vectorCopia[MAX_SIZE]; // Asumiendo que MAX_SIZE es el tamaño máximo permitido
            copiarVector(vector, vectorCopia, N);
            printf("Vector copiado.\n");
            imprimirVector(vectorCopia, N);
            break;
        }
        case 6:
            printf("El promedio del vector es: %.2f\n", promedioVector(vector, N));
            break;
        case 7:
            printf("La posición del mayor valor es: %d\n", posicionMayor(vector, N));
            break;
        case 8:
            if (estaOrdenadoAscendente(vector, N)) {
                printf("El vector está ordenado ascendentemente.\n");
            } else {
                printf("El vector no está ordenado ascendentemente.\n");
            }
            break;
        case 9:
            printf("Saliendo del programa.\n");
            exit(0); // Finaliza el programa
            break;
        default:
            printf("Opción no válida.\n");
            break;
        }

        pausa(); // Pausa antes de finalizar o volver a mostrar el menú
    } while (opcion != 9);

    return 0;
}

void imprimirVector(const int vector[], int N) {
    printf("Vector: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF); // Elimina cualquier carácter restante en el buffer de entrada
}

void pausa() {
    printf("\nPresione ENTER para continuar...");
    while (getchar() != '\n'); // Espera a que el usuario presione ENTER
}

void mostrarMenu() {
    printf("\n====================================\n");
    printf("=          MENU DE VECTORES        =\n");
    printf("====================================\n");
    printf("1. Leer vector\n");
    printf("2. Generar vector aleatorio\n");
    printf("3. Contar X en vector\n");
    printf("4. Invertir vector\n");
    printf("5. Copiar vector\n");
    printf("6. Calcular promedio del vector\n");
    printf("7. Encontrar la posición del mayor valor\n");
    printf("8. Verificar si el vector está ordenado ascendentemente\n");
    printf("9. Salir\n");
    printf("------------------------------------\n");
    printf("Ingrese una opción: ");
}
