#ifndef LIBRERIATALLER7_H
#define LIBRERIATALLER7_H

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
 * @brief Dibuja un rectángulo en la consola desde la posición (x1, y1) con dimensiones TamHori x TamVerti.
 * @param x1 Posición inicial en el eje x. 
 * @param y1 Posición inicial en el eje y.
 * @param TamHori Tamaño horizontal del rectángulo.
 * @param TamVerti Tamaño vertical del rectángulo.
 */
void Rectangulo(int x1, int y1, int TamHori, int TamVerti) {
    // Coordenadas finales
    int x2 = x1 + TamHori;
    int y2 = y1 + TamVerti;

    // Dibujo de las líneas horizontales
    char lineH[TamHori + 2];  // +2 para el carácter nulo y un espacio extra
    memset(lineH, (char)196, TamHori);
    lineH[TamHori] = '\0';  // Termino de la cadena

    gotoxy(x1, y1);
    printf("%c%s%c", (char)218, lineH, (char)191);

    gotoxy(x1, y2);
    printf("%c%s%c", (char)192, lineH, (char)217);

    // Dibujo de las líneas verticales
    for (int i = 1; i < TamVerti; i++) {
        gotoxy(x1, y1 + i);
        printf("%c", (char)179);

        gotoxy(x2, y1 + i);
        printf("%c", (char)179);
    }
}

/**
 * @brief Dibuja un cuadro en la consola usando las coordenadas especificadas y el tipo de borde.
 * @param x1 Coordenada x inicial.
 * @param y1 Coordenada y inicial.
 * @param x2 Coordenada x final.
 * @param y2 Coordenada y final.
 * @param borde 0 para borde simple, 1 para borde doble.
 */
void cuadro(int x1, int y1, int x2, int y2, int borde) {
    // Definición de caracteres de borde
    char horizontal, vertical, esquinaSuperiorIzquierda, esquinaSuperiorDerecha, esquinaInferiorIzquierda, esquinaInferiorDerecha;

    if (borde == 0) {
        // Bordes simples
        horizontal = (char)196;
        vertical = (char)179;
        esquinaSuperiorIzquierda = (char)218;
        esquinaSuperiorDerecha = (char)191;
        esquinaInferiorIzquierda = (char)192;
        esquinaInferiorDerecha = (char)217;
    } else {
        // Bordes dobles
        horizontal = (char)205;
        vertical = (char)186;
        esquinaSuperiorIzquierda = (char)201;
        esquinaSuperiorDerecha = (char)187;
        esquinaInferiorIzquierda = (char)200;
        esquinaInferiorDerecha = (char)188;
    }

    // Línea superior
    gotoxy(x1, y1);
    printf("%c", esquinaSuperiorIzquierda);
    for (int i = x1 + 1; i < x2; i++) printf("%c", horizontal);
    printf("%c", esquinaSuperiorDerecha);

    // Líneas verticales
    for (int i = y1 + 1; i < y2; i++) {
        gotoxy(x1, i);
        printf("%c", vertical);
        gotoxy(x2, i);
        printf("%c", vertical);
    }

    // Línea inferior
    gotoxy(x1, y2);
    printf("%c", esquinaInferiorIzquierda);
    for (int i = x1 + 1; i < x2; i++) printf("%c", horizontal);
    printf("%c", esquinaInferiorDerecha);
}


#endif  // LIBRERIA_H
