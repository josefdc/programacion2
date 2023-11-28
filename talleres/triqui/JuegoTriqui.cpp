#include <iostream>
#include <cstdio> // Para usar printf y scanf en lugar de std::cout y std::cin
#include "Libreria.h" 

void JugarTriqui(char tablero[]);
void MostrarTablero(char tablero[]);
bool TurnoJugador(char tablero[], char simboloJugador, const char* mensaje);
bool VerificarGanador(char tablero[]);
bool VerificarEmpate(char tablero[]);
/**
 * @brief Función principal del juego Triqui.
 */
int main() {
    char tablero[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    JugarTriqui(tablero);
    return 0;
}
/**
 * @brief Inicia y controla el flujo del juego Tic-Tac-Toe.
 * 
 * @param tablero Representa el estado actual del juego.
 */
void JugarTriqui(char tablero[]) {
    bool esTurnoJugador1 = true;

    while (true) {
        system("cls");
        MostrarTablero(tablero);

        if (esTurnoJugador1) {
            if (TurnoJugador(tablero, 'X', "Jugador 1 (X), ingrese una posición: ")) {
                break;
            }
        } else {
            if (TurnoJugador(tablero, 'O', "Jugador 2 (O), ingrese una posición: ")) {
                break;
            }
        }

        if (VerificarEmpate(tablero)) {
            gotoxy(10, 16);
            printf("Empate!\n");
            break;
        }

        esTurnoJugador1 = !esTurnoJugador1;
    }

    system("pause");
}
/**
 * @brief Muestra el tablero actualizado del juego en la consola.
 * 
 * @param tablero Array que representa el tablero del juego.
 */
void MostrarTablero(char tablero[]) {
    gotoxy(10, 10);
    printf("%c | %c | %c\n", tablero[0], tablero[1], tablero[2]);
    gotoxy(10, 11);
    printf("---------\n");
    gotoxy(10, 12);
    printf("%c | %c | %c\n", tablero[3], tablero[4], tablero[5]);
    gotoxy(10, 13);
    printf("---------\n");
    gotoxy(10, 14);
    printf("%c | %c | %c\n", tablero[6], tablero[7], tablero[8]);
}
/**
 * @brief Maneja el turno de un jugador.
 * 
 * @param tablero Array que representa el tablero del juego.
 * @param simboloJugador Símbolo del jugador actual ('X' o 'O').
 * @param mensaje Mensaje para solicitar la jugada al jugador.
 * @return true si el jugador ha ganado, false en caso contrario.
 */
bool TurnoJugador(char tablero[], char simboloJugador, const char* mensaje) {
    int opcion, indiceReal;
    gotoxy(10, 8);
    printf("%s", mensaje);
    scanf("%d", &opcion);
    indiceReal = opcion - 1;

    if (opcion > 0 && opcion <= 9 && tablero[indiceReal] != 'X' && tablero[indiceReal] != 'O') {
        tablero[indiceReal] = simboloJugador;
        if (VerificarGanador(tablero)) {
            system("cls");
            MostrarTablero(tablero);
            gotoxy(10, 16);
            printf("Felicidades jugador %c has ganado\n", simboloJugador);
            return true;
        }
    } else {
        gotoxy(10, 9);
        printf("Posición inválida o ya ocupada.\n");
        system("pause");
    }
    return false;
}
/**
 * @brief Verifica si hay un ganador en el juego.
 * 
 * @param tablero Array que representa el tablero del juego.
 * @return true si hay un ganador, false en caso contrario.
 */
bool VerificarGanador(char tablero[]) {
    // Las combinaciones ganadoras son las filas, columnas y diagonales
    const int combinacionesGanadoras[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Filas
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Columnas
        {0, 4, 8}, {2, 4, 6} // Diagonales
    };

    for (auto& combinacion : combinacionesGanadoras) {
        if (tablero[combinacion[0]] == tablero[combinacion[1]] &&
            tablero[combinacion[1]] == tablero[combinacion[2]]) {
            return true;
        }
    }

    return false;
}
/**
 * @brief Verifica si hay un empate en el juego.
 * 
 * @param tablero Array que representa el tablero del juego.
 * @return true si hay un empate, false en caso contrario.
 */
bool VerificarEmpate(char tablero[]) {
    for (int i = 0; i < 9; ++i) {
        if (tablero[i] != 'X' && tablero[i] != 'O') {
            return false;
        }
    }
    return true;
}
