/**
 * @file taller7.cpp
 * @brief Programa que ofrece un menú de opciones para dibujar formas en la consola.
 * 
 * Este programa utiliza la librería "LibreriaTaller7.h" para proporcionar
 * funcionalidades de dibujo en la consola. El usuario puede seleccionar
 * diferentes opciones del menú para dibujar formas como cuadros.
 */

/*
LINK DEL REPOSITORIO:

https://github.com/josefdc/programacion2/tree/main/talleres

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
    int opcion, x1, y1, x2, y2, borde, colorFondo, colorSombra;
    do {
        system("cls");  
        gotoxy(0, 0);  
        
        
        ventana1(10, 2, 60, 20, 7, 8);
        
        gotoxy(20, 4);  
        printf("Menu de opciones");
        
        gotoxy(15, 6);
        printf("1. Dibujo de cuadrado");
        
        gotoxy(15, 7);
        printf("2. Cuadrado con relleno");
        
        gotoxy(15, 8);
        printf("3. Dibujo de Ventana");
        
        gotoxy(15, 9);
        printf("4. Dibujo de Ventana con titulo");
        
        gotoxy(15, 10);
        printf("5. Elaboracion de tablas");
        
        gotoxy(15, 11);
        printf("6. Mostrar tabla de codigos ASCII");
        
        gotoxy(15, 12);
        printf("7. Mostrar tabla de colores");
        
        gotoxy(15, 13);
        printf("8. Salir");
        
        gotoxy(15, 15);
        printf("Ingrese la opcion que desea: ");
        scanf("%d", &opcion);
        switch (opcion) {
        case 1:{
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
            system("cls");  ///< Limpiar la pantalla
            cuadro(x1, y1, x2, y2, borde);
            gotoxy(0, y2 + 2);  ///< Posicionar el cursor en el inicio
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        }
        case 2:{
            int colorRelleno;
            printf("ingrese la coordenada x1: ");
            scanf("%d", &x1);
            printf("ingrese la coordenada y1: ");
            scanf("%d", &y1);
            printf("ingrese la coordenada x2: ");
            scanf("%d", &x2);
            printf("ingrese la coordenada y2: ");
            scanf("%d", &y2);
            system("cls");  ///< Limpiar la pantalla
            ListaColores();  ///< Mostrar lista de colores
            printf("\n\nIngrese el código de color para el relleno (basado en la lista anterior): ");
            scanf("%d", &colorRelleno);
            system("cls");  ///< Limpiar la pantalla
            cuadroR(x1, y1, x2, y2, colorRelleno);
            gotoxy(0, y2 + 2);  ///< Posicionar el cursor un poco más abajo del cuadrado
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break; 
        }
        case 3:{
            printf("ingrese la coordenada x1: ");
            scanf("%d", &x1);
            printf("ingrese la coordenada y1: ");
            scanf("%d", &y1);
            printf("ingrese la coordenada x2: ");
            scanf("%d", &x2);
            printf("ingrese la coordenada y2: ");
            scanf("%d", &y2);
            system("cls");  ///< Limpiar la pantalla
            ListaColores();  ///< Mostrar lista de colores
            printf("\n\nIngrese el código de color para el fondo de la ventana (basado en la lista anterior): ");
            scanf("%d", &colorFondo);
            printf("\nIngrese el código de color para la sombra de la ventana (basado en la lista anterior): ");
            scanf("%d", &colorSombra);
            system("cls");  ///< Limpiar la pantalla
            ventana1(x1, y1, x2, y2, colorFondo, colorSombra);
            gotoxy(0, y2 + 2);  ///< Posicionar el cursor un poco más abajo de la ventana
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        }
        case 4:{
            int colortitulo;
            printf("Ingrese la coordenada x1: ");
            scanf("%d", &x1);
            printf("Ingrese la coordenada y1: ");
            scanf("%d", &y1);
            printf("Ingrese la coordenada x2: ");
            scanf("%d", &x2);
            printf("Ingrese la coordenada y2: ");
            scanf("%d", &y2);
            system("cls");  ///< Limpiar la pantalla
            ListaColores();  ///< Mostrar lista de colores
            printf("\n\nIngrese el código de color para la barra del título (basado en la lista anterior): ");
            scanf("%d", &colortitulo);
            printf("Ingrese el código de color para el fondo: ");
            scanf("%d", &colorFondo);
            printf("Ingrese el código de color para la sombra: ");
            scanf("%d", &colorSombra);
            system("cls");  ///< Limpiar la pantalla
            ventana2(x1, y1, x2, y2, colortitulo, colorFondo, colorSombra);
            gotoxy(0, y2 + 3);  ///< Posicionar el cursor un poco más abajo del cuadrado
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        }
        case 5:{
            int filas, columnas, maxWidth, maxHeight, anchoColumna = 5;
            printf("Ingrese la coordenada x1: ");
            scanf("%d", &x1);
            printf("Ingrese la coordenada y1: ");
            scanf("%d", &y1);
            printf("Ingrese el número de filas: ");
            scanf("%d", &filas);
            printf("Ingrese el número de columnas: ");
            scanf("%d", &columnas);
            printf("Ingrese el tipo de borde(0 para borde simple y 1 para borde doble): ");
            scanf("%d", &borde);
            // Obtener las dimensiones máximas de la consola
            CONSOLE_SCREEN_BUFFER_INFO csbi;
            GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
            maxWidth = csbi.srWindow.Right - csbi.srWindow.Left + 1;
            maxHeight = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
            // Comprobar las dimensiones de la tabla
            if (x1 + columnas * anchoColumna > maxWidth || y1 + filas > maxHeight) {
                printf("\nLa tabla es demasiado grande para la consola.");
                printf("\nPor favor, reduzca el número de filas o columnas.");
            } else {
                system("cls");  ///< Limpiar la pantalla
                tabla(x1, y1, filas, columnas, borde);
            }
            gotoxy(0, y1 + filas + 2);  ///< Posicionar el cursor un poco más abajo de la tabla
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        }
        case 6:{
            system("cls");  ///< Limpiar la pantalla
            ListaAscii();
            gotoxy(0, 87);  ///< Posicionar el cursor un poco más abajo de la tabla ASCII
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        }
        case 7:{
            system("cls");  ///< Limpiar la pantalla
            ListaColores();
            gotoxy(0, 64);  ///< Posicionar el cursor un poco más abajo de la tabla de colores
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        }
        } // Closing the switch
    } while(opcion != 8); // Closing the do-while
    return 0;
}
