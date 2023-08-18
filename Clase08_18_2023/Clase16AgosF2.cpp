// Invoca las librerias
#include <stdio.h>
#include <math.h>


// Define las constantes
#define pi 3.1416

// Crear las variables globales


// Invoca las subrutinas
float GradosCenti (float GradosFahren);
float AreaCircun (float Radio);
void menu ();
float PromedioNota();
void MiExpresion (int n);
void AreaTrapecio();
void AreaEsfera(float radio);
void AreaCilindro(float radio, float altura);
void ValorBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000);
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
	float x,y,t,r,p,n,radio;
	printf("Menu Ppal... \n");
	printf("1. Convertir a Grados Celcius \n");
	printf("2. Calcular el Area de un circulo \n");
	printf("3. Promedio de un estudiante \n");
	printf("4. N^2 +10 \n");
	printf("5. Area de un trapecio \n");
	printf("6. Area de una esfera \n");
	printf("7. Area de la superficie de un cilindro \n");
	printf("8. Valor de billetes \n");
	printf("9. Salir \n");
	printf("Entre una opcion (1-9)? ");
	scanf("%d",&op);
	if (op==1)
	{
		printf("Entre la temperatura en grados Fahrenheint :");
		scanf("%f",&t);
		x= GradosCenti (t);
		printf("Su temperatura en grados Centigrados es : %.2f \n",x);
		menu();
	}
	else if (op==2)
	{
		printf("Entre el radio de la circunferencia:");
		scanf("%f",&r);
		y=AreaCircun (r);
		printf("El area del circulo es %f \n",y);
		menu();
	}
	else if (op==3)
	{
		
		p= PromedioNota();
		printf("El promedio es : %f \n",p);
		menu();
	}
	else if (op==4)
	{
		int n;
		printf("Entre el valor de n :");
		scanf("%d",&n);
		MiExpresion(n);
	}
	else if (op==5)
	{
		AreaTrapecio();
	}
	else if (op==6)
	{
		float radio;
		printf("Entre el radio de la esfera :");
		scanf("%f",&radio);
		AreaEsfera(radio);
	}
	else if (op == 7)
	{
		float radio, altura;
		printf("Entre el radio del cilindro :");
		scanf("%f",&radio);
		printf("Entre la altura del cilindro :");
		scanf("%f",&altura);
		AreaCilindro(radio,altura);
	}
	else if (op == 8)
	{
		int b1000, b2000, b5000, b10000, b20000, b50000;
		printf("Entre la cantidad de billetes de 1000 :");
		scanf("%d",&b1000);
		printf("Entre la cantidad de billetes de 2000 :");
		scanf("%d",&b2000);
		printf("Entre la cantidad de billetes de 5000 :");
		scanf("%d",&b5000);
		printf("Entre la cantidad de billetes de 10000 :");
		scanf("%d",&b10000);
		printf("Entre la cantidad de billetes de 20000 :");
		scanf("%d",&b20000);
		printf("Entre la cantidad de billetes de 50000 :");
		scanf("%d",&b50000);
		ValorBilletes(b1000, b2000, b5000, b10000, b20000, b50000);
	}
	else
	{
		printf("Adios \n");
	}
}
//------------------------------------
float PromedioNota()
{
	char CodiEstu [6];
	char NombEstu [10];
	float N1, N2, N3;	
	printf("Codigo : ");
	scanf ("%s",&CodiEstu);
	printf("Nombre : ");
	scanf ("%s",&NombEstu);
	printf("Nota 1 : ");
	scanf ("%f",&N1);
	printf("Nota 2 : ");
	scanf ("%f",&N2);
	printf("Nota 3 : ");
	scanf ("%f",&N3);
	return ((N1+N2+N3)/3);
}

//1) Devolver el valor de la expresión al resolver la expresión n2 + 10, para cualquier valor de n entero.    (procedimiento con parámetros)

void MiExpresion (int n)
{
	int resultado;
	resultado = pow(n,2) + 10;
	printf("El resultado es : %d^2 + 10 = %d \n",n,resultado);
}

// Calcular el area de un trapecio Isoceles(todos no parales los lados son iguales). (Procedimiento sin parametros)

void AreaTrapecio()
{
	float B,b,h,area;
	printf ("Entre la base mayor :");
	scanf ("%f",&B);
	printf ("Entre la base menor :");
	scanf ("%f",&b);
	printf ("Entre la altura :");
	scanf ("%f",&h);
	area = ((B+b)/2)*h;
	printf ("El area del trapecio es : %f \n",area);
}

//  Calcular el volumen de una esfera. (función con parámetros)

void AreaEsfera(float radio)
{
	float area;
	area = 4*pi*pow(radio,2);
	printf ("El area de la esfera es : %f \n",area);
}
// Calcular el area de la superficie de un cilindro (con parametros)

void AreaCilindro(float radio, float altura)
{
	float area;
	area = 2*pi*radio*(radio+altura);
	printf ("El area del cilindro es : %f \n",area);

}

/*
Dadas cantidades de billetes recibidas en denominaciones de $1.000, $2.000, $5.000, $10.000, $20.000, $50.000 obtener como 
resultado el valor de del conjunto de todos los billetes.
 (funcion con parametros)

*/

void ValorBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000)
{
	int total;
	total = (b1000*1000)+(b2000*2000)+(b5000*5000)+(b10000*10000)+(b20000*20000)+(b50000*50000);
	printf ("El valor total de los billetes es : %d \n",total);
}
