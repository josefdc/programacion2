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
int main()
{
    Menu();
    return 0;
}

void Menu()
{
    int opcion = 0;
    while(opcion !=12)
    {
        printf("1. Multiplos de 7\n");
        printf("2. Suma de 3\n");
        printf("3. Notas\n");
        printf("4. Perfecto\n");
        printf("5. Amigos\n");
        printf("6. Fibonacci\n");
        printf("7. Factorial\n");
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
            
        default:
            break;
        }
    }
}

//------------------------
void Multiplos7_mil()
{
    int i = 1;
    while (i <= 1000)
    {
        if (i % 7 == 0)
        {
            printf("%d\n", i);
        }
        i++;
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
    int i = 1;
    while (i <= n)
    {
        suma = suma + 3 * i;
        i++;
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
    int i = 1;
    while (i <= 4)
    {
        printf("Ingrese la nota %d: ", i);
        scanf("%f", &nota);
        total = total + nota;
        i++;
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
    int i = 1;
    int suma = 0;
    while (i < n)
    {
        if (n % i == 0)
        {
            suma = suma + i;
            printf("%d\n", i);
        }
        i++;
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
*/
void Amigos()
{
    int a, b;
    printf("Ingrese dos numeros: ");
    scanf("%d %d", &a, &b);
    int i = 1;
    int suma_a = 0;
    int suma_b = 0;
    while (i < a)
    {
        if (a % i == 0)
        {
            suma_a = suma_a + i;
        }
        i++;
    }
    i = 1;
    while (i < b)
    {
        if (b % i == 0)
        {
            suma_b = suma_b + i;
        }
        i++;
    }
    if (suma_a == b && suma_b == a)
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
*/
void Fibonacci()
{
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    int i = 1;
    int a = 1;
    int b = 1;
    int c = 0;
    while (i <= n)
    {
        printf("%d\n", a);
        c = a + b;
        a = b;
        b = c;
        i++;
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
    while (i <= n)
    {
        factorial = factorial * i;
        i++;
    }
    printf("El factorial es: %d\n", factorial);
    system("pause");
}