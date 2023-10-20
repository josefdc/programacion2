/**
 * @file taller6.cpp
 * @brief Menú para operaciones de cadenas.
 * 
 * Este archivo contiene un menú que permite realizar varias operaciones con cadenas de caracteres.
 */

#include "cadenas.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>

// Declaracion de funciones
void Menu();

// Funcion principal

/**
 * @brief Función principal del programa.
 * 
 * Inicia el menú para las operaciones de cadenas.
 * 
 * @return int Estado de finalización.
 */
int main()
{
    Menu();
    return 0;
}

/**
 * @brief Muestra un menú interactivo para operaciones de cadenas.
 * 
 * Este menú permite al usuario seleccionar diferentes operaciones para realizar con cadenas de caracteres.
 */
void Menu()
{
    int opcion = 0;
    while(opcion != 15)  
    {
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
        printf("15. Salir\n");
        printf("Ingrese una opcion: (1-15)\n");

        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1:
            {
                // utilizacion de la funcion longitud
                printf("Ingrese una cadena de caracteres: \n");
                char cadena[100];
                scanf("%s", cadena);
                int len = longitud(cadena);
                printf("La longitud de la cadena es: %d\n", len);
            }
            break;
        case 2:
            {
                // utilizacion de la funcion copiar
                printf("Ingrese una cadena de caracteres: \n");
                char cadena1[100];
                scanf("%s", cadena1);
                char cadena2[100];
                copiar(cadena1, cadena2);
                printf("La cadena copiada es: %s\n", cadena2);
            }
            break;
        case 3:
            {
                
            }
            
        case 15:
            printf("Adios\n");
            break;
        default:
            break;
        }
    }
}
