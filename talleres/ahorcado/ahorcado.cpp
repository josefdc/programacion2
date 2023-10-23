#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

char palabra [3][9] = { "Manzana","Pera","Naranja","Toronja","Fresa","Mango","Uva","Sandia","Mandarina",
                          "Cereza","Frambuesa","Banano","Melon","Papaya","Guanabana","Guayaba","limon",
                          "Maracuya","Ciruelas","Tomate","Granadilla"
                               
                      } 
 
 

 // funcion alearoria

int aleatorio(int n)
{
    char P1[15];
    int num , c ;
    srand (time(NULL));
    num = rand() % n-1;
    return (num);
}

// funcion main
int main()
{
    int d;
    char P1[15];
    d = aleatorio(15);
    printf()
    return 0;
}
