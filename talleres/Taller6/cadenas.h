// CADENAS.H
#ifndef CADENAS_H  // Asegúrate de que el nombre de la definición sea CADENAS_H en lugar de CADENAS.H
#define CADENAS_H

#include <string>
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


#endif  // Fin de la guardia de inclusión
