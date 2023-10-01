/*
LINK DEL REPOSITORIO:

https://github.com/josefdc/programacion2/tree/main/talleres

*/


#include <iostream>
#include <cstdio>
#include <cstdlib>

// Function declarations
void Menu();
void Multiplos7_mil();
long Suma3(int n);
void Notas();
void Perfecto();
void Amigos();
void Fibonacci();
void Factorial();
void Perfectos();
void rangoPrimos();
void factoriales();
void tablas();
int main()
{
    Menu();
    return 0;
}
// void menu con for
void Menu()
{
    int opcion;
    for(opcion = 0; opcion != 12; )
    {
        printf("1. Multiplos de 7\n");
        printf("2. Suma de 3\n");
        printf("3. Notas\n");
        printf("4. Perfecto\n");
        printf("5. Amigos\n");
        printf("6. Fibonacci\n");
        printf("7. Factorial\n");
        printf("8. ¿Cuantos numero perfectos hay entre 1 y 10000 Perfectos?\n");
        printf("9. ¿Cuantos numero primos hay entre 1 y 1000?\n");
        printf("10. Factoriales\n");
        printf("11. Tablas\n");
        printf("12. Salir\n");
        printf("Ingrese una opcion: (1-12)\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1 :
            Multiplos7_mil();
            break;
        case 2:
            int n;
            printf("Ingrese un numero: ");
            scanf("%d", &n);
            printf("La suma es: %ld\n", Suma3(n));
            system("pause");
            break;
        case 3:
            Notas();
            break;
        case 4:
            Perfecto();
            break;
        case 5:
            Amigos();
            break;
        case 6:
            Fibonacci();
            break;
        case 7:
            Factorial();
            break;
        case 8:
            Perfectos();
            break;
        case 9:
            rangoPrimos();
            break;
        case 10:
            factoriales();
            break;
        case 11:
            tablas();
            break;
        case 12:
            printf("Adios\n");
            break;
        default:
            break;
        }
    }
}

//------------------------
void Multiplos7_mil()
{
   
    for(i = 1; i <= 1000; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
    }

    system("pause");
}
//------------------------
/*
2. Implementar un algoritmo que calcule la siguiente suma: 3(1)+3(2)+3(3)+3(4)+…..+3(n),
 ingresar n por teclado mostrar el resultado de dicha suma.
*/
long Suma3(int n)
{
    long suma = 0;
    int i 
    for (i = 1; i <= n; i++)
    {
        suma = suma + 3 * i;
    }   

    return suma;
}
//------------------------
/*
3. Leer por teclado cuatro notas de un estudiante en una sola variable, cada vez el acumulado se debe
  guardar en una variable llamada total. Cuando se lean las cuatro determinar el promedio, si el promedio
  es mayor o igual a tres, imprimir “ganaste” de lo contrario imprimir “perdiste
*/
void Notas()
{
    float nota, total = 0;
    for (int i = 1; i <= 4; i++)
    {
        printf("Ingrese la nota %d: ", i);
        scanf("%f", &nota);
        total = total + nota;
    }
    float promedio = total / 4;
    if (promedio >= 3)
    {
        printf("Ganaste\n");
    }
    else
    {
        printf("Perdiste\n");
    }
    system("pause");
}
//--------------------------------------
/*
4. Un entero positivo n se llama perfecto si n es igual a la suma de todos sus divisores diferentes de él. 
Por ejemplo, 6 es perfecto porque 6 = 1 + 2 + 3. Escriba un programa que lea por teclado un número entero positivo,
 y nos indique si éste es perfecto o no. Además, el programa debe imprimir todos los divisores del número.
*/
void Perfecto()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int suma = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            suma = suma + i;
            printf("%d\n", i);
        }
    }
    if (suma == n)
    {
        printf("Es perfecto\n");
    }
    else
    {
        printf("No es perfecto\n");
    }
    system("pause");
}
/*
5. Leer dos números enteros por tecladoy determinar si éstos son números amigos(Dos números amigos son
 dos enteros positivos a y b tales que a es la suma de los divisores propios de b, y b es la suma
  de los divisores propios de a. la unidad se considera divisor propio, pero no lo es el mismo número).
con for
*/
void amigos()
{
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    int sumaA = 0;
    int sumaB = 0;
    int i;
    for (i = 1; i < a; i++)
    {
        if (a % i == 0)
        {
            sumaA = sumaA + i;
        }
    }
    for (i = 1; i < b; i++)
    {
        if (b % i == 0)
        {
            sumaB = sumaB + i;
        }
    }
    if (sumaA == b && sumaB == a)
    {
        printf("Son amigos\n");
    }
    else
    {
        printf("No son amigos\n");
    }
    system("pause");
}

/*
6. Leer un número entero positivo n por teclado y mostrar por pantalla la secuencia de fibonacci con n
 terminos.(ejemplo: si se lee un 3 se debe mostrar la serie hasta el tercer número 1,1,2. Si se lee un 5,
  se debe mostrar la serie hasta el quinto número 1,1,2,3,5).
Nota: la secuencia de fibonacci es: 1,1,2,3,5,8,13, 21. La secuencia inicia con 1,1 y el siguiente término es la suma de los dos anteriores.
con for
*/
void Fibonacci()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int i;
    int a = 1;
    int b = 1;
    for (i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        int c = a + b;
        a = b;
        b = c;
    }
    system("pause");
}

/*
7. Leer un entero n por teclado y calcular su factorial, n!=1*2*3*4*....*n.
*/
void Factorial()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int i = 1;
    int factorial = 1;
    do
    {
        factorial = factorial * i;
        i++;
    }while (i <= n);
    printf("El factorial de %d es %d\n", n, factorial);
    system("pause");
}
/*
implementar un algoritmo que diga cuantos numeros perfectos hay entre
1 y 10000.
*/
void Perfectos()
{
    int i;
    int perfectos = 0;
    for (i = 1; i <= 10000; i++)
    {
        int j;
        int suma = 0;
        for (j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                suma = suma + j;
            }
        }
        if (suma == i)
        {
            perfectos++;
        }
    }
    printf("Hay %d numeros perfectos entre 1 y 10000\n", perfectos);
    system("pause");
}
/*
Implementar un algoritmo que diga cuales numeros primos hay entre 1 y
1000 (debe mostrar los numeros).
*/
void rangoPrimos()
{
    int i;
    for (i = 1; i <= 1000; i++)
    {
        int j;
        int divisores = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                divisores++;
            }
        }
        if (divisores == 2)
        {
            printf("%d\n", i);
        }
    }
    system("pause");
}
/*
Hacer un programa que muestre los factoriales de los primeros 10 enteros,
debe tener la siguiente salida:
Factorial de 0: 1
Factorial de 1: 1
Factorial de 2: 2
Factorial de 3: 6
Factorial de 4: 24
*/

void factoriales()
{
    int i;
    for (i = 0; i <= 10; i++)
    {
        int j;
        int factorial = 1;
        for (j = 1; j <= i; j++)
        {
            factorial = factorial * j;
        }
        printf("Factorial de %d: %d\n", i, factorial);
    }
    system("pause");
}

/*
Implementar las tablas de multiplicar del 10 al 20 conn for
*/
void tablas()
{
    int i;
    for (i = 10; i <= 20; i++)
    {
        int j;
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }
    system("pause");
}
