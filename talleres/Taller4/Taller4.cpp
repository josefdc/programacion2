
#include <stdio.h>
#include <math.h>

// Declaration of functions
void nVecesHola(int n);
void nPrimerosNumeros(int n);
void mostrarMenu();
void tablaMultiplicar(int n, int i);
void imprimirTablas(int current, int n);
int sumatoria(int n);
int factorial(int x);
int sumatoriaExpresion(int n);
int potenciaRecursiva(int x, int y);
bool ImparPar(int x);
bool Primo(int n , int i);
void submultiplos(int x, int i);
int fibonacci(int n);
void fibonacci_secuencia(int n);
int mcm(int a, int b);
int mcd(int a, int b);
void hanoi(int n, char origen, char destino, char auxiliar);

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
    printf("8. Potencia de un numero x a la y potencia\n");
    printf("9. Indicar si un numero x es par o impar\n");
    printf("10. Indicar si un numero x es primo o no\n");
    printf("11. Submultiplos de un numero x\n");
    printf("12. N-esimo numero de la serie de Fibonacci\n");
    printf("13. N primeros numeros de la serie de Fibonacci\n");
    printf("14. Minimo comun multiplo de dos numeros a y b\n");
    printf("15. Maximo comun divisor de dos numeros a y b\n");
    printf("16. Pasos a seguir para resolver el problema de las torres de Hanoi con n anillos\n");
    printf("Seleccione una opcion (1-16)?\n");
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
        case 8:
            printf("8.Introduce el numero x para mostrar la potencia de x a la y potencia: ");
            scanf("%d", &n);
            int y;
            printf("Introduce el numero y para mostrar la potencia de x a la y potencia: ");
            scanf("%d", &y);
            potenciaRecursiva(n, y);
            break;
        case 9:
            printf("9.Introduce el numero x para mostrar si es par o impar: ");
            scanf("%d", &n);
            if (ImparPar(n))
            {
                printf("El numero %d es par\n", n);
            }
            else
            {
                printf("El numero %d es impar\n", n);
            }
        case 10:
            printf("10.Introduce el numero x para mostrar si es primo o no: ");
            scanf("%d", &n);
            if (Primo(n, n - 1))
            {
                printf("El numero %d es primo\n", n);
            }
            else
            {
                printf("El numero %d no es primo\n", n);
            }
        case 11:
            printf("11.Introduce el numero x para mostrar los submultiplos: ");
            scanf("%d", &n);
            submultiplos(n, n - 1);
        case 12:
            printf("12.Introduce el numero x para mostrar el n-esimo numero de la serie de Fibonacci: ");
            scanf("%d", &n);
            printf("El n-esimo numero de la serie de Fibonacci es: %d\n", fibonacci(n));
        case 13:
            printf("13.Introduce el numero x para mostrar los n primeros numeros de la serie de Fibonacci: ");
            scanf("%d", &n);
            fibonacci_secuencia(n);
        case 14:
            printf("14.Introduce el numero a para mostrar el minimo comun multiplo de dos numeros a y b: ");
            scanf("%d", &n);
            int b;
            printf("Introduce el numero b para mostrar el minimo comun multiplo de dos numeros a y b: ");
            scanf("%d", &b);
            printf("El minimo comun multiplo de %d y %d es: %d\n", n, b, mcm(n, b));
        case 15:
            printf("15.Introduce el numero a para mostrar el maximo comun divisor de dos numeros a y b: ");
            scanf("%d", &n);
            printf("Introduce el numero b para mostrar el maximo comun divisor de dos numeros a y b: ");
            scanf("%d", &b);
            printf("El maximo comun divisor de %d y %d es: %d\n", n, b, mcd(n, b));
        case 16:
            printf("16.Introduce el numero de anillos para mostrar los pasos a seguir para resolver el problema de las torres de Hanoi con n anillos: ");
            scanf("%d", &n);
            hanoi(n, 'A', 'C', 'B');
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

// int potenciaRecursiva(int x, int y)
// {
//     if (y == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         int resultado = x * potenciaRecursiva(x, y - 1);
//         printf("El resultado de %d elevado a la potencia %d es: %d\n", x, y, resultado);
//         return resultado;
//     }
// }
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

//Implementar una funcion que eleve un numero x a la y potencia (siendo y un numero entero positivo) de manera recursiva

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

// hacer una funcion que indique si un numero x es par o impar de manera recursiva
bool ImparPar(int x)
{
    if (x == 0)
    {
        return true;
    }
    else if (x == 1)
    {
        return false;
    }
    else
    {
        return ImparPar(x - 2);
    }
}

// hacer una funcion boooleana que indique si un numero x es primo o no de manera recursiva

bool Primo(int n , int i)
{
    if (i == 1)
    {
        return true;
    }
    else if (n % i == 0)
    {
        return false;
    }
    else
    {
        return Primo(n, i - 1);
    }
}

//Hacer un procedimiento que muestre por pantalla los subm ́ultiplos de x (entero positivo

// int submultiplos(int x, int i)
// {
//     if (i == 0)
//     {
//         return;
//     }
//     if (x % i == 0)
//     {
//         printf("%d \n", i);
//     }
//     submultiplos(x, i - 1);
// }

// Hacer una funcion que devuelva el n-esimo numero de la serie de Fibonacci

int fibonacci(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Hacer un procedimiento que muestre por pantalla los n primeros numeros de la serie de Fibonacci

void fibonacci_secuencia(int n)
{
    if (n == 0)
    {
        return;
    }
    fibonacci_secuencia(n - 1);
    printf("%d \n", fibonacci(n));
}
//hacer una funcion que encuentre y devuelva el minimo comun multiplo de dos numeros enteros positivos a y b

int mcm(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return mcm(a, b + a);
    }
    else
    {
        return mcm(a + b, b);
    }
}

// hacer una funcion que encuentre  y retorne el maximo comun divisor entre dos numeros a y b enteros posivos

int mcd(int a, int b)
{
    if (a == b)
    {
        return a;
    }
    else if (a > b)
    {
        return mcd(a - b, b);
    }
    else
    {
        return mcd(a, b - a);
    }
}

// hacer un procedimiento que indique los pasos a seguir para resolver el problema de las torres de Hanoi con n anillos

void hanoi(int n, char origen, char destino, char auxiliar)
{
    if (n == 1)
    {
        printf("Mover anillo 1 de %c a %c\n", origen, destino);
        return;
    }
    hanoi(n - 1, origen, auxiliar, destino);
    printf("Mover anillo %d de %c a %c\n", n, origen, destino);
    hanoi(n - 1, auxiliar, destino, origen);
}

