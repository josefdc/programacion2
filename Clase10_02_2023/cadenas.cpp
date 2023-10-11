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
void comparar();
void concatenar();
void buscar();
void invertir();
void mayusculas();
void minusculas();
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
    do
    {
        printf("1. Longitud de una cadena\n");
        printf("2. Copiar una cadena\n");
        printf("3. Comparar dos cadenas\n");
        printf("4. Concatenar dos cadenas\n");
        printf("5. Buscar un carácter\n");
        printf("6. Invertir cadena\n");
        printf("7. Convertir a mayúsculas\n");
        printf("8. Convertir a minúsculas\n");
        printf("9. Salir\n");
        printf("Ingrese una opcion: (1-9)\n");
        scanf("%d", &opcion);
        getchar(); // Consume el newline después de scanf
        switch (opcion)
        {
        case 1:
            longitud();
            break;
        case 2:
            copiar();
            break;
        case 3:
            comparar();
            break;
        case 4:
            concatenar();
            break;
        case 5:
            buscar();
            break;
        case 6:
            invertir();
            break;
        case 7:
            mayusculas();
            break;
        case 8:
            minusculas();
            break;
        case 9:
            break;
        default:
            printf("Opcion invalida\n");
            system("pause");
            break;
        }
    } while(opcion != 9);
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
/**
 * @brief Función que compara dos cadenas
 * 
 */
void comparar()
{
    char cadena1[100], cadena2[100];
    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = 0; // Para eliminar el '\n' al final
    printf("Ingrese la segunda cadena: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = 0;
    
    int result = strcmp(cadena1, cadena2);
    
    if(result == 0)
        printf("Las cadenas son iguales.\n");
    else if(result < 0)
        printf("La primera cadena es menor que la segunda.\n");
    else
        printf("La primera cadena es mayor que la segunda.\n");

    system("pause");
}

/**
 * @brief Función que concatena dos cadenas
 * 
 */
void concatenar()
{
    char cadena1[100], cadena2[100];
    printf("Ingrese la primera cadena: ");
    fgets(cadena1, sizeof(cadena1), stdin);
    cadena1[strcspn(cadena1, "\n")] = 0;
    printf("Ingrese la cadena que desea agregar: ");
    fgets(cadena2, sizeof(cadena2), stdin);
    cadena2[strcspn(cadena2, "\n")] = 0;

    strcat(cadena1, cadena2);
    printf("La cadena resultante es: %s\n", cadena1);

    system("pause");
}

/**
 * @brief Función que busca un carácter en una cadena
 * 
 */
void buscar()
{
    char cadena[100], caracter;
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0;
    printf("Ingrese el caracter a buscar: ");
    scanf(" %c", &caracter); // el espacio antes de %c consume el newline
    
    char *res = strchr(cadena, caracter);
    if(res)
        printf("El caracter '%c' se encuentra en la posición %ld\n", caracter, res - cadena);
    else
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);

    system("pause");
}

/**
 * @brief Función que invierte una cadena
 * 
 */
void invertir()
{
    char cadena[100];
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0;

    printf("La cadena invertida es: %s\n", strrev(cadena));

    system("pause");
}

/**
 * @brief Función que convierte una cadena a mayúsculas
 * 
 */
void mayusculas()
{
    char cadena[100];
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0;

    printf("La cadena en mayúsculas es: %s\n", strupr(cadena));

    system("pause");
}

/**
 * @brief Función que convierte una cadena a minúsculas
 * 
 */
void minusculas()
{
    char cadena[100];
    printf("Ingrese una cadena: ");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0;

    printf("La cadena en minúsculas es: %s\n", strlwr(cadena));

    system("pause");
}
