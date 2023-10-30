// CADENAS.H
#ifndef CADENAS_H  // Asegúrate de que el nombre de la definición sea CADENAS_H en lugar de CADENAS.H
#define CADENAS_H
// librerias
#include <iostream>  // Para cin y cout
#include <cctype>    // Para tolower
#include <string>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <cstring>

using namespace std;


/**
 * @brief calcula la longitud de una cadena 
 * 
 * @param cad cadena de caracteres
 * @return int longitud de la cadena
 */
int longitud(char cad[])
{
    int i=0;
    while(cad[i]!='\0')
    {
        i++;
    }
    return i;
}


/*hacer una función que reciba una cadena de caracteres y devuelva una
copia en otra con el contenido de la primera. Es decir implemente la
función strcpy*/
/**
 * @brief copia una cadena en otra 
 * @param cad cadena de caracteres
 */
void copiar(char destino[],  char origen[]) {
    int i = 0;
    while (origen[i] != '\0') {
        destino[i] = origen[i];
        i++;
    }
    destino[i] = '\0';  // Asegúrate de terminar la cadena destino con un carácter nulo
}

/*
Hacer una función que reciba un entero Ny devuelva una cadena de
longitud N, leyendo por pantalla cada uno de los Ncaracteres de la
cadena.
*/
void limpiarBuffer();
// Función para limpiar el buffer
void limpiarBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

/**
 * @brief Lee N caracteres desde la entrada y los almacena en una cadena.
 * 
 * @param N La cantidad de caracteres a leer.
 * @param cadena El arreglo donde se almacenarán los caracteres.
 */
void leerCadena(int N, char cadena[]) {
    cout << "Introduce " << N << " caracteres: ";
    cin.getline(cadena, N + 1);  // +1 para el carácter de terminación '\0'
    limpiarBuffer();  // Limpia cualquier carácter adicional que el usuario haya ingresado
}




/*
Una función que reciba una cadena de caracteres y un carácter, y devuelva la cadena con el carácter adicionado al final.
*/
/**
 * @brief Añade un carácter al final de una cadena.
 * 
 * @param cadena La cadena original.
 * @param caracter El carácter a añadir.
 */
void agregarCaracter(char cadena[], char caracter) {
    int i = 0;
    while (cadena[i] != '\0') {
        i++;
    }
    cadena[i] = caracter;
    cadena[i+1] = '\0';  
}
/*
Una función que reciba una cadena de caracteres y la invierta en ella misma.
*/
/**
 * @brief Invierte una cadena en sí misma.
 * 
 * @param cadena La cadena a invertir.
 */
void invertirCadena(char cadena[]) {
    int len = longitud(cadena);  // Utilizamos la función longitud que ya definiste
    int mid = len / 2;
    for (int i = 0; i < mid; i++) {
        char temp = cadena[i];
        cadena[i] = cadena[len - 1 - i];
        cadena[len - 1 - i] = temp;
    }
}

/*
Una función que reciba una cadena de caracteres y devuelva otra cadena invirtiendo.
*/
/**
 * @brief Crea una nueva cadena que es la inversa de la original.
 * 
 * @param origen La cadena original.
 * @param destino La cadena invertida.
 */
void cadenaInvertida(char origen[], char destino[]) {
    int len = longitud(origen);  
    for (int i = 0; i < len; i++) {
        destino[i] = origen[len - 1 - i];
    }
    destino[len] = '\0';  // carácter nulo
}

/*
Haga una función que reciba dos cadenas de caracteres y devuelva otra
cadena con la concatenación de las dos primeras. Es decir implemente
la función concat.
*/
/**
 * @brief Concatena dos cadenas.
 * 
 * @param cadena1 La primera cadena.
 * @param cadena2 La segunda cadena.
 * @param resultado La cadena resultante después de la concatenación.
 */
void concat(char cadena1[], char cadena2[], char resultado[]) {
    int i = 0;
    while (cadena1[i] != '\0') {
        resultado[i] = cadena1[i];
        i++;
    }
    int j = 0;
    while (cadena2[j] != '\0') {
        resultado[i + j] = cadena2[j];
        j++;
    }
    resultado[i + j] = '\0';
}


