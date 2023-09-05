#include <iostream>
#include <cstdio>
#include <cstdlib>

// Function declarations
void Menu();
void Multiplos7_mil();
long Suma3(int n);
void Notas();
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
switch (expression)
{
case /* constant-expression */:
    /* code */
    break;

default:
    break;
}