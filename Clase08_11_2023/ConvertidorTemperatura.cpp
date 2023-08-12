/*
Dada la temperatura en grados Fahrenheit, se pide calcular e imprimir su equivalente en grados Celsius.
c= 0.55 * (f-32)
*/
//Librerias
#include <iostream>
#include <math.h>
using namespace std;
//Variables Globales
float fahrenheit, celsius;
// Funcion principal
int main()
{
    cout<< "Entre la temperatura en grados Fahrenheit: ";
    cin>> fahrenheit;
    celsius = 0.55 * (fahrenheit - 32);
    cout<< "La temperatura en grados Celsius es: " << celsius << endl;
    system("pause");
    return 0;
}