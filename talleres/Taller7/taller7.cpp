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
        printf("Menu de opciones\n");
        printf("1. Dibujo de cuadrado\n");
        printf("2. Cuadrado con relleno\n");
        printf("3. Dibujo de Ventana\n");
        printf("4. Dibujo de Ventana con titulo\n");
        printf("5. elebaracion de tablas\n");
        printf("6. Salir\n");
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
            system("cls");  ///< Clear the screen
            cuadro(x1, y1, x2, y2, borde);
            
            gotoxy(0, y2 + 2);  ///< Posicionar el cursor en el inicio
            printf("\nPresione cualquier tecla para continuar...");
            getch();  ///< Esperar la presión de una tecla
            break;
        
        case 2:
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

        case 3:
            int colorFondo, colorSombra;

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

        case 4:
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
        
       case 5:
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

    } while(opcion != 6);
    
    return 0;
}