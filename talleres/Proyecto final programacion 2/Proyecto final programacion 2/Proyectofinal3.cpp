#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include "Libreria.h"
using namespace std;

// Estructura para almacenar la información de la cuenta
struct Cuenta {
    int numeroCuenta;
    int nip;
    double saldo;
};

// Variables globales
int n=5;
const int CAPACIDAD_BILLETES = 500;
int billetesDisponibles = CAPACIDAD_BILLETES;
Cuenta c[5];
char cadena[20];

// Declaración de funciones
void mostrarBienvenida();
void ejecutarATM();
int autenticarUsuario();
void mostrarMenuPrincipal(int numeroCuenta);
void realizarTransaccion(int opcion, int numeroCuenta);
void consultarSaldo(int numeroCuenta);
void realizarRetiro(int numeroCuenta);
void realizarDeposito(int numeroCuenta);
void leerarchivo();
void DibujarCajero();
void DibujarPantalla();

// Función principal
int main() 
{
    leerarchivo();
    mostrarBienvenida();
    ejecutarATM();
    return 0;
}

// Implementación de funciones
void mostrarBienvenida() 
{
    DibujarCajero();
}

void ejecutarATM() {
    while (true) {
        int numeroCuenta = autenticarUsuario();
        mostrarMenuPrincipal(numeroCuenta);
    }
}

int autenticarUsuario() 
{
    int numeroCuenta, nip;
    gotoxy(2,2);
    printf("Ingrese su numero de cuenta: ");
    scanf("%d", &numeroCuenta);
    gotoxy(2,4);
    printf("Ingrese su NIP: ");
    scanf("%d", &nip);
    for (int i=0;i<n;i++)
    {
        if (c[i].nip == nip) 
        {
            return numeroCuenta;
        }
    }
    system("cls");
    return numeroCuenta;
}

void mostrarMenuPrincipal(int numeroCuenta)
{
    system("cls"); 
  	CuadroR(0,0,61,25,135);
	CuadroR(25, 20, 32, 23, 240); 
  	for(int i = 0; i < 3; i++)
	{
    	for(int j = 0; j < 3; j++)
		{
      		gotoxy(25 + j*3, 20 + i);  
      		cout << i*3 + j + 1; 
    	}
  	}
    CuadroR(0,12,25,17,240);
    gotoxy(1,12);
    printf("Tome aqui el efectivo");
    color(7);
    LineaH(3,15,15);
    CuadroR(35,12,60,17,240);
    gotoxy(35,12);
    printf("Inserte aqui el deposito");
    color(7);
    LineaH(37,15,16);
    int opcion;
    gotoxy(2,0);
    printf("1. Consultar Saldo\n");
    gotoxy(2,2);
    printf("2. Retirar Efectivo\n");
    gotoxy(2,4);
    printf("3. Depositar Fondos\n");
    gotoxy(2,6);
    printf("4. Salir\n");
    gotoxy(2,8);
    printf("5. Ingrese una opcion: ");
    scanf("%d", &opcion);
    realizarTransaccion(opcion, numeroCuenta);
}

void realizarTransaccion(int opcion, int numeroCuenta)
{
    switch (opcion) 
    {
        case 1:
            DibujarPantalla();
            gotoxy(2,2);
            consultarSaldo(numeroCuenta);
            mostrarBienvenida();
            break;
        case 2:
            DibujarPantalla();
            gotoxy(2,2);
            realizarRetiro(numeroCuenta);
            mostrarBienvenida();
            break;
        case 3:
            DibujarPantalla();
            gotoxy(2,2);
            realizarDeposito(numeroCuenta);
            mostrarBienvenida();
            break;
        case 4:
            DibujarPantalla();
            gotoxy(2,2);
            printf("Gracias por usar el ATM\n");
            exit(0);
        default:
            DibujarPantalla();
            printf("Opcion no válida\n");
            mostrarBienvenida();
    }
}

