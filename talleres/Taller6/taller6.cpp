#include <iostream>
#include <cstring>
#include <string>
#include <cctype>

using namespace std;

// Declaración de funciones
void Menu();
void longitud();
void copiar();
char* leerCadena(int N);
char* anadirCaracter(const char* str, char c);
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
        cout << "3. Leer cadena con logitud N" << endl;
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
                char* cadenaResultante = leerCadena(N);
                cout << "La cadena leída es: " << cadenaResultante << endl;
                // Liberamos la memoria de la cadena
                delete[] cadenaResultante;
                break;
            }
            case 4:{
                char* cadena = leerCadena(100);
                char c;
                cout << "Ingrese el carácter a añadir: ";
                cin >> c;
                char* cadenaResultante = anadirCaracter(cadena, c);
                cout << "La cadena resultante es: " << cadenaResultante << endl;
                // Liberamos la memoria de las cadenas
                delete[] cadena;
                delete[] cadenaResultante;
                break;}

            case 13:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 13);
}

// Función longitud
/**
 * @brief Una funcion que mide la cadena de un caracter ingresado
 * 
 * 
 */
void longitud() {
    char cadena[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    cin.getline(cadena, 100);
    int longi = strlen(cadena);
    cout << "La longitud de la cadena es: " << longi << endl;
}

// Función copiar
/**
 * @brief Una funcion que copia una cadena de caracteres
 * 
 * 
 */
void copiar() {
    char cadena[100];
    char copia[100];
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    cin.getline(cadena, 100);
    strcpy(copia, cadena);
    cout << "La cadena copiada es: " << copia << endl;
}

/**
 * @brief Una función que recibe un entero N y devuelve una cadena de longitud N.
 * 
 * @param N La longitud de la cadena a leer.
 * @return La cadena leída.
 */
char* leerCadena(int N) {
    // Creamos una cadena dinámica de tamaño N + 1 (incluyendo el carácter nulo)
    char* cadena = new char[N + 1];

    cout << "Ingrese una cadena de caracteres de longitud " << N << ": ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    cin.getline(cadena, N + 1);  // Leemos N caracteres

    return cadena;
}


/**
 * @brief Añade un carácter al final de una cadena.
 * 
 * @param str La cadena original.
 * @param c El carácter a añadir.
 * @return La nueva cadena con el carácter añadido.
 */
char* anadirCaracter(const char* str, char c) {
    int len = strlen(str);
    
    // Crear una nueva cadena con espacio para el carácter adicional y el carácter nulo
    char* nuevaCadena = new char[len + 2];
    
    // Copiar la cadena original a la nueva cadena
    strcpy(nuevaCadena, str);
    
    // Añadir el nuevo carácter y el carácter nulo
    nuevaCadena[len] = c;
    nuevaCadena[len + 1] = '\0';
    
    return nuevaCadena;
}
