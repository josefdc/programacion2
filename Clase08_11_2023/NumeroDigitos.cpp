/*
Leer un número entero positivo y determinar si es de 1, 2, 3 o 4 dígitos.
*/

/**
 * @file NumeroDigitos.cpp
 * @brief Programa para leer un número entero positivo y determinar si es de 1, 2, 3 o 4 dígitos.
 * @date 08/11/2023
 * NumeroDigitos
 * @autor Jose Felipe Duarte
*/
// Librerias
#include <iostream>
using namespace std;
// Variables Globales
int numero; //< Valor de entrada.
/**
 * @brief Función principal que solicita el valor de numero y calcula y muestra los resultados.
 * @return Retorna 0 si el programa se ejecuta correctamente.
 * @param numero
*/ 

int numeroDigitos(int numero){
    int digitos = 0;
    while (numero > 0){
        numero = numero / 10;
        digitos++;
    }
    return digitos;
}