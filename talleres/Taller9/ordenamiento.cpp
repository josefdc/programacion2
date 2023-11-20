/**
 * @file main.c
 * @brief Programa para comparar tiempos de diferentes algoritmos de ordenamiento.
 * 
 * Este programa permite al usuario seleccionar entre varios algoritmos de ordenamiento
 * y medir el tiempo que cada uno tarda en ordenar un conjunto predefinido de datos.
 */

#include <stdio.h>
#include <time.h>

// Prototipos de las funciones de ordenamiento
void insercionDirecta(int arr[], int n);
void burbuja(int arr[], int n);
void quicksort(int arr[], int low, int high);
void shellsort(int arr[], int n);

// Función para medir el tiempo de una función de ordenamiento
double medirTiempo(void (*ordenamiento)(int[], int), int arr[], int n);

/**
 * Muestra un menú interactivo para seleccionar un algoritmo de ordenamiento
 * y mostrar el tiempo que tarda en ordenar un conjunto predefinido de datos.
 */
void mostrarMenu() {
    int opcion;
    double tiempo;
    int mivector[] = { /* Tus datos del vector aquí */ };
    int n = sizeof(mivector) / sizeof(mivector[0]);

    do {
        printf("\n====================================\n");
        printf("=      MENU DE TIEMPOS DE ORDEN     =\n");
        printf("====================================\n");
        printf("1. Inserción Directa\n");
        printf("2. Burbuja\n");
        printf("3. Quicksort\n");
        printf("4. Shellsort\n");
        printf("5. Salir\n");
        printf("------------------------------------\n");
        printf("Ingrese una opción: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                tiempo = medirTiempo(insercionDirecta, mivector, n);
                printf("Tiempo Inserción Directa: %f segundos\n", tiempo);
                break;
            case 2:
                tiempo = medirTiempo(burbuja, mivector, n);
                printf("Tiempo Burbuja: %f segundos\n", tiempo);
                break;
            case 3:
                tiempo = medirTiempo(quicksort, mivector, 0, n-1);
                printf("Tiempo Quicksort: %f segundos\n", tiempo);
                break;
            case 4:
                tiempo = medirTiempo(shellsort, mivector, n);
                printf("Tiempo Shellsort: %f segundos\n", tiempo);
                break;
        }
    } while(opcion != 5);
}

int main() {
    mostrarMenu();
    return 0;
}

/**
 * Ordena un arreglo usando el algoritmo de inserción directa.
 * 
 * @param arr Arreglo de enteros a ordenar.
 * @param n Tamaño del arreglo.
 */
void insercionDirecta(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

/**
 * Ordena un arreglo usando el algoritmo de burbuja.
 * 
 * @param arr Arreglo de enteros a ordenar.
 * @param n Tamaño del arreglo.
 */
void burbuja(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++)     
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

// Función auxiliar para Quicksort
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1), temp;

    for (int j = low; j <= high- 1; j++) {
        if (arr[j] < pivot) {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
/**
 * Ordena un arreglo usando el algoritmo de quicksort.
 * 
 * @param arr Arreglo de enteros a ordenar.
 * @param low Índice inferior del segmento del arreglo a ordenar.
 * @param high Índice superior del segmento del arreglo a ordenar.
 */
void quicksort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quicksort(arr, low, pi - 1);
        quicksort(arr, pi + 1, high);
    }
}   

/**
 * Ordena un arreglo usando el algoritmo de shellsort.
 * 
 * @param arr Arreglo de enteros a ordenar.
 * @param n Tamaño del arreglo.
 */
void shellsort(int arr[], int n) {
    int gap, i, j, temp;

    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i += 1) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

/**
 * Mide el tiempo que tarda una función de ordenamiento en ordenar un arreglo.
 * 
 * @param ordenamiento Puntero a la función de ordenamiento.
 * @param arr Arreglo de enteros a ordenar.
 * @param n Tamaño del arreglo.
 * @return Tiempo en segundos que tardó el algoritmo de ordenamiento.
 */
double medirTiempo(void (*ordenamiento)(int[], int), int arr[], int n) {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    ordenamiento(arr, n);
    end = clock();
    
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    return cpu_time_used;
}