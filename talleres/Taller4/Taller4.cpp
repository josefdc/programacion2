#include <stdio.h>
#include <math.h>

// Constantes

// Declaración de funciones
void nVecesHola(int n);
void nPrimerosNumeros(int n);
void mostrarMenu();
void tablaMultiplicar(int n, int i);
int main()
{
    mostrarMenu();
    return 0;
}

void mostrarMenu()
{
    int opcion;
    printf("Menu Principal: \n");
    printf("1. N veces el texto hola\n");
    printf("2. N primeros numeros enteros\n");
    printf("3. Tabla de multiplicar de un numero\n");
    printf("Seleccione una opcion (1-3)?\n");
    scanf("%d", &opcion);  //

    // Variables para las diferentes opciones
    int n;

    if (opcion == 1)
    {
        printf("Introduce el numero de veces que se repetira el texto: ");
        scanf("%d", &n);
        nVecesHola(n);
    } 

    if (opcion == 2)
    {
        printf("2.Introduce el numero el numero mayor para imprimir los primeros numeros: ");
        scanf("%d", &n);
        nPrimerosNumeros(n);
    }
    if (opcion == 3)
    {
        printf("3.Introduce el numero para mostrar la tabla de multiplicar: ");
        scanf("%d", &n);
        tablaMultiplicar(n, 10);
    }
}
// Procedimiento para escribir N veces el texto hola
void nVecesHola(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("Hola \n");
        nVecesHola(n - 1);
    }
}

// Procedimiento para escribir los primeros N numeros enteros
void nPrimerosNumeros(int n)
{
    if (n == 0)
    {
        return;
    }
    else
    {
        printf("%d \n", n);
        nPrimerosNumeros(n - 1);
    }
}

// Procedimiento que muestre la tabla de multiplicar de un numero N de manera recursiva
void tablaMultiplicar(int n, int i)
{
    if (i == 0)
    {
        return;
    }
    else
    {
        printf("%d x %d = %d \n", n, i, n * i);
        tablaMultiplicar(n, i - 1);
    }
}
