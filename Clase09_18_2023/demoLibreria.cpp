#include "Libreria.h"  // Incluye las definiciones de funciones de la librería personalizada

int main() {
    // ------------------------ CONFIGURACIÓN INICIAL ------------------------
    color(7);  // Establece el color del texto en la consola a blanco
    system("cls");  // Limpia la pantalla de la consola. Equivalente a escribir "cls" en la terminal

    // ------------------------ TÍTULO DEL PROGRAMA ------------------------
    gotoxy(10, 2);  // Mueve el cursor a la posición (10, 2) en la consola
    printf("DEMOSTRACION DE FUNCIONES DE LIBRERIA.H");  // Imprime el título

    // ------------------------ MENSAJE "HELLO, WORLD!" ------------------------
    gotoxy(10, 10);  // Mueve el cursor a la posición (10, 10)
    printf("Hello, World!");  // Imprime el mensaje "Hello, World!"

    // ------------------------ MENSAJE EN COLOR ROJO ------------------------
    color(4);  // Cambia el color del texto a rojo
    gotoxy(10, 12);  // Mueve el cursor a la posición (10, 12)
    printf("This is in red color!");  // Imprime el mensaje en rojo

    // ------------------------ LÍNEA HORIZONTAL ------------------------
    color(7);  // Cambia el color del texto a blanco
    gotoxy(10, 14);  // Mueve el cursor a la posición inicial de la línea
    LineaH(10, 14, 30);  // Dibuja una línea horizontal de 30 caracteres de longitud

    // ------------------------ LÍNEA VERTICAL ------------------------
    LineaV(30, 10, 7);  // Dibuja una línea vertical de 7 caracteres de altura

    // ------------------------ LISTA DE COLORES DISPONIBLES ------------------------
    gotoxy(40, 10);  // Mueve el cursor a la posición donde se mostrará el título de colores
    printf("Colores disponibles:");
    for (int i = 0; i < 16; i++) {  // Bucle para mostrar 16 colores
        gotoxy(40, 11 + i);  // Mueve el cursor a la posición inicial de cada color
        color(i);  // Establece el color de texto
        printf("Color %d", i);  // Imprime el número del color
    }
    color(7);  // Restablece el color del texto a blanco

    // ------------------------ LISTA DE CARACTERES ASCII ------------------------
    gotoxy(60, 10);  // Mueve el cursor a la posición donde se mostrará el título de caracteres ASCII
    printf("Caracteres ASCII:");
    for (int i = 33; i < 48; i++) {  // Bucle para mostrar caracteres ASCII desde 33 hasta 47
        gotoxy(60, 10 + (i - 33));  // Mueve el cursor a la posición de cada caracter
        printf("%d : %c", i, (char)i);  // Imprime el número y el caracter ASCII correspondiente
    }

    // ------------------------ PAUSA ANTES DE TERMINAR ------------------------
    gotoxy(10, 30);  // Mueve el cursor a una posición inferior
    system("pause");  // Espera que el usuario presione una tecla antes de cerrar el programa

    return 0;  // Finaliza el programa
}
