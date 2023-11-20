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
    int mivector[] = { 49 ,54 ,47 ,9 ,32 ,82 ,11 ,55 ,79 ,10 ,98 ,67 ,76 ,81 ,66 ,80 ,38 ,72 ,89 ,90 ,55 ,58 ,11 ,29 ,45 ,5 ,81 ,16 ,32 ,51 ,85 ,38 , 92 ,84 ,84 ,80 ,9 ,64 ,21 ,98 ,18 ,88 ,91 ,18 ,25 ,26 ,88 ,41 ,87 ,54 ,41 ,62 ,62 ,8 ,85 ,51 ,24 ,47 ,41 ,16 ,71 ,65 ,81 ,48 ,36 ,98 ,55 ,73 ,19
        ,18 ,59 ,19 ,18 ,96 ,81 ,98 ,51 ,83 ,12 ,36 ,14 ,92 ,17 ,74 ,53 ,41 ,73 ,2 ,54 ,74 ,22 ,27 ,55 ,61 ,33 ,82 ,25 ,35 ,12 ,4 ,47 ,17 ,38 ,86 ,47 ,2
        ,25 ,48 ,40 ,45 ,53 ,9 ,95 ,27 ,95 ,35 ,28 ,78 ,70 ,86 ,88 ,92 ,64 ,65 ,23 ,93 ,77 ,26 ,76 ,47 ,6 ,4 ,23 ,42 ,92 ,78 ,37 ,23 ,19 ,34 ,94 ,3 ,29 ,
        69 ,67 ,26 ,73 ,85 ,91 ,37 ,71 ,59 ,7 ,83 ,75 ,3 ,55 ,20 ,98 ,13 ,69 ,1 ,56 ,74 ,1 ,29 ,79 ,21 ,72 ,36 ,61 ,59 ,59 ,67 ,35 ,56 ,27 ,90 ,95 ,56 ,
        93 ,39 ,56 ,28 ,49 ,51 ,45 ,88 ,35 ,36 ,22 ,7 ,21 ,42 ,78 ,39 ,12 ,65 ,63 ,56 ,61 ,35 ,66 ,56 ,2 ,34 ,90 ,62 ,89 ,91 ,4 ,73 ,6 ,66 ,26 ,10 ,
        9 ,83 ,40 ,8 ,70 ,4 ,10 ,74 ,8 ,9 ,14 ,97 ,87 ,22 ,57 ,99 ,31 ,87 ,4 ,61 ,74 ,25 ,38 ,87 ,13 ,21 ,73 ,9 ,75 ,53 ,35 ,29 ,19 ,89 ,64 ,57 ,75 ,
        44 ,3 ,72 ,11 ,47 ,88 ,19 ,1 ,11 ,33 ,87 ,23 ,59 ,90 ,74 ,79 ,43 ,9 ,97 ,53 ,89 ,75 ,31 ,18 ,4 ,24 ,81 ,82 ,74 ,12 ,77 ,52 ,99 ,90 ,82 ,20 ,
        59 ,60 ,2 ,48 ,32 ,95 ,71 ,24 ,43 ,53 ,56 ,50 ,15 ,68 ,23 ,17 ,83 ,3 ,29 ,73 ,0 ,77 ,17 ,98 ,48 ,16 ,96 ,39 ,6 ,26 ,44 ,98 ,54 ,49 ,27 ,43 ,
        22 ,87 ,67 ,96 ,4 ,91 ,11 ,71 ,25 ,59 ,81 ,0 ,39 ,13 ,36 ,74 ,8 ,77 ,30 ,57 ,29 ,98 ,54 ,63 ,80 ,90 ,95 ,55 ,42 ,66 ,65 ,6 ,13 ,60 ,8 ,85 ,
        38 ,15 ,63 ,89 ,1 ,29 ,55 ,6 ,52 ,70 ,81 ,63 ,35 ,47 ,74 ,65 ,71 ,23 ,40 ,34 ,57 ,35 ,94 ,9 ,93 ,98 ,66 ,95 ,73 ,38 ,10 ,56 ,57 ,96 ,88 ,56 ,
        1 ,97 ,66 ,4 ,36 ,27 ,30 ,12 ,11 ,87 ,70 ,35 ,6 ,53 ,22 ,76 ,26 ,89 ,65 ,3 ,30 ,29 ,87 ,2 ,76 ,1 ,16 ,24 ,24 ,66 ,42 ,25 ,4 ,52 ,81 ,82 ,91 ,
        18 ,19 ,18 ,62 ,93 ,86 ,78 ,52 ,77 ,65 ,13 ,15 ,99 ,49 ,64 ,15 ,91 ,0 ,29 ,46 ,32 ,48 ,41 ,30 ,29 ,70 ,71 ,91 ,7 ,10 ,87 ,1 ,91 ,28 ,57 ,29 ,
        24 ,48 ,65 ,8 ,31 ,5 ,26 ,96 ,83 ,50 ,93 ,37 ,52 ,11 ,75 ,43 ,38 ,47 ,35 ,47 ,0 ,13 ,98 ,23 ,72 ,13 ,92 ,56 ,21 ,86 ,49 ,40 ,61 ,94 ,21 ,89 ,
        5 ,39 ,11 ,59 ,73 ,45 ,50 ,35 ,34 ,90 ,23 ,12 ,22 ,21 ,67 ,46 ,55 ,81 ,66 ,47 ,60 ,32 ,5 ,23 ,5 ,98 ,12 ,45 ,51 ,36 ,87 ,24 ,8 ,32 ,20 ,45 ,
        45 ,44 ,76 ,21 ,0 ,10 ,12 ,59 ,88 ,7 ,97 ,80 ,73 ,5 ,57 ,33 ,6 ,82 ,28 ,62 ,55 ,11 ,50 ,87 ,95 ,32 ,81 ,64 ,55 ,80 ,19 ,40 ,7 ,24 ,64 ,33 ,
        57 ,31 ,48 ,86 ,20 ,49 ,24 ,8 ,77 ,20 ,98 ,71 ,3 ,52 ,58 ,69 ,85 ,4 ,76 ,92 ,39 ,6 ,58 ,73 ,27 ,3 ,52 ,39 ,24 ,84 ,94 ,37 ,64 ,26 ,81 ,77 ,
        99 ,69 ,31 ,38 ,29 ,24 ,65 ,51 ,84 ,76 ,45 ,74 ,51 ,77 ,47 ,30 ,57 ,10 ,70 ,68 ,47 ,35 ,85 ,47 ,27 ,60 ,69 ,35 ,24 ,49 ,5 ,8 ,13 ,55 ,5 ,
        74 ,88 ,31 ,82 ,5 ,78 ,91 ,49 ,48 ,10 ,89 ,1 ,90 ,5 ,99 ,91 ,4 ,61 ,64 ,42 ,25 ,5 ,53 ,45 ,72 ,53 ,7 ,59 ,50 ,62 ,49 ,47 ,62 ,94 ,25 ,30 ,
        49 ,4 ,4 ,52 ,48 ,98 ,18 ,8 ,48 ,21 ,10 ,88 ,49 ,86 ,60 ,58 ,11 ,54 ,19 ,48 ,36 ,82 ,88 ,35 ,84 ,38 ,83 ,23 ,93 ,13 ,21 ,63 ,89 ,77 ,11 ,
        81 ,97 ,60 ,11 ,22 ,35 ,73 ,19 ,42 ,64 ,48 ,35 ,24 ,26 ,92 ,82 ,92 ,31 ,55 ,37 ,98 ,80 ,92 ,54 ,11 ,48 ,51 ,27 ,18 ,68 ,35 ,8 ,3 ,30 ,79 ,
        77 ,11 ,52 ,41 ,4 ,14 ,86 ,5 ,22 ,31 ,57 ,21 ,90 ,56 ,23 ,60 ,78 ,97 ,69 ,36 ,66 ,95 ,52 ,71 ,5 ,23 ,16 ,55 ,18 ,10 ,68 ,69 ,96 ,74 ,6 ,39 ,
        41 ,59 ,42 ,22 ,90 ,47 ,50 ,46 ,53 ,38 ,39 ,88 ,61 ,89 ,63 ,70 ,91 ,95 ,2 ,86 ,25 ,84 ,31 ,36 ,19 ,59 ,64 ,49 ,25 ,37 ,51 ,93 ,28 ,12 ,77 ,9 ,
        86 ,74 ,87 ,12 ,33 ,6 ,94 ,61 ,73 ,78 ,76 ,70 ,93 ,21 ,76 ,24 ,81 ,53 ,68 ,23 ,82 ,20 ,6 ,17 ,66 ,5 ,19 ,18 ,48 ,92 ,68 ,31 ,49 ,11 ,0 ,9 ,98 ,
        56 ,94 ,70 ,43 ,86 ,68 ,38 ,77 ,16 ,44 ,88 ,52 ,41 ,43 ,12 ,16 ,46 ,30 ,87 ,88 ,3 ,44 ,1 ,47 ,71 ,13 ,69 ,42 ,28 ,73 ,27 ,11 ,27 ,94 ,37 ,63 ,
        49 ,26 ,60 ,17 ,18 ,1 ,2 ,53 ,90 ,54 ,74 ,89 ,21 ,59 ,20 ,12 ,11 ,29 ,98 ,70 ,50 ,57 ,49 ,65 ,55 ,13 ,38 ,77 ,73 ,86 ,85 ,98 ,36 ,7 ,39 ,70 ,24 ,
        39 ,21 ,1 ,31 ,22 ,72 ,65 ,57 ,54 ,21 ,91 ,58 ,37 ,54 ,81 ,93 ,65 ,40 ,81 ,5 ,43 ,50 ,45 ,59 ,15 ,84 ,18 ,5 ,0 ,21 ,35 ,23 ,66 ,12 ,60 ,60 ,38 ,
        79 ,35 ,39 ,58 ,0 ,33 ,69 ,35 ,8 ,99 ,13 ,82 ,35 ,32 ,41 ,5 ,78 ,13 ,56 ,38 ,58 ,45 ,60 ,87 ,54 ,91 };
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