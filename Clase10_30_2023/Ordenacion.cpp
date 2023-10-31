#include <stdio.h>

void ordIntercambio(int vector[], int N);
void MostrarDatos(int vector[], int N);
void ordSeleccion(int vector[], int N);
void ordInsercion(int vector[], int N);
void ordBurbuja(int vector[], int N);
void ordenacionShell(int vector[], int N);
void quicksort(int vector[], int primero, int ultimo);

/**
 * @brief funcion para mostrar los datos de un vector
 * 
 * @param vector 
 * @param N 
 */
void MostrarDatos(int vector[], int N)
{
    for (int i = 0; i < N; ++i)
    {
        printf("%d ", vector[i]);
    }
    printf("\n");
}

int main()
{
    // Definir un vector con 52 datos aleatorios entre 1 y 20
    int MiVector[] = {
        3, 17, 6, 19, 10, 13, 2, 16, 8, 1,
        20, 14, 7, 18, 9, 4, 12, 15, 11, 5,
        3, 17, 6, 19, 10, 13, 2, 16, 8, 1,
        20, 14, 7, 18, 9, 4, 12, 15, 11, 5,
        3, 17, 6, 19, 10, 13, 2, 16, 8, 1,
        20, 14, 7, 18, 9, 4};
    printf("Vector original:\n");
    MostrarDatos(MiVector, 52);
    printf("Vector ordenado por el metodo de ordenacion de intercambio:\n");
    ordIntercambio( MiVector, 52);
    printf("Vector ordenado por el metodo de ordenacion de seleccion:\n");
    ordSeleccion(MiVector, 52);
    printf("Vector ordenado por el metodo de ordenacion de insercion:\n");
    ordInsercion(MiVector, 52);
    printf("Vector ordenado por el metodo de ordenacion de burbuja:\n");
    ordBurbuja(MiVector, 52);
    printf("Vector ordenado por el metodo de ordenacion de shell:\n");
    ordenacionShell(MiVector, 52);
    printf("Vector ordenado por el metodo de ordenacion de quicksort:\n");
    quicksort(MiVector, 0, 51);

    return 0;
}

