// Definicion de Librerias
#include <iostream> // para cout, cout hace referencia a un objeto de la clase ostream
#include <stdlib.h> // para system("pause"), pause pausa el programa
#include <math.h> // para pow, pow eleva un numero a una potencia
using namespace std; // para no escribir std::cout, std es un espacio de nombres, cout es un objeto de la clase ostream
// Creacion de variables Globales
float base, altu, area; // variables para el calculo del area del triangulo, float es un tipo de dato que representa numeros reales

// Un flujo es una secuencia de datos, un flujo de entrada es una secuencia de datos que se reciben, un flujo de salida es una secuencia de datos que se envian
//definicion del programa principal
int main() // Añadido 'int' antes de 'main'
{


    cout << "Ingrese la base del triangulo: "<< endl; // cout es un objeto de la clase ostream, << es un operador de insercion, inserccion es la accion de enviar datos a un flujo
    cin >> base; // cin es un objeto de la clase istream, >> es un operador de extraccion, extraccion es la accion de recibir datos de un flujo
    cout << "Ingrese la altura del triangulo: "<< endl; 
    cin >> altu;
    area = (base * altu) / 2; // area del triangulo
    cout << "El area del triangulo es: " << area << endl;// endl es un manipulador de flujo, manipulador de flujo es un objeto que modifica el comportamiento de un flujo
    system("pause"); // pausa el programa

    return 0; // Añadido un valor de retorno
}
