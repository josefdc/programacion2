/**
 * @file taller7.cpp
 * @brief Programa que ofrece un menú de opciones para dibujar formas en la consola.
 * 
 * Este programa utiliza la librería "LibreriaTaller7.h" para proporcionar
 * funcionalidades de dibujo en la consola. El usuario puede seleccionar
 * diferentes opciones del menú para dibujar formas como cuadros.
 */

#include "LibreriaTaller7.h"
#include <stdio.h>
#include <windows.h>
#include <conio.h>  ///< Para la función getch()

/**
 * @brief Muestra un menú al usuario y permite seleccionar diferentes opciones de dibujo.
 * 
 * El menú ofrece opciones como dibujar un cuadro. Una vez que se selecciona
 * una opción, se solicitan las coordenadas y detalles relevantes al usuario y luego
 * se realiza el dibujo correspondiente en la consola.
 * 
 * @return int Retorna 0 cuando el usuario decide salir del menú.
 */
int menu();

/**
 * @brief Función principal que invoca el menú.
 * 
 * @return int Retorna 0 al finalizar la ejecución.
 */
int main(){
    menu();
    return 0;
}

int menu(){
    int opcion;
    do {
        system("cls");  ///< Limpiar la pantalla
        gotoxy(0, 0);  ///< Posicionar el cursor en el inicio
        printf("Menu de opciones\\n");
        printf("1. Dibujo de cuadrado\\n");
        printf("2. Cuadrado con relleno\\n");
        printf("3. Dibujo de Ventana\\n");
        printf("4. Dibujo de Ventana con titulo\\n");
        printf("5. elebaracion de tablas\\n");
        printf("6. Salir\\n");
        printf("Ingrese la opcion que desea: ");
        scanf("%d", &opcion);
        switch (opcion) {
        case 1:
            int x1, y1, x2, y2, borde;

            printf("ingrese la coordenada x1: ");
            scanf("%d", &x1);
            printf("ingrese la coordenada y1: ");
            scanf("%d", &y1);
            printf("ingrese la coordenada x2: ");
            scanf("%d", &x2);
            printf("ingrese la coordenada y2: ");
            scanf("%d", &y2);
            printf("ingrese el tipo de borde(0 para borde simple y 1 para borde doble): ");
            scanf("%d", &borde);
            cuadro(x1, y1, x2, y2, borde);
            
            printf("\\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        
        default:
            break;
        }
    } while(opcion != 6);
    
    return 0;
}
