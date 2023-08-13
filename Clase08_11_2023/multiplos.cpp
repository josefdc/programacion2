/*Leer un número entero y si es múltiplo de 4 mostrar en pantalla su mitad,
si es múltiplo de 5 mostrar en pantalla su cuadrado y si es múltiplo de 6
mostrar en pantalla su cubo. Validar que el número no sea mayor que
100.*/
/**
 * @file multiplos.cpp
 * @brief Programa para leer un número entero y si es múltiplo de 4 mostrar en pantalla su mitad, si es múltiplo de 5 mostrar en pantalla su cuadrado y si es múltiplo de 6 mostrar en pantalla su cubo. Validar que el número no sea mayor que 100.
 * @date 08/11/2023
 * Multiplos
 * @autor Jose Felipe Duarte
*/
//Librerías
#include <iostream>
using namespace std;
// Variables Globales
int numero; //< Valor de entrada.
/**
 * @brief Función principal que solicita el valor de numero y calcula y muestra los resultados.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 * @param numero
*/
int main()
{
    // Solicitar el valor de numero
    cout << "Digite el valor de numero: ";
    cin >> numero;
    // Verificar si el numero es multiplo de 4, 5 o 6
    if (numero <= 100)
    {
        if (numero % 4 == 0)
        {
            cout << "La mitad de " << numero << " es " << numero / 2 << endl;
        }
        if (numero % 5 == 0)
        {
            cout << "El cuadrado de " << numero << " es " << numero * numero << endl;
        }
        if (numero % 6 == 0)
        {
            cout << "El cubo de " << numero << " es " << numero * numero * numero << endl;
        }
    }
    else
    {
        cout << "El numero debe ser menor o igual que 100." << endl;
    }
    // Pausar el programa para que el usuario pueda ver los resultados
    system("pause");
    // Retornar 0 para indicar que el programa terminó correctamente    
    return 0;
}