/*
Elaborar un algoritmo que capture tres numeros y que indique cual de estos es 
el mayor
*/

// Definimos Librerias
#include <iostream>
#include <stdlib.h>
using namespace std;
int a,b,c;
int main()
{
    cout<<"Ingrese el primer numero: ";
    cin>>a;
    cout<<"Ingrese el segundo numero: ";
    cin>>b;
    cout<<"Ingrese el tercer numero: ";
    cin>>c;
    if( a>= b)
    {
        if(a>=c)
        {
            cout<<"El numero mayor es: "<<a;
        }
        else
        {
            cout<<"El numero mayor es: "<<c;
        }
    }
    else
    {
        if(b>=c)
        {
            cout<<"El numero mayor es: "<<b;
        }
        else
        {
            cout<<"El numero mayor es: "<<c;
        }
    }