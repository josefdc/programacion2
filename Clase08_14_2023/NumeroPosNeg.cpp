/*
Elabaroar un numero que determine si un numero es negativo o positivo
*/

#include<iostream>
using namespace std;

int numero;

int main()
{
    cout << "ingrese el numero --->";
    cin >> numero;
    if (numero >= 0)
    {
        cout << "el numero es positivo";
    }
    else
    {
        cout << "el numero es negativo";
    }
}