/*
Elaborar un programa que permita calcular un numero y devolver su valor absoluto
*/
// Documentacion

/**
 * @param {number} numero
 * @returns {number}
 * @file Valoresabs.cpp
*/

//librerias
#include <iostream>
#include <cstdlib>

using namespace std;

//variables globales
float numero ;

// Funcion Principal

int main()
{
    cout << "Ingrese un numero: ";
    cin >> numero;
    if (numero < 0) {
        numero = numero * -1;
        cout << "El valor absoluto es: " << numero;
    } else {
        cout << "El valor absoluto es: " << numero;
        }
}