void ordIntercambio(int vector[], int N)
{
    int i, j, aux;
    /* se realiza n-1 pasadas*/
    /* a[0], ... , a[n-2]*/
    for (i = 0; i < N - 1; i++)
    {
        /* desde a[i+1] hasta a[n-1]*/
        for (j = i + 1; j < N; j++)
        {
            /* si están desordenados*/
            if (vector[i] > vector[j])
            {
                /* se reordenan*/
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
        
    }
    // Muestra el vector después de cada pasada completa
        MostrarDatos(vector, N);
}

/**
 * @brief Ordena un arreglo de números reales utilizando el algoritmo de selección.
 * 
 * @param a Arreglo de números reales a ordenar.
 * @param n Número de elementos en el arreglo.
 */
void ordSeleccion(int a[], int n)
{
    int indiceMenor, i, j;

    // Ordenar a[0]..a[n-2] y a[n-1] en cada pasada
    for (i = 0; i < n - 1; i++)
    {
        // Comienza la exploración en índice i
        indiceMenor = i;

        // j explora la sublista a[i+1]..a[n-1]
        for (j = i + 1; j < n; j++)
        {
            // Encuentra el índice del elemento más pequeño
            if (a[j] < a[indiceMenor])
            {
                indiceMenor = j;
            }
        }

        // Si el elemento más pequeño no está ya en la posición correcta, intercambiarlo
        if (i != indiceMenor)
        {
            double aux = a[i];
            a[i] = a[indiceMenor];
            a[indiceMenor] = aux;
        }
    } MostrarDatos(a, n);
}

/**
 * @brief Ordena un arreglo de enteros utilizando el algoritmo de inserción.
 * 
 * @param a Arreglo de enteros a ordenar.
 * @param n Número de elementos en el arreglo.
 */
void ordInsercion(int a[], int n)
{
    int i, j;
    int aux;

    // Comienza desde el segundo elemento, ya que el primero se considera ordenado
    for (i = 1; i < n; i++)
    {
        // Selecciona el valor a insertar
        aux = a[i];
        j = i;

        // Busca la posición correcta para el elemento aux
        while (j > 0 && aux < a[j - 1])
        {
            // Desplaza los elementos hacia arriba para hacer espacio
            a[j] = a[j - 1];
            j--;
        }

        // Inserta el elemento en su posición correcta
        a[j] = aux;
    }MostrarDatos(a, n);
}

/**
 * @brief Ordena un arreglo de números enteros largos utilizando el algoritmo de burbuja optimizado.
 * 
 * @param a Arreglo de números enteros largos a ordenar.
 * @param n Número de elementos en el arreglo.
 */
void ordBurbuja(int a[], int n)
{
    int interruptor = 1; // Se utiliza para determinar si se han realizado intercambios en la pasada.
    int pasada, j;

    // Bucle externo controla la cantidad de pasadas
    for (pasada = 0; pasada < n - 1 && interruptor; pasada++)
    {
        interruptor = 0; // Se reinicia el interruptor para la siguiente pasada

        // Bucle interno realiza la comparación de elementos adyacentes
        for (j = 0; j < n - pasada - 1; j++)
        {
            // Si los elementos están desordenados, se realiza un intercambio
            if (a[j] > a[j + 1])
            {
                long aux; // Variable auxiliar para el intercambio
                interruptor = 1; // Se marca que se ha realizado un intercambio
                aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }MostrarDatos(a, n);
}

/**
 * @brief Ordena un arreglo de números reales utilizando el algoritmo de ordenación de Shell.
 * 
 * @param a Arreglo de números reales a ordenar.
 * @param n Número de elementos en el arreglo.
 */
void ordenacionShell(int a[], int n)
{
    int intervalo, i, j, k;
    intervalo = n / 2;

    // Continúa hasta que el intervalo sea 0
    while (intervalo > 0)
    {
        // Recorre el arreglo con el intervalo actual
        for (i = intervalo; i < n; i++)
        {
            j = i - intervalo;

            // Realiza comparaciones y cambios con elementos separados por el intervalo
            while (j >= 0)
            {
                k = j + intervalo;

                // Si los elementos están en el orden correcto, termina el bucle
                if (a[j] <= a[k])
                {
                    j = -1; // Termina el bucle
                }
                else
                {
                    // Intercambia los elementos
                    double temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;

                    // Mueve el índice j hacia atrás en el intervalo
                    j -= intervalo;
                }
            }
        }

        // Reduce el intervalo a la mitad para la siguiente pasada
        intervalo = intervalo / 2;
    }MostrarDatos(a, n);
}

/**
 * @brief Ordena un arreglo de números reales utilizando el algoritmo de quicksort.
 * 
 * @param a Arreglo de números reales a ordenar.
 * @param primero Índice del primer elemento del segmento a ordenar.
 * @param ultimo Índice del último elemento del segmento a ordenar.
 */
void quicksort(int a[], int primero, int ultimo)
{
    int i, j, central;
    double pivote;

    // Selecciona el elemento central como pivote
    central = (primero + ultimo) / 2;
    pivote = a[central];
    i = primero;
    j = ultimo;

    // Particiona el arreglo
    do {
        // Encuentra el elemento en la izquierda que debe estar en la derecha
        while (a[i] < pivote) i++;

        // Encuentra el elemento en la derecha que debe estar en la izquierda
        while (a[j] > pivote) j--;

        // Si encontramos valores que están en el lado incorrecto, los intercambiamos
        if (i <= j)
        {
            double tmp = a[i];
            a[i] = a[j];
            a[j] = tmp; // Intercambia a[i] con a[j]
            i++;
            j--;
        }
    } while (i <= j);
    

    // Recursivamente ordena los elementos antes y después de la partición
    if (primero < j)
        quicksort(a, primero, j); // Ordena la sublista izquierda
    if (i < ultimo)
        quicksort(a, i, ultimo); // Ordena la sublista derecha

    MostrarDatos(a, 52);
}
