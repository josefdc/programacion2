#ifndef VECTORES_H
#define VECTORES_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 100

// Declaración de funciones
void leerVector(int vector[], int N);
void generarVectorAleatorio(int vector[], int N);
int contarXenVector(int vector[], int N, int X);
void invertirVector(int vector[], int N);
void copiarVector(int origen[], int destino[], int N);
double promedioVector(int vector[], int N);
int posicionMayor(int vector[], int N);
bool estaOrdenadoAscendente(int vector[], int N);

/**
 * @file vectores.h
 * @brief Funciones para manipulación de vectores de enteros.
 */

/**
 * @brief Lee N enteros del usuario y los almacena en el vector.
 * @param vector Array donde se almacenarán los enteros.
 * @param N Cantidad de enteros a leer.
 */
void leerVector(int vector[], int N) {
    for (int i = 0; i < N; ++i) {
        scanf("%d", &vector[i]);
    }
}

/**
 * @brief Genera un vector de N enteros aleatorios.
 * @param vector Array donde se almacenarán los enteros aleatorios.
 * @param N Cantidad de enteros a generar.
 */
void generarVectorAleatorio(int vector[], int N) {
    srand((unsigned)time(0));
    for (int i = 0; i < N; ++i) {
        vector[i] = rand() % MAX_SIZE;
    }
}
/**
 * @brief Cuenta la cantidad de veces que el entero X aparece en el vector.
 * @param vector Array donde se buscará el entero.
 * @param N Tamaño del vector.
 * @param X Entero a contar en el vector.
 * @return Cantidad de veces que X aparece en el vector.
 */
int contarXenVector(int vector[], int N, int X) {
    int contador = 0;
    for (int i = 0; i < N; ++i) {
        if (vector[i] == X) {
            ++contador;
        }
    }
    return contador;
}
/**
 * @brief Invierte los elementos de un vector.
 * @param vector Array que será invertido.
 * @param N Tamaño del vector.
 */
void invertirVector(int vector[], int N) {
    for (int i = 0; i < N / 2; ++i) {
        int temp = vector[i];
        vector[i] = vector[N - 1 - i];
        vector[N - 1 - i] = temp;
    }
}
/**
 * @brief Copia los elementos de un vector a otro.
 * @param origen Array fuente de los elementos.
 * @param destino Array destino donde se copiarán los elementos.
 * @param N Tamaño de los vectores.
 */
void copiarVector(int origen[], int destino[], int N) {
    for (int i = 0; i < N; ++i) {
        destino[i] = origen[i];
    }
}
/**
 * @brief Calcula el promedio de los elementos de un vector.
 * @param vector Array cuyo promedio será calculado.
 * @param N Tamaño del vector.
 * @return Promedio de los elementos del vector.
 */
double promedioVector(int vector[], int N) {
    double suma = 0;
    for (int i = 0; i < N; ++i) {
        suma += vector[i];
    }
    return suma / N;
}
/**
 * @brief Encuentra la posición del mayor valor en un vector.
 * @param vector Array donde se buscará el mayor valor.
 * @param N Tamaño del vector.
 * @return Posición del mayor valor en el vector.
 */
int posicionMayor(int vector[], int N) {
    int mayor = vector[0];
    int posicion = 0;
    for (int i = 1; i < N; ++i) {
        if (vector[i] > mayor) {
            mayor = vector[i];
            posicion = i;
        }
    }
    return posicion;
}
/**
 * @brief Determina si un vector está ordenado de forma ascendente.
 * @param vector Array que será evaluado.
 * @param N Tamaño del vector.
 * @return Verdadero si el vector está ordenado ascendentemente, falso en caso contrario.
 */
bool estaOrdenadoAscendente(int vector[], int N) {
    for (int i = 0; i < N - 1; ++i) {
        if (vector[i] > vector[i + 1]) {
            return false;
        }
    }
    return true;
}

#endif // VECTORES_H
