
#include <stdio.h>
#include <math.h>

// Declaration of functions
void nVecesHola(int n)
// This function recursively prints "hola" n times.;
void nPrimerosNumeros(int n)
// This function recursively prints the first n numbers.;
void mostrarMenu();
void tablaMultiplicar(int n, int i)
// This function recursively prints the multiplication table for number n.;
void todasLasTablasHastaN(
// TODO: Explain how todasLasTablasHastaN works recursively.
int n);
void imprimirTablas(int current, int n)
// This function recursively prints all multiplication tables up to number n.;
int sumatoria(int n)
// This function recursively calculates the summation of numbers up to n.;
int factorial(int x)
// This function recursively calculates the factorial of x.;
int sumatoriaExpresion(int n)
// This function recursively calculates the summation of x^x for numbers between 1 and n.;


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
    if(opcion == 1)
    {
        
            printf("Introduce el numero de veces que se repetira el texto: ");
            scanf("%d", &n);
            nVecesHola(n);
            

        else if( == 2)
            printf("2.Introduce el numero el numero mayor para imprimir los primeros numeros: ");
            scanf("%d", &n);
            nPrimerosNumeros(n);
            

        else if( == 3)
            printf("3.Introduce el numero para mostrar la tabla de multiplicar: ");
            scanf("%d", &n);
            tablaMultiplicar(n, 10);
            

        else if( == 4)
            printf("4.Introduce el numero N para mostrar todas las tablas hasta N: ");
            scanf("%d", &n);
            imprimirTablas(1, n);
            
        else if( == 5)
            printf("5.Introduce el numero N para mostrar la sumatoria de los numeros enteros hasta N: ");
            scanf("%d", &n);
            sumatoria(n);
            
        else if( == 6)
            printf("6.Introduce el numero N para mostrar el factorial de N: ");
            scanf("%d", &n);
            factorial(n);
            
        else if( == 7)
            printf("7.Introduce el numero N para mostrar la sumatoria de los numeros dados por la expresion x^x para todos los numeros entre 1 y N: ");
            scanf("%d", &n);
            sumatoriaExpresion(n);
            
        default:
            printf("Opcion no valida.\n");
            
    }
}

void nVecesHola(int n)
// This function recursively prints "hola" n times.
{
    if (n == 0)
    {
        return;
    }
    printf("Hola \n");
    nVecesHola(n - 1);
}

void nPrimerosNumeros(int n)
// This function recursively prints the first n numbers.
{
    if (n == 0)
    {
        return;
    }
    nPrimerosNumeros(n - 1);
    printf("%d \n", n);
}

void tablaMultiplicar(int n, int i)
// This function recursively prints the multiplication table for number n.
{
    if (i == 0)
    {
        return;
    }
    printf("%d x %d = %d \n", n, i, n * i);
    tablaMultiplicar(n, i - 1);
}

void imprimirTablas(int current, int n)
// This function recursively prints all multiplication tables up to number n.
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
// This function recursively calculates the summation of numbers up to n.
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
// This function recursively calculates the factorial of x.
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
// This function recursively calculates the summation of x^x for numbers between 1 and n.
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

void submultiplos(
// TODO: Explain how submultiplos works recursively.
int x, int i)
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


// 1. Procedure that prints "hola" n times
void nVecesHola(int n) {
    if (n > 0) {
        printf("hola\n");
        nVecesHola(n-1);
    }
}

// 2. Procedure that prints the first N integers
void nPrimerosNumeros(int n, int current=1) {
    if (current <= n) {
        printf("%d\n", current);
        nPrimerosNumeros(n, current + 1);
    }
}

// 3. Procedure that shows the multiplication table of a number N
void tablaMultiplicar(int n, int i=1) {
    if (i <= 10) {
        printf("%d * %d = %d\n", n, i, n * i);
        tablaMultiplicar(n, i + 1);
    }
}

// 4. Procedure that prints multiplication tables from 1 to N
void imprimirTablas(int current, int n) {
    if (current <= n) {
        printf("Tabla del %d:\n", current);
        tablaMultiplicar(current);
        printf("\n");
        imprimirTablas(current + 1, n);
    }
}

// 5. Function that returns the summation of integers up to N
int sumatoria(int n) {
    if (n == 0) return 0;
    return n + sumatoria(n-1);
}

// 6. Function that returns the factorial of x
int factorial(int x) {
    if (x <= 1) return 1;
    return x * factorial(x-1);
}

// 7. Function that returns the summation of numbers given by the expression x^x for numbers between 1 and n
int sumatoriaExpresion(int n) {
    if (n == 1) return 1;
    return pow(n, n) + sumatoriaExpresion(n-1);
}

// 8. Function that raises a number x to y (being y a positive integer)
int elevarNumero(int x, int y) {
    if (y == 0) return 1;
    return x * elevarNumero(x, y-1);
}

// 9. Function that indicates if a number x is even or odd
bool esPar(int x) {
    if (x == 0) return true;
    if (x == 1) return false;
    return esPar(x-2);
}

// 10. Procedure that displays the submultiples of x (positive integer)
void submultiplos(int x, int current=1) {
    if (current <= x) {
        if (x % current == 0) {
            printf("%d\n", current);
        }
        submultiplos(x, current + 1);
    }
}

// 11. Boolean function that indicates whether a number is prime or not
bool esPrimoAux(int n, int i);
bool esPrimo(int n) {
    if (n <= 1) return false;
    return esPrimoAux(n, 2);
}
bool esPrimoAux(int n, int i) {
    if (i == n) return true;
    if (n % i == 0) return false;
    return esPrimoAux(n, i + 1);
}

// 12. Function that returns the nth number of the Fibonacci series
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

// 13. Procedure that displays the first n numbers of the Fibonacci series
void primerosFibonacci(int n, int current=1) {
    if (current <= n) {
        printf("%d ", fibonacci(current));
        primerosFibonacci(n, current + 1);
    }
}

// 14. Function that finds and returns the least common multiple of two positive integers a and b
int minimoComunMultiplo(int a, int b) {
    return (a * b) / __gcd(a, b);
}

// 15. Function that finds and returns the greatest common divisor between two positive integers a and b
int maximoComunDivisor(int a, int b) {
    if (b == 0) return a;
    return maximoComunDivisor(b, a % b);
}

// 16. Procedure that indicates the steps to solve the Tower of Hanoi problem with n rings
void torresDeHanoiAux(int n, char from_rod, char to_rod, char aux_rod);
void torresDeHanoi(int n) {
    torresDeHanoiAux(n, 'A', 'C', 'B');
}
void torresDeHanoiAux(int n, char from_rod, char to_rod, char aux_rod) {
    if (n == 1) {
        printf("Move ring 1 from rod %c to rod %c\n", from_rod, to_rod);
        return;
    }
    torresDeHanoiAux(n-1, from_rod, aux_rod, to_rod);
    printf("Move ring %d from rod %c to rod %c\n", n, from_rod, to_rod);
    torresDeHanoiAux(n-1, aux_rod, to_rod, from_rod);
}


        case 17:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion no valida. Por favor, intente de nuevo.\n");
    }
    // Return to the main menu after executing an option
    mostrarMenu();
}