void consultarSaldo(int numeroCuenta)
{
    for (int i=0;i<n;i++)
    {
        if (c[i].numeroCuenta == numeroCuenta)
        {
            printf("El saldo de su cuenta es: $%.2f\n", c[i].saldo);
            system("pause");
            system("cls");
            return;
        }
    }
    printf("Cuenta no encontrada.\n");
    system("pause");
    system("cls");
}

void realizarRetiro(int numeroCuenta)
{
    double monto;
    printf("Ingrese el monto a retirar: ");
    scanf("%lf", &monto);
    for (int i=0;i<n;i++)
    {
        if (c[i].numeroCuenta == numeroCuenta)
        {
            if (c[i].saldo >= monto && billetesDisponibles >= (monto / 20))
            {
                c[i].saldo -= monto;
                billetesDisponibles -= (monto / 20);
                printf("Retiro exitoso. Por favor tome su dinero.\n");
                system("pause");
                system("cls");
            } 
            else 
            {
                printf("Saldo insuficiente o billetes no disponibles.\n");
                system("pause");
                system("cls");
            }
            return;
        }
    }
    printf("Cuenta no encontrada.\n");
    system("pause");
    system("cls");
}
//---------------------------------------------------------------------------------------------------------
void realizarDeposito(int numeroCuenta) 
{
    double monto;
    printf("Ingrese el monto a depositar: ");
    scanf("%lf", &monto);
    for (int i=0;i<n;i++) 
    {
        if (c[i].numeroCuenta == numeroCuenta)
        {
            c[i].saldo += monto;
            printf("Deposito exitoso.\n");
            system("pause");
            system("cls");
            return;
        }
    }
    printf("Cuenta no encontrada.\n");
    system("pause");
    system("cls");
}
//---------------------------------------------------------------------------------------------------------
void leerarchivo()
{
	//ifstream permite trabajar el archivo en modo de lectura
	ifstream leer;
	//open permite abrir el archivo
	leer.open ("Cuentas.txt");
	//good indica si la operacion de abrir el archivo fue exitosa
	//bad indica produjo una operacion invalida
	//fail indica si se produjo un error
	if (leer.good())
	{
		cout<<"El archivo fue abierto correctamente..."<<endl;
        int i=0;
	    while(!leer.eof())
	    {
	        leer>>cadena;
	        c[i].numeroCuenta=stoll(cadena);
            leer>>cadena;
	        c[i].saldo=stoll(cadena);
	        i++;
        }
        //close permite cerrar el archivo
	    leer.close();
	}
	else
	{
		cout<<"El archivo no se pudo abrir..."<<endl;
		
	}
}
//---------------------------------------------------------------------------------------------------------
void DibujarCajero()
{
	system("cls"); 
  	CuadroR(0,0,61,25,135);
	CuadroR(25, 20, 32, 23, 240); 
  	for(int i = 0; i < 3; i++)
	{
    	for(int j = 0; j < 3; j++)
		{
      		gotoxy(25 + j*3, 20 + i);  
      		cout << i*3 + j + 1; 
    	}
  	}
    CuadroR(0,10,25,15,240);
    gotoxy(1,10);
    printf("Tome aqui el efectivo");
    color(7);
    LineaH(3,13,15);
    CuadroR(35,10,60,15,240);
    gotoxy(35,10);
    printf("Inserte aqui el deposito");
    color(7);
    LineaH(37,13,16);
    gotoxy(2,0);
    printf("Bienvenido!\n");
}
void DibujarPantalla()
{
    system("cls"); 
  	CuadroR(0,0,61,25,135);
	CuadroR(25, 20, 32, 23, 240); 
  	for(int i = 0; i < 3; i++)
	{
    	for(int j = 0; j < 3; j++)
		{
      		gotoxy(25 + j*3, 20 + i);  
      		cout << i*3 + j + 1; 
    	}
  	}
    CuadroR(0,12,25,17,240);
    gotoxy(1,12);
    printf("Tome aqui el efectivo");
    color(7);
    LineaH(3,15,15);
    CuadroR(35,12,60,17,240);
    gotoxy(35,12);
    printf("Inserte aqui el deposito");
    color(7);
    LineaH(37,15,16);
}