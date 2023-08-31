
#include <stdio.h>
#include <math.h>

// Declaration of functions
void nVecesHola(int n);
void nPrimerosNumeros(int n);
void mostrarMenu();
void tablaMultiplicar(int n, int i);
void todasLasTablasHastaN(int n);
void imprimirTablas(int current, int n);
void sumatoria(int n);

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
    printf("4. Todas las tablas de multiplicar hasta N\n");
    printf("5. Sumatoria de los numeros enteros hasta N\n");
    printf("Seleccione una opcion (1-5)?\n");
    scanf("%d", &opcion);

    int n;
    switch(opcion)
    {
        case 1:
            printf("Introduce el numero de veces que se repetira el texto: ");
            scanf("%d", &n);
            nVecesHola(n);
            break;

        case 2:
            printf("2.Introduce el numero el numero mayor para imprimir los primeros numeros: ");
            scanf("%d", &n);
            nPrimerosNumeros(n);
            break;

        case 3:
            printf("3.Introduce el numero para mostrar la tabla de multiplicar: ");
            scanf("%d", &n);
            tablaMultiplicar(n, 10);
            break;

        case 4:
            printf("4.Introduce el numero N para mostrar todas las tablas hasta N: ");
            scanf("%d", &n);
            imprimirTablas(1, n);
            break;
        case 5:
            printf("5.Introduce el numero N para mostrar la sumatoria de los numeros enteros hasta N: ");
            scanf("%d", &n);
            sumatoria(n);
            break;

        default:
            printf("Opcion no valida.\n");
            break;
    }
}

void nVecesHola(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("Hola \n");
    nVecesHola(n - 1);
}

void nPrimerosNumeros(int n)
{
    if (n == 0)
    {
        return;
    }
    nPrimerosNumeros(n - 1);
    printf("%d \n", n);
}

void tablaMultiplicar(int n, int i)
{
    if (i == 0)
    {
        return;
    }
    printf("%d x %d = %d \n", n, i, n * i);
    tablaMultiplicar(n, i - 1);
}

void imprimirTablas(int current, int n)
{
    if (current > n)
    {
        return;
    }
    printf("\nTabla del %d:\n", current);
    tablaMultiplicar(current, 10);
    imprimirTablas(current + 1, n);
}

//hacer una funcion que devuelva la sumatoria para los numeros enteros hasta N

void sumatoria(int n)
{
    if (n == 0)
    {
        return;
    }
    sumatoria(n - 1);
    printf("%d \n", n);
}