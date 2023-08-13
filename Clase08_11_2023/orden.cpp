/*
Lea tres números y escriba un mensaje si los datos se escribieron en
forma ordenada (ya sea descendente o ascendentemente) y si no es así
que muestre el respectivo mensaje.
*/ 

/**  
 * @file orden.cpp
 * @brief Programa para leer tres números y escribir un mensaje si los datos se escribieron en forma ordenada (ya sea descendente o ascendentemente) y si no es así que muestre el respectivo mensaje.
 * @author Jose Felipe Duarte
 * @date 08
 */

//Librerías
#include <iostream>
using namespace std;

// Variables Globales
float A, B, C; //< Valores de entrada.
/**
 * @brief Función principal que solicita los valores A, B y C y calcula y muestra los resultados.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 * @param A, B, C
*/

int main()
{
    // Solicitar los valores de A, B y C
    cout << "Digite el valor de A: ";
    cin >> A;
    cout << "Digite el valor de B: ";
    cin >> B;
    cout << "Digite el valor de C: ";
    cin >> C;
    // Verificar si los datos se escribieron en forma ordenada
    // los condicioneles en C++ son:
    if (A < B && B < C) // Si A es menor que B y B es menor que C, condicion
    {
        cout << "Los datos se escribieron en forma ascendente." << endl;
    }
    else if (A > B && B > C)
    {
        cout << "Los datos se escribieron en forma descendente." << endl;
    }
   3 else
    {
        cout << "Los datos no se escribieron en forma ordenada." << endl;
    }
    // Pausar el programa para que el usuario pueda ver los resultados
    system("pause");
    // Retornar 0 para indicar que el programa terminó correctamente    
    return 0;
}
    