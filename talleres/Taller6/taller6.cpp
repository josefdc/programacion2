#include <iostream>
#include <string>
using namespace std;

// Declaración de funciones
void Menu();
void longitud();
void copiar();
string leerCadena(int N);
string anadirCaracter(const string& str, char c);
void invertir();
string invertirCadena(string cadena);
string concat(string cadena1, string cadena2);
int contarVocales(string cadena);
void concatenar();
void contarVocalesUsuario();

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
        cout << "5. invertir una cadena" << endl;
        cout << "6. Concatenar dos cadenas" << endl;
        cout << "7. Contar vocales en una cadena" << endl;
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
            case 5:
                invertir();
                break;
            case 6:
                concatenar();
                break;
            case 7:
                contarVocalesUsuario();
                break;

            case 13:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida. Intente de nuevo." << endl;
        }

    } while (opcion != 13);
}

/**
 * @brief Calcula y muestra la longitud de una cadena ingresada por el usuario.
 */
void longitud() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    int longi = cadena.length();
    cout << "La longitud de la cadena es: " << longi << endl;
}

/**
 * @brief Copia una cadena ingresada por el usuario y muestra la copia.
 */
void copiar() {
    string cadena, copia;
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    copia = cadena;
    cout << "La cadena copiada es: " << copia << endl;
}

/**
 * @brief Lee una cadena de longitud N ingresada por el usuario.
 * @param N La longitud de la cadena a leer.
 * @return La cadena leída.
 */
string leerCadena(int N) {
    string cadena;
    cout << "Ingrese una cadena de caracteres de longitud " << N << ": ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    return cadena;
}

/**
 * @brief Añade un carácter al final de una cadena.
 * @param str La cadena original.
 * @param c El carácter a añadir.
 * @return La nueva cadena con el carácter añadido al final.
 */
string anadirCaracter(const string& str, char c) {
    string nuevaCadena = str + c;  // La concatenación es directa con el operador +
    return nuevaCadena;
}

/**
 * @brief Invierte una cadena ingresada por el usuario y muestra la cadena invertida.
 */
void invertir() {
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    string cadenaInvertida = invertirCadena(cadena);
    cout << "La cadena invertida es: " << cadenaInvertida << endl;
}

/**
 * @brief Invierte una cadena.
 * @param cadena La cadena a invertir.
 * @return La cadena invertida.
 */
string invertirCadena(string cadena){
    string cadenaInvertida;
    for(int i = cadena.length()-1; i >= 0; i--){
        cadenaInvertida += cadena[i]; 
    }
    return cadenaInvertida;
}

/**
 * @brief una cadena con otra cadena.
 * 
 * @param cadena1 
 * @param cadena2 
 * @return string 
 */
string concat(string cadena1, string cadena2) {
    return cadena1 + cadena2;
}

/**
 * @brief Concatena dos cadenas ingresadas por el usuario y muestra la concatenación.
 * 
 */
void concatenar() {
    string cadena1, cadena2;
    cout << "Ingrese la primera cadena: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);
    string resultado = concat(cadena1, cadena2);
    cout << "La concatenación de las cadenas es: " << resultado << endl;
}

/**
 * @brief Cuenta el número de vocales en una cadena.
 * 
 * @param cadena La cadena en la que se contarán las vocales.
 * @return El número de vocales en la cadena.
 */
int contarVocales(string cadena) {
    int conteo = 0;
    for (char c : cadena) {
        c = tolower(c);  // Convierte el carácter a minúsculas para simplificar la comparación
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            conteo++;
        }
    }
    return conteo;
}

/**
 * @brief una cadena ingresada por el usuario y muestra el número de vocales en la cadena.
 * 
 */
void contarVocalesUsuario() {
    string cadena;
    cout << "Ingrese una cadena: ";
    cin.ignore();  // Limpia el búfer para la siguiente entrada
    getline(cin, cadena);
    int resultado = contarVocales(cadena);
    cout << "La cadena tiene " << resultado << " vocales." << endl;
}
/*
Hacer una función que reciba una cadena de caracteres y la invierta en
ella misma
*/

string invertirCadena(char cadena[]) {
    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }

    int inicio = 0;
    int fin = longitud - 1;
    while (inicio < fin) {
        char temp = cadena[inicio];
        cadena[inicio] = cadena[fin];
        cadena[fin] = temp;
        inicio++;
        fin--;
    }
    
    return cadena;
}
