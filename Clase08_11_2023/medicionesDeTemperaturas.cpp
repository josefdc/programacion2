/*
En una planta se realizan tres mediciones de temperatura de una
caldera (oC): a las 6 AM, a las 2 PM y a las 10 PM. Determinar cuándo
se dio la mayor (mañana, tarde o noche).
*/

/**
 *@file MedicionesDeTemperaturas.cpp
    *@brief Este programa determina cuando se dio la mayor temperatura de una caldera
    *@date 14/08/2023
    *@autor Jose Felipe Duarte
*/

//Librerias
#include <iostream>
using namespace std;
// Declarancion de Variables Globales
float  manana, tarde, noche;
#include <iostream>
using namespace std;
//funcion principal
int main() {
    int numero;

    cout << "Por favor, ingrese un número entero positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "El número ingresado no es positivo. Por favor, intente de nuevo." << endl;
    } else if (numero < 10) {
        cout << "El número tiene 1 dígito." << endl;
    } else if (numero < 100) {
        cout << "El número tiene 2 dígitos." << endl;
    } else if (numero < 1000) {
        cout << "El número tiene 3 dígitos." << endl;
    } else if (numero < 10000) {
        cout << "El número tiene 4 dígitos." << endl;
    } else {
        cout << "El número tiene más de 4 dígitos." << endl;
    }

    return 0;
}

