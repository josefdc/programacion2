// Invoca las librerias
#include <iostream>
#include <math.h>
using namespace std;

// Define las constantes
#define pi 3.1416

// Crear las variables globales


// Invoca las subrutinas
float GradosCenti (float GradosFahren);
float AreaCircun (float Radio);
void menu ();
float PromedioNota();
// El programa principal
main()
{
	menu();
}

// Crea las subrutinas
//-------------------------------------------

float GradosCenti (float GradosFahren)
{
	return (GradosFahren -32)*0.55;
}
//-----------------------------------------------

float AreaCircun (float Radio)
{
	return (pi * pow(Radio,2));
}
//----------------------------------------------
void menu ()
{
	int op;
	float x,y,t,r,p;
	cout<<"Menu Ppal..."<<endl;
	cout<<"1. Convertir a Grados Celcius"<<endl;
	cout<<"2. Calcular el Area de un circulo"<<endl;
	cout<<"3. Promedio de un estudiante"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Entre una opcion (1-4)?  ";
	cin>>op;
	if (op==1)
	{
		cout<<"Entre la temperatura en grados Fahrenheint :";
		cin>>t;
		x= GradosCenti (t);
		cout<<"Su temperatura en grados Centigrados es :"<<x<<endl;
		menu();
	}
	else if (op==2)
	{
		cout<<"Entre el radio de la circunferencia:";
		cin>>r;
		y=AreaCircun (r);
		cout<<"El area del circulo es "<<y<<endl;
		menu();
	}
	else if (op==3)
	{
		
		p= PromedioNota();
		cout<<"El promedio es : "<<p<<endl;
		menu();
	}
}
//------------------------------------
float PromedioNota()
{
	char CodiEstu [6];
	char NombEstu [10];
	float N1, N2, N3;	
	cout<<"Codigo : ";
	cin>>CodiEstu;
	cout<<"Nombre : ";
	cin>>NombEstu;
	cout<<"Nota 1 : ";
	cin>>N1;
	cout<<"Nota 2 : ";
	cin>>N2;
	cout<<"Nota 3 : ";
	cin>>N3;
	return ((N1+N2+N3)/3);
}

