#include "cadenas.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <locale>


// Declaracion de funciones
void Menu();
void pausa();
// Funcion principal
int main()
{
    // Establecer la configuración regional del sistema
    std::setlocale(LC_ALL, "");

    Menu();
    return 0;
}
void Menu()
{
    int opcion = 0;
    while(opcion != 15)  
    {
        // Limpieza de la consola
        #ifdef _WIN32
        system("cls");
        #else
        system("clear");
        #endif
        
        printf("\n");
        printf("====================================\n");
        printf("=       OPERACIONES DE CADENAS      =\n");
        printf("====================================\n");
        printf("\n");
        printf("1. Longitud de una cadena\n");
        printf("2. Copiar cadena\n");
        printf("3. Leer cadena\n");
        printf("4. Añadir carácter al final de una cadena\n");
        printf("5. Invertir cadena\n");
        printf("6. Generar cadena inversa\n");
        printf("7. Concatenar dos cadenas\n");
        printf("8. Contar vocales en una cadena\n");
        printf("9. Eliminar vocales de una cadena\n");
        printf("10. Convertir cadena numérica a entero\n");
        printf("11. Verificar si una cadena es palíndrome\n");
        printf("12. Comparar dos cadenas\n");
        printf("13. Verificar si una cadena es substring de otra\n");
        printf("------------------------------------\n");
        printf("15. Salir\n");
        printf("\n");
        printf("Ingrese una opcion: (1-15)\n");

        scanf("%d", &opcion);
        limpiarBuffer();  // Limpia el búfer después de scanf()

        switch (opcion)
        {
        case 1:
        {
            printf("Ingrese una cadena de caracteres: \n");
            char cadena[100];
            fgets(cadena, sizeof(cadena), stdin);
            if (cadena[longitud(cadena) - 1] == '\n') {
                cadena[longitud(cadena) - 1] = '\0';
            }
            int len = longitud(cadena);
            printf("La longitud de la cadena es: %d\n", len);
            pausa();
        }
        break;

        case 2:
            {
                printf("Ingrese una cadena de caracteres: \n");
                char cadena1[100];
                fgets(cadena1, sizeof(cadena1), stdin);
                if (cadena1[longitud(cadena1) - 1] == '\n') {
                    cadena1[longitud(cadena1) - 1] = '\0';
                }
                char cadena2[100];
                copiar(cadena2, cadena1);
                printf("La cadena copiada es: %s\n", cadena2);
                pausa();
            }
            break;
        case 3:
            {
                int N;
                char cadena[101];  // Aumenta en 1 para el carácter nulo
                
                printf("Ingrese el número de caracteres a leer: ");
                scanf("%d", &N);
                getchar();  // Limpiar el buffer
                
                if (N > 100) {  // Proteger contra desbordamientos de buffer
                    printf("Número demasiado grande. Limitado a 100 caracteres.\n");
                    N = 100;
                }
                
                leerCadena(N, cadena);
                printf("Cadena ingresada: %s\n", cadena);
                pausa();
            }
            break;
        case 4:
            {
                char cadena[100];
                char caracter;
                printf("Ingrese una cadena de caracteres: \n");
                fgets(cadena, sizeof(cadena), stdin);
                if (cadena[longitud(cadena) - 1] == '\n') {
                    cadena[longitud(cadena) - 1] = '\0';
                }
                printf("Ingrese un caracter: \n");
                caracter = getchar(); 
                agregarCaracter(cadena, caracter);
                printf("La cadena con el caracter agregado es: %s\n", cadena);
                pausa();    
            }
            break;


        case 15:
            printf("Adios\n");
            break;
        default:
            break;
        }
    }
}

void pausa() {
    printf("\nPresione ENTER para continuar...");
    getchar();
}
