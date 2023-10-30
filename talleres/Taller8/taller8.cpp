#include "vectores.h"
#include <stdio.h>

void mostrarMenu();

int main() {
    int vector[MAX_SIZE];
    int N, X;
    mostrarMenu();

    printf("Ingrese el tamaño del vector: ");
    scanf("%d", &N);
    if (N > MAX_SIZE) N = MAX_SIZE;

    int opcion;
    scanf("%d", &opcion);
    switch (opcion) {
    case 1:
        leerVector(vector, N);
        printf("Vector leído con éxito.\n");
        break;
    case 2:
        generarVectorAleatorio(vector, N);
        printf("Vector generado aleatoriamente.\n");
        break;
    case 3:
        printf("Ingrese el valor de X: ");
        scanf("%d", &X);
        printf("X se encontró %d veces en el vector.\n", contarXenVector(vector, N, X));
        break;
    case 4:
        invertirVector(vector, N);
        printf("Vector invertido.\n");
        break;
    case 5:
        {
            int vectorCopia[MAX_SIZE];  // Asumiendo que MAX_SIZE es el tamaño máximo 
            copiarVector(vector, vectorCopia, N);
            printf("Vector copiado.\n");
        }
        break;
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
        exit(0);  // Asegúrate de incluir stdlib.h para usar exit
        break;
    default:
        printf("Opción no válida.\n");
        break;
}

    return 0;
}

void mostrarMenu() {
    printf("====================================\n");
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
