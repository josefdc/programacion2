#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <limits> // Inclusión necesaria para numeric_limits

using namespace std;

char palabras[30][12] = { "manzana", "pera", "naranja", "toronja", "fresa", "mango", "uva", "sandia", "mandarina",
                          "cereza", "frambuesa", "banano", "melon", "papaya", "guanabana", "guayaba", "limon",
                          "maracuya", "ciruelas", "tomate", "granadilla", "kiwi", "piña", "coco", "moras",
                          "higo", "frutilla", "acerola", "aguacate", "durazno" };

int aleatorio(int n) {
    srand(time(NULL));
    return rand() % n;
}

void mostrarPalabra(char palabra[], char adivinada[-]) {
    int longitud = strlen(palabra);
    for (int i = 0; i < longitud; i++) {
        cout << adivinada[i] << " ";
    }
    cout << endl;
}

int main() {
    char P1[12];
    char P2[12] = {0}; // Inicializamos con 0s para que funcione correctamente con strcpy y strlen

    int seleccionada = aleatorio(30);
    strcpy(P1, palabras[seleccionada]);
    int longitud = strlen(P1);

    for (int i = 0; i < longitud; i++) {
        P2[i] = '_';
    }

    int intentos = 6;
    bool ganado = false;

    cout << "Bienvenido al juego del ahorcado de frutas!" << endl;

    while (intentos > 0 && !ganado) {
        cout << "Tienes " << intentos << " intentos restantes." << endl;
        mostrarPalabra(P1, P2);

        cout << "Ingresa una letra: ";
        char letra;
        cin >> letra;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia el buffer

        bool letraEncontrada = false;
        for (int i = 0; i < longitud; i++) {
            if (P1[i] == letra && P2[i] == '_') {
                P2[i] = letra;
                letraEncontrada = true;
            }
        }

        if (!letraEncontrada) {
            intentos--;
            cout << "Incorrecto! Pierdes un intento." << endl;
        }

        if (strcmp(P1, P2) == 0) {
            ganado = true;
        }
    }

    if (ganado) {
        cout << "Felicidades! Adivinaste la fruta: " << P1 << endl;
    } else {
        cout << "Lo siento, has perdido. La fruta era: " << P1 << endl;
    }

    return 0;
}
