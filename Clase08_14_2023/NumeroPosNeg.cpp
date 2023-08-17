/*
Este programa determina si un número ingresado por el usuario es positivo o negativo.
Si el número es mayor o igual a cero, se considera positivo y se muestra un mensaje en pantalla.
De lo contrario, se considera negativo y se muestra un mensaje en pantalla.
*/
#include<iostream>
using namespace std;

int numero;

int main()
{
    cout << "Ingrese el número --->";
    cin >> numero;
    if (numero >= 0)
    {
        cout << "El número es positivo";
    }
    else
    {
        cout << "El número es negativo";
    }
}