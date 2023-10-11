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
 * @brief Muestra una tabla de colores en la consola desde 0 a 255.
 * 
 * La función despliega una tabla de colores en 4 columnas. Cada columna muestra
 * una serie de colores con su respectivo código. Al final, se restablece el color
 * de la consola al blanco.
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
 * @brief Muestra una lista de caracteres ASCII en la consola.
 * 
 * Esta función imprime una lista de caracteres ASCII en tres columnas en la consola.
 * Cada columna representa un rango de valores ASCII. La primera columna muestra
 * los caracteres ASCII desde el valor 0 al 84, la segunda columna muestra los 
 * caracteres desde 85 al 169, y la tercera columna muestra los caracteres desde 
 * 170 al 255.
 */
void ListaAscii() {
    for (int i = 0; i < 85; i++) {
        gotoxy(1, i);
        printf("%d : %c", i, (char)i);
        
        gotoxy(20, i);
        printf("%d : %c", i + 85, (char)(i + 85));
        
        gotoxy(40, i);
        printf("%d : %c", i + 170, (char)(i + 170));
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

    /**
     * @brief Dibuja un cuadrado con relleno en la consola.
     * 
     * Esta función dibuja un cuadrado con un color de relleno especificado en la consola.
     * El borde del cuadrado se dibuja con líneas y el interior se rellena con el color 
     * proporcionado. Después de dibujar el cuadrado, se restaura el color original de la consola.
     * 
     * @param x1 Coordenada horizontal de la esquina superior izquierda del cuadrado.
     * @param y1 Coordenada vertical de la esquina superior izquierda del cuadrado.
     * @param x2 Coordenada horizontal de la esquina inferior derecha del cuadrado.
     * @param y2 Coordenada vertical de la esquina inferior derecha del cuadrado.
     * @param colorRelleno Código de color para el relleno del cuadrado.
     */
void cuadroR(int x1, int y1, int x2, int y2, int colorRelleno) {
    // Rellenar el interior del cuadrado con el color especificado
    color(colorRelleno);
    for (int y = y1 + 1; y < y2; y++) {
        for (int x = x1 + 1; x < x2; x++) {
            gotoxy(x, y);
            printf("%c", 219);  //  ASCII 219 
        }
    }
    
    // Dibujar el borde del cuadrado por encima del relleno
    cuadro(x1, y1, x2, y2, 0); 

    // Restaurar el color original (por ejemplo, blanco)
    color(7);
}

/**
 * @brief Dibuja una ventana con efecto de sombra en la consola.
 * 
 * Esta función dibuja un cuadro que representa una ventana y añade un efecto de sombra
 * en la parte inferior y en el lado derecho. Los colores de la ventana y de la sombra
 * pueden ser personalizados.
 * 
 * @param x1 Coordenada horizontal de la esquina superior izquierda de la ventana.
 * @param y1 Coordenada vertical de la esquina superior izquierda de la ventana.
 * @param x2 Coordenada horizontal de la esquina inferior derecha de la ventana.
 * @param y2 Coordenada vertical de la esquina inferior derecha de la ventana.
 * @param colorFondo Código de color para el fondo de la ventana.
 * @param colorSombra Código de color para la sombra de la ventana.
 */
void ventana1(int x1, int y1, int x2, int y2, int colorFondo, int colorSombra) {
    // Dibujar y rellenar el cuadro principal
    cuadroR(x1, y1, x2, y2, colorFondo);

    // Dibujar la sombra en la parte inferior
    color(colorSombra);
    for (int x = x1 + 1; x <= x2 + 1; x++) {
        gotoxy(x, y2 + 1);
        printf("%c", 178);  //  ASCII 178
    }

    // Dibujar la sombra en el lado derecho
    for (int y = y1 + 1; y <= y2 + 1; y++) {
        gotoxy(x2 + 1, y);
        printf("%c", 178);  //  ASCII 178 
    }

    // Restaurar el color original (por ejemplo, blanco)
    color(7);
}


/**
 * @brief Dibuja una ventana con una barra de título.
 * 
 * Esta función dibuja un cuadrado con un color de fondo y sombra especificados en la consola.
 * Además, colorea la parte superior del cuadrado con un color diferente para representar la barra del título.
 * 
 * @param x1 Coordenada horizontal de la esquina superior izquierda del cuadrado.
 * @param y1 Coordenada vertical de la esquina superior izquierda del cuadrado.
 * @param x2 Coordenada horizontal de la esquina inferior derecha del cuadrado.
 * @param y2 Coordenada vertical de la esquina inferior derecha del cuadrado.
 * @param colortitulo Código de color para la barra del título.
 * @param colorfondo Código de color para el fondo del cuadrado.
 * @param colorSombra Código de color para la sombra del cuadrado.
 */
void ventana2(int x1, int y1, int x2, int y2, int colortitulo, int colorfondo, int colorSombra) {
    // Dibuja el cuadrado con sombra
    ventana1(x1, y1, x2, y2, colorfondo, colorSombra);
    
    // Colorea la barra del título
    color(colortitulo);
    for (int x = x1 + 1; x < x2; x++) {
        gotoxy(x, y1);
        printf("%c", 219);  // Using ASCII 219 for title bar
    }
    
    // Restaurar el color original
    color(7);
}

/**
 * @brief Dibuja una tabla en la consola.
 * 
 * Esta función dibuja una tabla con un número especificado de filas y columnas en la consola.
 * 
 * @param x1 Coordenada horizontal de la esquina superior izquierda de la tabla.
 * @param y1 Coordenada vertical de la esquina superior izquierda de la tabla.
 * @param filas Número de filas de la tabla.
 * @param columnas Número de columnas de la tabla.
 * @param borde 0 para borde simple, 1 para borde doble.
 */
void tabla(int x1, int y1, int filas, int columnas, int borde) {
    // Definición de caracteres de borde
    char horizontal, vertical, esquinaSuperiorIzquierda, esquinaSuperiorDerecha,
         esquinaInferiorIzquierda, esquinaInferiorDerecha, interseccionT, interseccionL,
         interseccionR, interseccionCruz;

    int anchoColumna = 5;  // Ancho de cada columna

    if (borde == 0) {
        // Bordes simples
        horizontal = (char)196;
        vertical = (char)179;
        esquinaSuperiorIzquierda = (char)218;
        esquinaSuperiorDerecha = (char)191;
        esquinaInferiorIzquierda = (char)192;
        esquinaInferiorDerecha = (char)217;
        interseccionT = (char)194;  // Intersección de línea superior
        interseccionL = (char)195;  // Intersección de línea izquierda
        interseccionR = (char)180;  // Intersección de línea derecha
        interseccionCruz = (char)197;  // Intersección de cruz
    } else {
        // Bordes dobles
        horizontal = (char)205;
        vertical = (char)186;
        esquinaSuperiorIzquierda = (char)201;
        esquinaSuperiorDerecha = (char)187;
        esquinaInferiorIzquierda = (char)200;
        esquinaInferiorDerecha = (char)188;
        interseccionT = (char)203;
        interseccionL = (char)204;
        interseccionR = (char)185;
        interseccionCruz = (char)206;
    }

    // Dibuja la tabla
    for (int f = 0; f <= filas; f++) {
        for (int c = 0; c <= columnas * anchoColumna; c++) {
            // Calcula la posición actual
            int posX = x1 + c;
            int posY = y1 + f;
            
            gotoxy(posX, posY);

            if (f == 0) {
                if (c == 0) printf("%c", esquinaSuperiorIzquierda);
                else if (c == columnas * anchoColumna) printf("%c", esquinaSuperiorDerecha);
                else if (c % anchoColumna == 0) printf("%c", interseccionT);
                else printf("%c", horizontal);
            } else if (f == filas) {
                if (c == 0) printf("%c", esquinaInferiorIzquierda);
                else if (c == columnas * anchoColumna) printf("%c", esquinaInferiorDerecha);
                else if (c % anchoColumna == 0) printf("%c", interseccionL);
                else printf("%c", horizontal);
            } else {
                if (c == 0) printf("%c", interseccionL);
                else if (c == columnas * anchoColumna) printf("%c", interseccionR);
                else if (c % anchoColumna == 0) printf("%c", vertical);
                else printf(" ");
            }
        }
    }
}

#endif  // LIBRERIATALLER7_H
