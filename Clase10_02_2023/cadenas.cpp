#include "Milibreia.h"
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <iostream> // Incluye esto para usar cout y endl

using namespace std;

// Declaracion de Funciones
void Menu();
void longitud();  // Declaración de la función longitud
void copiar();    // Declaración de la función copiar

/**
 * @brief Funcion principal que ejecuta el programa menu
 * 
 * @return int 
 */
int main()
{
    Menu();
    return 0;
}

/**
 * @brief Funcion que muestra el menu y ejecuta las opciones
 * 
 */
void Menu()
{
    int opcion;
    for(opcion = 0; opcion != 12; )
    {
        printf("1. Longitud de una cadena\n");
        printf("2. Copiar una cadena\n");
        printf("3. Comparar dos cadenas\n");
        printf("4. Concatenar dos cadenas\n");
        printf("5. Salir\n");
        printf("Ingrese una opcion: (1-5)\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1 :
            longitud();
            break;
        case 2:
            //copiar();
            break;
        case 3:
            //comparar();
            break;
        case 4:
            //concatenar();
            break;
        case 5:
            break;
        default:
            printf("Opcion invalida\n");
            system("pause");
            break;
        }
    }
}

/**
 * @brief Funcion que calcula la longitud de una cadena
 * 
 */
void longitud()
{
    char cadena[100];
    printf("Ingrese una cadena: ");
    fflush(stdin); // Corregido el uso de fflush
    gets(cadena); // Corregido el uso de fgets
    cout << "La longitud de la cadena es: " << strlen(cadena) << endl;
    system("pause");
}
/**
 * @brief funcion que copia una cadena
 * 
 */
void copiar()
{
    char cadena[100];
    char copia[100];
    printf("Ingrese una cadena: ");
    fflush(stdin); // Corregido el uso de fflush
    gets(cadena); // Corregido el uso de fgets
    strcpy(copia, cadena);
    printf("La copia de la cadena es: %s\n", copia);
    system("pause");
}
