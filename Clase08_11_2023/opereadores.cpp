/**
 * @file operadores.cpp
 * @brief Programa para calcular y mostrar varias operaciones matemáticas con tres valores A, B y C.
 * @author Jose Felipe Duarte
 * @date 08/11/2023
 */

// Librerías
#include <iostream>
#include <math.h>
using namespace std;

// Variables Globales
float A, B, C; ///< Valores de entrada.
float suma, cuadradoSuma, producto, cuboProducto, diferencia; ///< Resultados de las operaciones.

/**
 * @brief Función principal que solicita los valores A, B y C y calcula y muestra los resultados.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Declarar variables
    int A, B, C;
    int suma, cuadradoSuma, producto, cuboProducto, diferencia;

    // Solicitar los valores de A, B y C
    cout << "Digite el valor de A: ";
    cin >> A;

    cout << "Digite el valor de B: ";
    cin >> B;

    cout << "Digite el valor de C: ";
    cin >> C;

    // Calcular la suma, el cuadrado de la suma, el producto, el cubo del producto y la diferencia
    suma = A + B + C;
    cuadradoSuma = pow(suma, 2);
    producto = A * B * C;
    cuboProducto = pow(producto, 3);
    diferencia = cuadradoSuma - cuboProducto;

    // Mostrar los resultados
    cout << "El cuadrado de la suma es: " << cuadradoSuma << endl;
    cout << "El producto de los valores leidos es: " << producto << endl;
    cout << "El cubo del producto de los valores leidos es: " << cuboProducto << endl;
    cout << "La diferencia entre el cuadrado de la suma con respecto al cubo del producto es: " << diferencia << endl;

    // Pausar el programa para que el usuario pueda ver los resultados
    system("pause");

    // Retornar 0 para indicar que el programa terminó correctamente
    return 0;
}
