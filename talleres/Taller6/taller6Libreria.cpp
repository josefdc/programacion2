#include "cadenas.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
                if (cadena[strlen(cadena) - 1] == '\n') {
                    cadena[strlen(cadena) - 1] = '\0';
                }
                limpiarBuffer();  // Limpia el buffer para asegurarse de que el siguiente getchar() no tome el ENTER anterior
                printf("Ingrese un caracter: \n");
                caracter = getchar();  // Obtiene el carácter del usuario
                agregarCaracter(cadena, caracter);
                printf("La cadena con el caracter agregado es: %s\n", cadena);
                limpiarBuffer();  // Limpia el buffer de nuevo por si acaso hay caracteres extra después de ingresar el caracter
                pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
            }
            break;
        case 5:
        {
            char cadena[100];
            printf("Ingrese una cadena de caracteres para invertirla: \n");
            fgets(cadena, sizeof(cadena), stdin);
            if (cadena[strlen(cadena) - 1] == '\n') {
                cadena[strlen(cadena) - 1] = '\0';
            }
            limpiarBuffer();  // Limpia el buffer para asegurarse de que el siguiente getchar() no tome el ENTER anterior

            invertirCadena(cadena);

            printf("La cadena invertida es: %s\n", cadena);
            pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
        }
        break;
        case 6:
        {
            char cadenaOriginal[100];
            char cadenaInversa[100];
            
            printf("Ingrese una cadena de caracteres para invertirla en una nueva cadena: \n");
            fgets(cadenaOriginal, sizeof(cadenaOriginal), stdin);
            
            // Eliminar el salto de línea al final si existe
            if (cadenaOriginal[strlen(cadenaOriginal) - 1] == '\n') {
                cadenaOriginal[strlen(cadenaOriginal) - 1] = '\0';
            }
            
            // Invocar la función para crear una cadena invertida
            cadenaInvertida(cadenaOriginal, cadenaInversa);

            printf("La cadena original es: \"%s\"\n", cadenaOriginal);
            printf("La cadena invertida es: \"%s\"\n", cadenaInversa);
            pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
        }
    break;

        case 7:
        {
            char cadena1[100];
            char cadena2[100];
            char resultado[200]; // Asumimos que el resultado no superará los 200 caracteres
            
            printf("Ingrese la primera cadena: \n");
            fgets(cadena1, sizeof(cadena1), stdin);
            // Eliminar el salto de línea al final si existe
            if (cadena1[strlen(cadena1) - 1] == '\n') {
                cadena1[strlen(cadena1) - 1] = '\0';
            }
            
            printf("Ingrese la segunda cadena: \n");
            fgets(cadena2, sizeof(cadena2), stdin);
            // Eliminar el salto de línea al final si existe
            if (cadena2[strlen(cadena2) - 1] == '\n') {
                cadena2[strlen(cadena2) - 1] = '\0';
            }
            
            // Invocar la función concat
            concat(cadena1, cadena2, resultado);

            printf("La concatenación de las dos cadenas es: \"%s\"\n", resultado);
            pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
        }
        break;
        case 8:
        {
            char cadena[100];
            printf("Ingrese una cadena de caracteres para contar sus vocales: \n");
            fgets(cadena, sizeof(cadena), stdin);
            // Eliminar el salto de línea al final si existe
            if (cadena[strlen(cadena) - 1] == '\n') {
                cadena[strlen(cadena) - 1] = '\0';
            }
            
            // Llama a la función contarVocales
            int numVocales = contarVocales(cadena);
            printf("La cantidad de vocales en la cadena es: %d\n", numVocales);
            pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
        }
        break;
        
        case 9:
    {
        char cadenaOriginal[100];
        char cadenaSinVocales[100];
        printf("Ingrese una cadena de caracteres para eliminar sus vocales: \n");
        fgets(cadenaOriginal, sizeof(cadenaOriginal), stdin);
        // Eliminar el salto de línea al final si existe
        if (cadenaOriginal[strlen(cadenaOriginal) - 1] == '\n') {
            cadenaOriginal[strlen(cadenaOriginal) - 1] = '\0';
        }

        // Llama a la función eliminarVocales
        eliminarVocales(cadenaOriginal, cadenaSinVocales);
        printf("La cadena sin vocales es: %s\n", cadenaSinVocales);
        pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
    }
    break;
        case 10:
    {
        char cadenaNumerica[100];
        printf("Ingrese una cadena de caracteres numéricos para convertir a entero: \n");
        fgets(cadenaNumerica, sizeof(cadenaNumerica), stdin);
        // Eliminar el salto de línea al final si existe
        if (cadenaNumerica[strlen(cadenaNumerica) - 1] == '\n') {
            cadenaNumerica[strlen(cadenaNumerica) - 1] = '\0';
        }

        // Llama a la función cadenaANumero
        int numero = cadenaANumero(cadenaNumerica);
        printf("El número representado por la cadena es: %d\n", numero);
        pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
    }
    break;
    case 11:
    {
        char cadena[100];
        printf("Ingrese una cadena para verificar si es un palíndromo: \n");
        fgets(cadena, sizeof(cadena), stdin);
        // Eliminar el salto de línea al final si existe
        if (cadena[strlen(cadena) - 1] == '\n') {
            cadena[strlen(cadena) - 1] = '\0';
        }

        // Convertir a minúsculas y eliminar espacios y signos de puntuación si se requiere
     
        normalizarCadena(cadena);

        bool palindrome = esPalindromo(cadena);
        if (palindrome) {
            printf("La cadena ingresada es un palíndromo.\n");
        } else {
            printf("La cadena ingresada no es un palíndromo.\n");
        }
        pausa();  // Pausa para que el usuario pueda ver el resultado antes de continuar
    }
    break;
        case 12:
        {
            char cadena1[100];
            char cadena2[100];

            printf("Ingrese la primera cadena: \n");
            fgets(cadena1, sizeof(cadena1), stdin);
            cadena1[strcspn(cadena1, "\n")] = 0; // Elimina el salto de línea

            printf("Ingrese la segunda cadena: \n");
            fgets(cadena2, sizeof(cadena2), stdin);
            cadena2[strcspn(cadena2, "\n")] = 0; // Elimina el salto de línea

            bool iguales = cadenasIguales(cadena1, cadena2);
            if (iguales) {
                printf("Las cadenas son iguales.\n");
            } else {
                printf("Las cadenas no son iguales.\n");
            }
            pausa();  // Espera a que el usuario presione ENTER
        }
    break;
        case 13:
{
    char cadena[100];
    char subcadena[100];

    printf("Ingrese la cadena principal: \n");
    fgets(cadena, sizeof(cadena), stdin);
    cadena[strcspn(cadena, "\n")] = 0; // Elimina el salto de línea

    printf("Ingrese la subcadena a buscar: \n");
    fgets(subcadena, sizeof(subcadena), stdin);
    subcadena[strcspn(subcadena, "\n")] = 0; // Elimina el salto de línea

    bool contiene = esSubcadena(cadena, subcadena);
    if (contiene) {
        printf("La subcadena está contenida en la cadena.\n");
    } else {
        printf("La subcadena no está contenida en la cadena.\n");
    }
    pausa();  // Espera a que el usuario presione ENTER
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
    printf("Presione ENTER para continuar...\n");
    while (getchar() != '\n');  // Esperar a que el usuario presione ENTER
}
