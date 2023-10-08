#include <iostream>
#include <string>
using namespace std;

// Declaración de funciones
void Menu();
void longitud();
void copiar();
string leerCadena(int N);
string anadirCaracter(const string& str, char c);

// Función main
int main() {
    Menu();
    return 0;
}

// Función Menu
void Menu() {
    int opcion;
    do {
        cout << "1. Longitud de una cadena" << endl;
        cout << "2. Copiar una cadena" << endl;
        cout << "3. Leer cadena con longitud N" << endl;
        cout << "4. Añadir un carácter al final de una cadena" << endl;
        cout << "13. Salir" << endl;
        cout << "Elija una opción: ";
        cin >> opcion;

        switch(opcion) {
            case 1:
                longitud();
                break;
            case 2:
                copiar();
                break;
            case 3:{
                int N;
                cout << "Ingrese el valor de N: ";
                cin >> N;
                string cadenaResultante = leerCadena(N);
                cout << "La cadena leída es: " << cadenaResultante << endl;
                break;
            }
            case 4:{
                string cadena = leerCadena(100);
                char c;
                cout << "Ingrese el carácter a añadir: ";
                cin >> c;
                string cadenaResultante = anadirCaracter(cadena, c);
                cout << "La cadena resultante es: " << cadenaResultante << endl;
                break;
            }
            case 13:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 13);
}

// Función longitud
void longitud() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    int longi = cadena.length();
    cout << "La longitud de la cadena es: " << longi << endl;
}

// Función copiar
void copiar() {
    string cadena, copia;
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    copia = cadena;
    cout << "La cadena copiada es: " << copia << endl;
}

// Función leerCadena
string leerCadena(int N) {
    string cadena;
    cout << "Ingrese una cadena de caracteres de longitud " << N << ": ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    return cadena;
}

// Función anadirCaracter
string anadirCaracter(const string& str, char c) {
    string nuevaCadena = str + c;  // La concatenación es directa con el operador +
    return nuevaCadena;
}
