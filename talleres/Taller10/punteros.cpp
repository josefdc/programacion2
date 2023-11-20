/**
 * @file main.cpp
 * @brief Taller de Punteros en C++
 * 
 * Este programa ofrece un conjunto de funciones para trabajar con punteros en C++.
 * Incluye operaciones como elevar al cuadrado un número, imprimir cadenas, buscar
 * caracteres en cadenas, concatenar cadenas, invertir cadenas y operaciones en arreglos.
 */

#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

/**
 * Eleva al cuadrado un número.
 * @param n Puntero al número que se va a elevar al cuadrado.
 */
void sqr(int *n) {
    *n = (*n) * (*n);
}

/**
 * Imprime una cadena de caracteres.
 * @param str Apuntador a la cadena de caracteres.
 */
void printstr(const char *str) {
    while(*str) {
        putchar(*str++);
    }
    cout << endl;
}

/**
 * Busca un carácter en una cadena y retorna su posición.
 * @param str Cadena de caracteres donde buscar.
 * @param c Carácter a buscar.
 * @return La posición del carácter en la cadena, o -1 si no se encuentra.
 */
int str_busca(const char *str, char c) {
    const char *inicio = str;
    while(*str) {
        if (*str == c) {
            return str - inicio;
        }
        str++;
    }
    return -1;
}

/**
 * Concatena dos cadenas de caracteres.
 * @param str1 La cadena principal a la que se agregará str2.
 * @param str2 La cadena que se agregará al final de str1.
 */
void concatena(char *str1, const char *str2) {
    while(*str1) {
        str1++;
    }
    while(*str2) {
        *str1++ = *str2++;
    }
    *str1 = '\0';
}

/**
 * Invierte una cadena de caracteres.
 * @param str La cadena que se va a invertir.
 */
void reversa(char *str) {
    int n = strlen(str);
    for(int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
}

/**
 * Busca el número menor y mayor en un arreglo.
 * @param arr Arreglo de enteros.
 * @param n Tamaño del arreglo.
 * @param menor Referencia al menor número encontrado en el arreglo.
 * @param mayor Referencia al mayor número encontrado en el arreglo.
 */
void buscarMenorMayor(int arr[], int n, int &menor, int &mayor) {
    menor = *min_element(arr, arr + n);
    mayor = *max_element(arr, arr + n);
}

/**
 * Ordena un arreglo de enteros de menor a mayor.
 * @param arr Arreglo de enteros.
 * @param n Tamaño del arreglo.
 */
void ordenarArreglo(int arr[], int n) {
    sort(arr, arr + n);
}

// Función para mostrar el menú
void mostrarMenu() {
    int opcion;
    do {
        cout << "\nTaller de Punteros en C++\n";
        cout << "1. Elevar al cuadrado\n";
        cout << "2. Imprimir cadena\n";
        cout << "3. Buscar en cadena\n";
        cout << "4. Concatenar cadenas\n";
        cout << "5. Invertir cadena\n";
        cout << "6. Buscar menor y mayor en arreglo\n";
        cout << "7. Ordenar arreglo\n";
        cout << "8. Salir\n";
        cout << "Seleccione una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                int num;
                cout << "Ingrese un número para elevar al cuadrado: ";
                cin >> num;
                sqr(&num);
                cout << "Resultado: " << num << endl;
                break;
            }
            case 2: {
                char str[100];
                cout << "Ingrese una cadena para imprimir: ";
                cin.ignore();
                cin.getline(str, 100);
                printstr(str);
                break;
            }
            case 3: {
                char str[100], c;
                cout << "Ingrese una cadena: ";
                cin.ignore();
                cin.getline(str, 100);
                cout << "Ingrese un carácter para buscar: ";
                cin >> c;
                int pos = str_busca(str, c);
                if (pos != -1) {
                    cout << "El carácter '" << c << "' se encuentra en la posición: " << pos << endl;
                } else {
                    cout << "El carácter '" << c << "' no se encuentra en la cadena." << endl;
                }
                break;
            }
            case 4: {
                char str1[200], str2[100];
                cout << "Ingrese la cadena principal: ";
                cin.ignore();
                cin.getline(str1, 200);
                cout << "Ingrese la cadena a concatenar: ";
                cin.getline(str2, 100);
                concatena(str1, str2);
                cout << "Cadena concatenada: " << str1 << endl;
                break;
            }
            case 5: {
                char str[100];
                cout << "Ingrese una cadena para invertir: ";
                cin.ignore();
                cin.getline(str, 100);
                reversa(str);
                cout << "Cadena invertida: " << str << endl;
                break;
            }
            case 6: {
                int n;
                cout << "Ingrese el número de elementos en el arreglo: ";
                cin >> n;
                vector<int> arr(n);
                cout << "Ingrese los elementos del arreglo:\n";
                for (int &x : arr) {
                    cin >> x;
                }
                int menor, mayor;
                buscarMenorMayor(arr.data(), n, menor, mayor);
                cout << "El número menor es: " << menor << "\nEl número mayor es: " << mayor << endl;
                break;
            }
            case 7: {
                int n;
                cout << "Ingrese el número de elementos en el arreglo: ";
                cin >> n;
                vector<int> arr(n);
                cout << "Ingrese los elementos del arreglo:\n";
                for (int &x : arr) {
                    cin >> x;
                }
                ordenarArreglo(arr.data(), n);
                cout << "Arreglo ordenado: ";
                for (int x : arr) {
                    cout << x << " ";
                }
                cout << endl;
                break;
            }
            case 8:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "Opción no válida. Intente nuevamente." << endl;
        }
    } while(opcion != 8);
}

int main() {
    mostrarMenu();
    return 0;
}
