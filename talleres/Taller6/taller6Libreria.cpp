#include "CADENAS.H"
#include <iostream>
#include <string>

using namespace std;

int main() {
    char cadena[100];
    cout << "Ingrese una cadena de caracteres: ";
    // cin.ignore();  
    cin.getline(cadena, 100);  // Lee hasta 100 caracteres o hasta un salto de línea, lo que ocurra primero
    
    char copia[100];  // Asegúrate de tener suficiente espacio para la copia
    copiar(copia, cadena);  
    
    cout << "La cadena copiada es: " << copia << endl;  // Imprime la cadena copiada
    return 0;
}
