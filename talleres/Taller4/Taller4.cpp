
#include <stdio.h>
#include <math.h>

// Declaration of functions
void nVecesHola(int n);
void nPrimerosNumeros(int n);
void mostrarMenu();
void tablaMultiplicar(int n, int i);
void todasLasTablasHastaN(int n);
void imprimirTablas(int current, int n);
int sumatoria(int n);
int factorial(int x);
int sumatoriaExpresion(int n);


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
    printf("6. Factorial de N\n");
    printf("7. Sumatoria de los numeros dados por la expresion x^x para todos los numeros entre 1 y N\n");
    printf("Seleccione una opcion (1-6)?\n");
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
        case 6:
            printf("6.Introduce el numero N para mostrar el factorial de N: ");
            scanf("%d", &n);
            factorial(n);
            break;
        case 7:
            printf("7.Introduce el numero N para mostrar la sumatoria de los numeros dados por la expresion x^x para todos los numeros entre 1 y N: ");
            scanf("%d", &n);
            sumatoriaExpresion(n);
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


int sumatoria(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int resultado = n + sumatoria(n - 1);
        printf("La sumatoria de los numeros enteros hasta %d es: %d\n", n, resultado);
        return resultado;
    }
}

// hacer una funcion que devuelva el factorial de x

int factorial(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        int resultado = x * factorial(x - 1);
        printf("El factorial de %d es: %d\n", x, resultado);
        return resultado;
    }
}
// Hacer una funcion que devuelva la sumatoria de los numeros dados por la expresion x^x para todos los numeros entre 1 y n

int sumatoriaExpresion(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        int resultado = pow(n, n) + sumatoriaExpresion(n - 1);
        printf("La sumatoria de los numeros dados por la expresion x^x para todos los numeros entre 1 y %d es: %d\n", n, resultado);
        return resultado;
    }
}


// Implementar una funcion qye eleve un numero x a la potencia y(siendo y un numero entero positivo) de manera recursiva

int potenciaRecursiva(int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        int resultado = x * potenciaRecursiva(x, y - 1);
        printf("El resultado de %d elevado a la potencia %d es: %d\n", x, y, resultado);
        return resultado;
    }
}
// Hacer una funcion que indique si un numero x es par o impar de manera recursiva

int esPar(int x)
{
    if (x == 0)
    {
        return 1;
    }
    else
    {
        int resultado = esPar(x - 2);
        printf("El numero %d es par: %d\n", x, resultado);
        return resultado;
    }
}

int esImpar(int x)
{
    if (x == 1)
    {
        return 1;
    }
    else
    {
        int resultado = esImpar(x - 2);
        printf("El numero %d es impar: %d\n", x, resultado);
        return resultado;
    }
}

// hacer un procedimiento que muestre po rpantalla los submultiplos de x
// (entero positivo)
// 1, 2, 3, 4, 6, 8, 12, 24

void submultiplos(int x, int i)
{
    if (i == 0)
    {
        return;
    }
    if (x % i == 0)
    {
        printf("%d \n", i);
    }
    submultiplos(x, i - 1);
}