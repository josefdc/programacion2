/**
 * @file ahorcadoGUI.cpp
 * @author Kevin Castro / Jose Duarte
 * @brief Juego del ahorcado con tematica de frutas
 * @version 0.1
 * @date 2023-10-27
 * 
 * Este programa permite al usuario jugar al ahorcado intentando adivinar nombres de frutas.
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits> // Inclusión necesaria para numeric_limits
#include "Libreria.h"

using namespace std;

// Palabras disponibles para adivinar el juego
char palabras[30][12] = { "manzana", "pera", "naranja", "toronja", "fresa", "mango", "uva", "sandia", "mandarina",
                          "cereza", "frambuesa", "banano", "melon", "papaya", "guanabana", "guayaba", "limon",
                          "maracuya", "ciruelas", "tomate", "granadilla", "kiwi", "piña", "coco", "moras",
                          "higo", "frutilla", "acerola", "aguacate", "durazno" };

/**
 * @brief Genera un numero aleatorio entre 0 y n-1
 * 
 * @param n El limite superior para el numero aleatorio
 * @return int, un numero alatorio entre 0 y n-1
 */
int aleatorio(int n) 
{
    srand(time(NULL));
    return rand() % n;
}
/**
 * @brief Muestra la palabta adivinada hasta el momento
 * 
 * Imprime la palabra con guiones bajos en las letras que no se han adivinado
 * @param palabra  La palabra que el jugador debe adivinar
 * @param adivinada La representación actual de la palabra con las letras adivinadas y guiones bajos.
 */
void mostrarPalabra(char palabra[], char adivinada[]) 
{
    int longitud = strlen(palabra);
    for (int i = 0; i < longitud; i++) 
    {
        cout << adivinada[i] << " ";
    }
    cout << endl;
}
/**
 * @brief Punto de entrada principal para el juego del ahorcado.
 * 
 * El juego consiste en intentar adivinar una palabra (fruta) letra por letra.
 * El jugador tiene un número limitado de intentos para adivinar la palabra correctamente.
 * Si el jugador se queda sin intentos o adivina la palabra, el juego termina.
 *
 * @return 0 para indicar una salida exitosa.
 */
int main() 
{
    // P1 almacena la palabra seleccionada para adivinar.
    char P1[12];
    
    // P2 almacena el progreso actual del jugador en la palabra. Se inicializa con ceros para usar con funciones de cadenas.
    char P2[12] = {0};

    // Se selecciona una palabra aleatoria de la matriz 'palabras'.
    int seleccionada = aleatorio(30);
    strcpy(P1, palabras[seleccionada]);
    
    // Se obtiene la longitud de la palabra seleccionada.
    int longitud = strlen(P1);

    // Se inicializa P2 con guiones bajos, representando las letras que el jugador aún no ha adivinado.
    for (int i = 0; i < longitud; i++)
    {
        P2[i] = '_';
    }

    // Se establece el número inicial de intentos y se inicializa la variable 'Juego'.
    int intentos = 6, Juego;
    // Variable para verificar si el jugador ha ganado o no.
    bool ganado = false;

    // Mensaje de bienvenida.
    cout << "Bienvenido al juego del ahorcado de frutas!" << endl;

    // El juego continúa mientras el jugador tenga intentos y no haya adivinado la palabra.
    while (intentos > 0 && !ganado) 
    {
        // Informar al jugador sobre los intentos restantes.
        cout << "Tienes " << intentos << " intentos para adivinar la palabra." << endl;
        mostrarPalabra(P1, P2);
        cout << "Ingresa una letra: ";
        
        // Leer la letra ingresada por el jugador.
        char letra;
        cin >> letra;
        
        // Limpia el buffer para evitar problemas con la entrada.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        // Limpia la consola.
        system("cls");

        // Variable para verificar si la letra ingresada por el jugador está en la palabra.
        bool letraEncontrada = false;
        
        // Recorre la palabra seleccionada para verificar si la letra ingresada está presente.
        for (int i = 0; i < longitud; i++) 
        {
            // Si la letra coincide y no ha sido adivinada anteriormente, se actualiza P2.
            if (P1[i] == letra && P2[i] == '_') 
            {
                P2[i] = letra;
                letraEncontrada = true;
            }
        }

        



        if (!letraEncontrada) 
        {
            //Impresion del ahorcado cuando ingresan una palabra incorrecta
            if (intentos == 6)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
            }
            else if (intentos == 5)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
            }
            else if(intentos == 4)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
            }
            else if(intentos == 3)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
                gotoxy(15,9);
                printf("%c",char(92));
            }
            else if(intentos == 2)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
                gotoxy(15,9);
                printf("%c",char(92));
                gotoxy(13,10);
                printf("%c",char(47));
            }
            else if(intentos == 1)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
                gotoxy(15,9);
                printf("%c",char(92));
                gotoxy(13,10);
                printf("%c",char(47));
                gotoxy(15,10);
                printf("%c",char(92));
            }
            intentos--;
            gotoxy(0,4);
            cout << "Incorrecto! Pierdes un intento." << endl;
            gotoxy(0,0);
        }
        else
        {
            //Impresion para que el ahorcado aparezca a pesar de meter una letra correcta
            if (intentos == 5)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(0,0);
            }
            else if (intentos == 4)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(0,0);
            }
            else if(intentos == 3)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
                gotoxy(0,0);
            }
            else if(intentos == 2)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
                gotoxy(15,9);
                printf("%c",char(92));
                gotoxy(0,0);
            }
            else if(intentos == 1)
            {
                gotoxy (10,11);
                printf("%c",char(238));
                gotoxy(10,10);
                printf("%c",char(179));
                gotoxy(10,9);
                printf("%c",char(179));
                gotoxy (10,8);
                printf("%c",char(179));
                gotoxy (10,7);
                printf("%c",char(179));
                gotoxy(10,6);
                printf("%c",char(218));
                gotoxy(11,6);
                printf("%c",char(196));
                gotoxy(12,6);
                printf("%c",char(196));
                gotoxy(13,6);
                printf("%c",char(196));
                gotoxy(14,6);
                printf("%c",char(191));
                gotoxy(14,7);
                printf("%c",char(179));
                gotoxy(14,8);
                printf("O");
                gotoxy(14,9);
                printf("%c",char(179));
                gotoxy(13,9);
                printf("%c",char(47));
                gotoxy(15,9);
                printf("%c",char(92));
                gotoxy(13,10);
                printf("%c",char(47));
                gotoxy(0,0);
            }
        }

        if (strcmp(P1, P2) == 0) 
        {
            ganado = true;
        }
    }

    if (ganado) 
    {
        gotoxy(0,0);
        cout << "Felicidades! Adivinaste la fruta: " << P1 << endl;
        cout << "Desea seguir jugando?(1 = Si, 2 = No): ";
        cin >> Juego;
        if (Juego == 1)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            gotoxy(0,0);
            printf("Gracias por jugar,Buena suerte :D\n");
            system("pause");
        }
    } 
    else 
    {
        gotoxy(0,0);
        cout << "Lo siento, has perdido. La fruta era: " << P1 << endl;
        cout << "Desea seguir jugando?(1 = Si, 2 = No): ";
        cin >> Juego;
        if (Juego == 1)
        {
            system("cls");
            main();
        }
        else
        {
            system("cls");
            gotoxy(0,0);
            printf("Gracias por jugar,Buena suerte :D\n");
            system("pause");
        }
    }
}