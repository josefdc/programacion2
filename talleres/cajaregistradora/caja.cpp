#include <iostream>
#include <string.h>
#include <stdio.h>

// Definición de la estructura ReciboCajaMenor
struct ReciboCajaMenor {
    int numero;
    char ciudad[50];
    char fecha[11]; // Formato DD/MM/AAAA
    char pagadoA[50];
    float valor;
    char concepto[200];
};

// Constante para el tamaño máximo del array
#define MAX_DOCUMENTOS 50

// Declaración de funciones
void capturarDocumento(ReciboCajaMenor recibos[], int &contador);
void consultarDocumento(ReciboCajaMenor recibos[], int contador);
void listarDocumentos(ReciboCajaMenor recibos[], int contador);
void modificarDocumento(ReciboCajaMenor recibos[], int contador);
void valorEnLetras(float valor); // Función que simula la conversión de números a letras
void mostrarMenu();

// Array global para almacenar los recibos
ReciboCajaMenor recibos[MAX_DOCUMENTOS];
int contador = 0; // Contador global de documentos

int main() {
    int opcion;
    do {
        mostrarMenu();
        scanf("%d", &opcion);
        switch (opcion) {
            case 1:
                if (contador < MAX_DOCUMENTOS) {
                    capturarDocumento(recibos, contador);
                } else {
                    printf("Se ha alcanzado el número máximo de documentos.\n");
                }
                break;
            case 2:
                consultarDocumento(recibos, contador);
                break;
            case 3:
                listarDocumentos(recibos, contador);
                break;
            case 4:
                modificarDocumento(recibos, contador);
                break;
            case 5:
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción inválida. Intente de nuevo.\n");
                // Limpiar el buffer de entrada en caso de una entrada inválida
                while (getchar() != '\n');
        }
    } while (opcion != 5);

    return 0;
}

// Implementación de las funciones aquí
void mostrarMenu() {
    printf("\nMenu Principal\n");
    printf("1. Capturar Documento\n");
    printf("2. Consultar Documento\n");
    printf("3. Listar Documentos\n");
    printf("4. Modificar Documento\n");
    printf("5. Salir\n");
    printf("Ingrese una opcion: ");
}

// Implementar la función capturarDocumento
void capturarDocumento(ReciboCajaMenor recibos[], int &contador) {
    // Se pide al usuario que ingrese los datos del recibo
    printf("\nIngrese los datos del recibo de caja menor:\n");
    printf("Numero de documento: ");
    scanf("%d", &recibos[contador].numero);
    printf("Ciudad: ");
    scanf("%s", recibos[contador].ciudad);
    printf("Fecha (DD/MM/AAAA): ");
    scanf("%s", recibos[contador].fecha);
    printf("Pagado a: ");
    scanf("%s", recibos[contador].pagadoA);
    printf("Valor: ");
    scanf("%f", &recibos[contador].valor);
    printf("Concepto: ");
    scanf("%s", recibos[contador].concepto);

    contador++; // Aumentar el contador de documentos
    printf("Documento capturado exitosamente.\n");
}

// Implementar la función consultarDocumento
void consultarDocumento(ReciboCajaMenor recibos[], int contador) {
    int numero;
    printf("\nIngrese el número de documento a consultar: ");
    scanf("%d", &numero);

    for (int i = 0; i < contador; i++) {
        if (recibos[i].numero == numero) {
            printf("\nRecibo de Caja Menor\n");
            printf("Numero: %d\n", recibos[i].numero);
            printf("Ciudad: %s\n", recibos[i].ciudad);
            printf("Fecha: %s\n", recibos[i].fecha);
            printf("Pagado a: %s\n", recibos[i].pagadoA);
            printf("Valor: %.2f\n", recibos[i].valor);
            printf("Concepto: %s\n", recibos[i].concepto);
            return;
        }
    }
    printf("Documento no encontrado.\n");
}

// Implementar la función listarDocumentos
void listarDocumentos(ReciboCajaMenor recibos[], int contador) {
    float total = 0.0;
    printf("\nListado de Recibos de Caja Menor:\n");
    for (int i = 0; i < contador; i++) {
        printf("Numero: %d, Ciudad: %s, Fecha: %s, Pagado a: %s, Valor: %.2f, Concepto: %s\n",
               recibos[i].numero, recibos[i].ciudad, recibos[i].fecha, recibos[i].pagadoA, recibos[i].valor, recibos[i].concepto);
        total += recibos[i].valor;
    }
    printf("Total de valores: %.2f\n", total);
}

// Implementar la función modificarDocumento
void modificarDocumento(ReciboCajaMenor recibos[], int contador) {
    int numero;
    printf("\nIngrese el número de documento a modificar: ");
    scanf("%d", &numero);

    for (int i = 0; i < contador; i++) {
        if (recibos[i].numero == numero) {
            printf("Modificando documento número %d\n", numero);
            printf("Nuevo valor: ");
            scanf("%f", &recibos[i].valor);
            printf("Nuevo concepto: ");
            scanf("%s", recibos[i].concepto);
            printf("Documento modificado exitosamente.\n");
            return;
        }
    }
    printf("Documento no encontrado.\n");
}

// Función ficticia para mostrar el valor en letras (implementación simple y no funcional)
void valorEnLetras(float valor) {
    // En una implementación real, esta función convertiría el valor numérico a su equivalente en letras
    printf("El valor en letras es: [valor en letras no implementado]\n");
}
