#include "Libreria.h"  // Incluye las definiciones de funciones de la librería personalizada

int main() {
    // ------------------------ CONFIGURACIÓN INICIAL ------------------------
    color(7);  // Establece el color del texto en la consola a blanco
    system("cls");  // Limpia la pantalla de la consola

    // ------------------------ TÍTULO DEL PROGRAMA ------------------------
    gotoxy(10, 2);  // Se posiciona en la columna 10, fila 2 de la consola
    printf("DEMOSTRACION DE FUNCIONES DE LIBRERIA.H");

    // ------------------------ MENSAJE "HELLO, WORLD!" ------------------------
    gotoxy(10, 10);  // Se posiciona en la columna 10, fila 10 de la consolacd
    printf("Hello, World!");

    // ------------------------ MENSAJE EN COLOR ROJO ------------------------
    color(4);  // Cambia el color del texto a rojo
    gotoxy(10, 12);  // Se posiciona en la columna 10, fila 12 de la consola
    printf("This is in red color!");

    // ------------------------ LÍNEA HORIZONTAL ------------------------
    color(7);  // Restablece el color a blanco
    gotoxy(10, 14);  // Se posiciona en la columna 10, fila 14 de la consola, el inicio de la línea horizontal
    LineaH(10, 14, 30);  // Dibuja una línea desde la columna 10, fila 14 hasta la columna 40 (10+30), fila 14

    // ------------------------ LÍNEA VERTICAL ------------------------
    LineaV(30, 10, 7);  // Dibuja una línea desde la columna 30, fila 10 hasta la columna 30, fila 17 (10+7)

    // ------------------------ LISTA DE COLORES DISPONIBLES ------------------------
    gotoxy(40, 10);  // Se posiciona en la columna 40, fila 10 de la consola
    printf("Colores disponibles:");
    for (int i = 0; i < 16; i++) {
        gotoxy(40, 11 + i);  // Se posiciona en la columna 40, y la fila comienza en 11 y se incrementa en cada iteración del bucle
        color(i);
        printf("Color %d", i);
    }
    color(7);  // Restablece el color a blanco

    // ------------------------ LISTA DE CARACTERES ASCII ------------------------
    gotoxy(60, 10);  // Se posiciona en la columna 60, fila 10 de la consola
    printf("Caracteres ASCII:");
    for (int i = 33; i < 48; i++) {
        gotoxy(60, 10 + (i - 33));  // Se posiciona en la columna 60, y la fila comienza en 10 y se incrementa en cada iteración del bucle
        printf("%d : %c", i, (char)i);
    }



    // ------------------------ PAUSA ANTES DE TERMINAR ------------------------
    gotoxy(10, 30);  // Se posiciona en la columna 10, fila 30 de la consola
    system("pause");  // Espera la entrada del usuario


    // representracion de un recangulo con la funcion Rectangulo de la libreria
    Rectangulo(10, 10, 20, 10);

    return 0;  // Finaliza el programa
}
