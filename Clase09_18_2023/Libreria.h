#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <stdio.h>
#include <windows.h>

/**
 * Mueve el cursor a la posición (x, y) en la consola.
 * @param x Coordenada horizontal.
 * @param y Coordenada vertical.
 */
void gotoxy(int x, int y) {
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
    COORD dwPos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };  
    SetConsoleCursorPosition(hcon, dwPos);  
}

/**
 * Establece el color del texto en la consola.
 * @param c Código del color.
 */
void color(int c) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

/**
 * Muestra una lista de colores en la consola.
 */
void ListaColores() {
    for (int i = 0; i < 64; i++) {
        gotoxy(1, i);
        color(i);
        printf("Color %d", i);
        
        gotoxy(20, i);
        color(i + 64);
        printf("Color %d", i + 64);
        
        gotoxy(40, i);
        color(i + 128);
        printf("Color %d", i + 128);
        
        gotoxy(60, i);
        color(i + 192);
        printf("Color %d", i + 192);
    }
    color(7);  // Restablecer el color a blanco
}

/**
 * Muestra una lista de valores ASCII y sus caracteres correspondientes.
 */
void ListaAscii() {
    for (int i = 0; i < 64; i++) {
        gotoxy(1, i);
        printf("%d : %c", i, (char)i);
        
        gotoxy(20, i);
        printf("%d : %c", i + 64, (char)(i + 64));
        
        gotoxy(40, i);
        printf("%d : %c", i + 128, (char)(i + 128));
        
        gotoxy(60, i);
        printf("%d : %c", i + 192, (char)(i + 192));
    }
}

/**
 * Dibuja una línea horizontal en la consola.
 * @param x Coordenada horizontal inicial.
 * @param y Coordenada vertical.
 * @param tope Longitud de la línea.
 */
void LineaH(int x, int y, int tope) {
    for (int i = 0; i <= tope; i++) {
        gotoxy(x + i, y);
        printf("%c", (char)196);
    }
}

/**
 * Dibuja una línea vertical en la consola.
 * @param x Coordenada horizontal.
 * @param y Coordenada vertical inicial.
 * @param tope Altura de la línea.
 */
void LineaV(int x, int y, int tope) {
    for (int i = 0; i <= tope; i++) {
        gotoxy(x, y + i);
        printf("%c", (char)179);
    }
}

/**
 * @brief Una función que dibuja un rectángulo en la consola.
 * 
 * @param x  Coordenada horizontal inicial.
 * @param y  Coordenada vertical inicial.
 * @param ancho el ancho del rectángulo.
 * @param alto  la altura del rectángulo.
 */
void Rectangulo(int x, int y, int ancho, int alto) {
    LineaH(x, y, ancho);
    LineaH(x, y + alto, ancho);
    LineaV(x, y, alto);
    LineaV(x + ancho, y, alto);
    // Agregar las esquinas con los caracteres 218, 191, 192 y 217
    printf("%c", 218);
    for (int i = 0; i < ancho - 2; i++) {
        printf("%c", 196);
    }
    printf("%c\n", 191);
    for (int i = 0; i < alto - 2; i++) {
        printf("%c", 179);
        for (int j = 0; j < ancho - 2; j++) {
            printf(" ");
        }
        printf("%c\n", 179);
    }
    printf("%c", 192);
    for (int i = 0; i < ancho - 2; i++) {
        printf("%c", 196);
    }
    printf("%c\n", 217);
}
#endif  // LIBRERIA_H
