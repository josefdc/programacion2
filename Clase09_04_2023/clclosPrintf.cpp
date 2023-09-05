/*
Ejemplo:
Elaborar un algoritmo que capture un numero y que realice la tabla de multiplicar del uno al diez
de ese numero.
*/
//librerias
#include <iostream>


int main()
{
    int num, i, mult;

    printf("Ingrese un numero: ");
    scanf("%d", &num);

    i = 1;
    while (i <= 10)
    {
        mult = num * i;
        printf("%d x %d = %d\n", num, i, mult);
        i++;
    }

    system("pause");
    return 0;
}