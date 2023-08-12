/*
Dado el radio de una circunferencia se pide calcular e imprimir su area.
area = pi * r ^2
*/
//Librerias
#include <iostream>
#include <math.h>
using namespace std;
//Variables Globales
float radio, area, pi;
// Funcion principal
int main()
{
    cout<< "Entre el radio de la circunferencia: ";
    cin>> radio;
    pi = 3.1416;
    area = pi * pow(radio, 2);
    cout<< "El area de la circunferencia es: " << area << endl;
    system("pause");
    return 0;
}