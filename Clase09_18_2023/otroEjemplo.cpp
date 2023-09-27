#include "Libreria.h"
#include <math>

int main() {
    // CONFIGURACIÓN INICIAL
    color(7);
    system("cls");

    // TÍTULO DEL PROGRAMA
    gotoxy(10, 2);
    printf("EJEMPLOS ADICIONALES CON LIBRERIA.H");

    // 1. DIBUJAR UN RECTÁNGULO
    int x_inicio = 5, y_inicio = 5, ancho = 20, alto = 10;
    LineaH(x_inicio, y_inicio, ancho);  // Borde superior
    LineaH(x_inicio, y_inicio + alto, ancho);  // Borde inferior
    LineaV(x_inicio, y_inicio, alto);  // Borde izquierdo
    LineaV(x_inicio + ancho, y_inicio, alto);  // Borde derecho

    // 2. MENSAJE CENTRADO
    const char* mensaje = "Mensaje Centrado";
    int x_mensaje = (80 - strlen(mensaje)) / 2;  // Suponiendo que la consola tiene 80 columnas
    gotoxy(x_mensaje, 20);
    printf("%s", mensaje);

    // 3. MENSAJE ANIMADO CON CAMBIO DE COLOR
    gotoxy(10, 25);
    for (int i = 1; i <= 15; i++) {
        color(i);
        printf("Mensaje animado con color");
        Sleep(200);  // Espera 200 milisegundos antes de cambiar de color
    }
    color(7);  // Restablece el color

    // PAUSA ANTES DE TERMINAR
    gotoxy(10, 30);
    system("pause");

    return 0;
}