/*
Hacer una función que reciba una cadena de caracteres y cuente cuantas
vocales tiene.
*/
/**
 * @brief Cuenta las vocales en una cadena.
 * 
 * @param cadena La cadena a evaluar.
 * @return int La cantidad de vocales en la cadena.
 */
int contarVocales(char cadena[]) {
    int count = 0;
    int i = 0;
    while (cadena[i] != '\0') {
        char c = tolower(cadena[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
        i++;
    }
    return count;
}


/*
Hacer una función que reciba una cadena de caracteres y devuelva otra
sin las vocales.
*/
/**
 * @brief Elimina las vocales de una cadena.
 * 
 * @param origen La cadena original.
 * @param destino La cadena sin vocales.
 */
void eliminarVocales(char origen[], char destino[]) {
    int j = 0;
    int i = 0;
    while (origen[i] != '\0') {
        char c = tolower(origen[i]);
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            destino[j] = origen[i];
            j++;
        }
        i++;
    }
    destino[j] = '\0';
}


/* 
Hacer una función que lea un string con solo caracteres numéricos y
devuelva el número que representa
*/
/**
 * @brief Convierte una cadena numérica a un entero.
 * 
 * @param cadena La cadena de caracteres numéricos.
 * @return int El número que representa la cadena.
 */
int cadenaANumero(char cadena[]) {
    int num = 0;
    int i = 0;
    while (cadena[i] != '\0') {
        num = num * 10 + (cadena[i] - '0');
        i++;
    }
    return num;
}
/*
Una función que reciba una cadena de caracteres e indique si es palíndrome.
*/
/**
 * @brief Determina si una cadena es palíndrome.
 * 
 * @param cadena La cadena a evaluar.
 * @return bool Verdadero si es palíndrome, falso en caso contrario.
 */
bool esPalindromo(char cadena[]) {
    int len = longitud(cadena);
    for (int i = 0; i < len / 2; i++) {
        if (cadena[i] != cadena[len - 1 - i]) {
            return false;
        }
    }
    return true;
}
/*
Una función booleana que reciba dos cadenas de caracteres e indique si son iguales. Implementación de la función strcmp.
*/
/**
 * @brief Determina si dos cadenas son iguales.
 * 
 * @param cadena1 La primera cadena.
 * @param cadena2 La segunda cadena.
 * @return bool Verdadero si son iguales, falso en caso contrario.
 */
bool cadenasIguales(char cadena1[], char cadena2[]) {
    int i = 0;
    while (cadena1[i] != '\0' && cadena2[i] != '\0') {
        if (cadena1[i] != cadena2[i]) {
            return false;
        }
        i++;
    }
    return cadena1[i] == cadena2[i];  // Comprueba si ambas cadenas terminan al mismo tiempo
}
/*
Una función que reciba dos cadenas de caracteres e indique si la segunda está incluida en la primera (es decir si es substring).
*/
/**
 * @brief Determina si una cadena es subcadena de otra.
 * 
 * @param cadena La cadena principal.
 * @param subcadena La cadena que podría estar contenida en la principal.
 * @return bool Verdadero si subcadena está contenida en cadena, falso en caso contrario.
 */
bool esSubcadena(char cadena[], char subcadena[]) {
    int lenCadena = longitud(cadena);
    int lenSubcadena = longitud(subcadena);
    
    if (lenSubcadena > lenCadena) {
        return false;
    }

    for (int i = 0; i <= lenCadena - lenSubcadena; i++) {
        bool match = true;
        for (int j = 0; j < lenSubcadena; j++) {
            if (cadena[i + j] != subcadena[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }
    return false;
}

/**
 * @brief Normaliza una cadena para el chequeo de palíndromos.
 * 
 * @param cadena La cadena original.
 * @return char* La cadena normalizada.
 */
void normalizarCadena(char cadena[]) {
    int i, j = 0;
    char temp;
    int len = strlen(cadena); // Asumiendo que strlen() está disponible

    for (i = 0; i < len; i++) {
        // Convertir a minúscula y verificar si es alfabético
        temp = tolower(cadena[i]);
        if (isalpha(temp)) {
            cadena[j++] = temp;
        }
    }
    // Colocar el carácter nulo al final para terminar la cadena
    cadena[j] = '\0';
}

#endif  // Fin de la guardia de inclusión

