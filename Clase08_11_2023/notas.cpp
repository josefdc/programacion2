/*
Programa para calcular el promedio de tres notas de un estudiante.
El usuario debe ingresar el código del estudiante, el nombre y las tres notas.
El programa luego calcula y muestra el promedio de las notas.
*/

// Librerías
#include <iostream> // Para manejar la entrada y salida estándar (cin, cout)
using namespace std;

// Definición de variables
char CodigoEstudiante[6]; // Código del estudiante, recibe 6 caracteres
char NombreEstudiante[10]; // Nombre del estudiante, recibe 10 caracteres
float Nota1, Nota2, Nota3, Definitiva; // Notas y promedio (Definitiva)

// Función Principal
int main()
{
    // Solicitar el código del estudiante
    cout << "Digite el Codigo: ";
    cin >> CodigoEstudiante;

    // Solicitar el nombre del estudiante
    cout << "Digite el Nombre: ";
    cin >> NombreEstudiante;

    // Solicitar la primera nota
    cout << "Digite la Nota 1: ";
    cin >> Nota1;

    // Solicitar la segunda nota
    cout << "Digite la Nota 2: "; 
    cin >> Nota2;

    // Solicitar la tercera nota
    cout << "Digite la Nota 3: "; 
    cin >> Nota3;

    // Calcular el promedio de las tres notas
    Definitiva = (Nota1 + Nota2 + Nota3) / 3;

    // Mostrar el promedio
    cout << "El promedio es: " << Definitiva << endl; // Uso endl para que el cursor pase a la siguiente línea

    // Pausar el programa para que el usuario pueda ver el resultado
    system("pause");

    // Retornar 0 para indicar que el programa terminó correctamente
    return 0;
}
