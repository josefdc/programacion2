#include "Libreria.h"

int main() {
    // Configuración inicial
    color(7); // Establece el color a blanco
    system("cls"); // Limpia la consola

    // Muestra el título del programa
    gotoxy(10, 2);
    printf("DEMOSTRACION DE FUNCIONES DE LIBRERIA.H");

    // Mueve el cursor a la posición (10, 10) y muestra un mensaje
    gotoxy(10, 10);
    printf("Hello, World!");

    // Cambia el color del texto a rojo y muestra otro mensaje
    color(4);
    gotoxy(10, 12);
    printf("This is in red color!");

    // Dibuja una línea horizontal
    color(7); // Restablece el color a blanco
    gotoxy(10, 14);
    LineaH(10, 14, 30); // Dibuja una línea horizontal desde la posición (10, 14) con una longitud de 30 caracteres

    // Dibuja una línea vertical
    LineaV(30, 10, 7); // Dibuja una línea vertical desde la posición (30, 10) con una altura de 7 caracteres

    // Muestra una lista de colores disponibles
    gotoxy(40, 10);
    printf("Colores disponibles:");
    for (int i = 0; i < 16; i++) {
        gotoxy(40, 11 + i);
        color(i);
        printf("Color %d", i);
    }
    color(7);  // Restablecer el color a blanco

    // Muestra una breve lista de caracteres ASCII
    gotoxy(60, 10);
    printf("Caracteres ASCII:");
    for (int i = 33; i < 48; i++) {
        gotoxy(60, 10 + (i - 33));
        printf("%d : %c", i, (char)i);
    }

    // Pausa y espera a que el usuario presione una tecla antes de salir
    gotoxy(10, 30);
    system("pause");

    return 0;
}
