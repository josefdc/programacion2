#include <cstdio>


// Declaración de funciones
void Menu();
int Ejercicio1(int n);
void signoZodiacal(int dia, int mes);
void Bisiesto(int anio);
void Menor3numeros(int numero1, int numero2, int numero3);
void Ordendescendente(int numero1,int numero2, int numero3);

//funcion principal 
int main() {
    Menu();
    return 0;
}

// Menu
void Menu()
{
    int opcion = 0;
    int resultado = 0;
    int dia = 0;
    int mes = 0;
    
    {
        printf("1. Ejercicio 1 Suma de dos digitos\n");
        printf("2. Ejercicio 2 Determinar signo Zodiacal\n");
        printf("3. Ejercicio 3 Determinar si un anio es bisiesto\n");
        printf("4. Ejercicio 4 Determinar el menor de 3 numeros\n");
        printf("5. Ejercicio 5, Ingrese 3 numeros y se imprimen de manera decendente\n");
        printf("11. Salir\n");
        printf("Ingrese una opcion: (1-10)\n");
        scanf("%d", &opcion);
        switch (opcion)
        {
        case 1 :
            int n;
            printf("Ingrese un numero: ");
            scanf("%d", &n);
            resultado = Ejercicio1(n);
            printf("El resultado es: %d\n", resultado);
            break;
        case 2 :
            printf("Ejercicio 2, Determinar el signo zodiacal \n");
            printf("Ingrese el dia de nacimiento: ");
            scanf("%d", &dia);
            printf("Ingrese el mes de nacimiento: ");
            scanf("%d", &mes);
            signoZodiacal(dia, mes);
            break;
        case 3 :
            printf("Ejercicio 3, Determinar si un anio es bisiesto \n");
            printf("Ingrese el anio: ");
            scanf("%d", &resultado);
            Bisiesto(resultado);
        case 4 :
            printf("Ejercicio 4, Determinar el menor de 3 numeros \n");
            int numero1, numero2, numero3;
            printf("Ingrese el primer numero: ");
            scanf("%d", &numero1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &numero2);
            printf("Ingrese el tercer numero: ");
            scanf("%d", &numero3);
            Menor3numeros(numero1, numero2, numero3);
            break;
        case 5 :
            printf("Ejercicio 5, Ingrese 3 numeros y se imprimen de manera decendente \n");
            printf("Ingrese el primer numero: ");
            scanf("%d", &numero1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &numero2);
            printf("Ingrese el tercer numero: ");
            scanf("%d", &numero3);
            Ordendescendente(numero1, numero2, numero3);
            break;
        default:
            printf("Opcion invalida\n");
            break;
        }

    } 
}


// funciones del taller 3

/*
Leer un n ́umero de dos digitos y si termina en 1 mostrar en pantalla la
suma de ambos, si termina en 2 mostrar el producto, si termina en 3
mostrar la resta del primero menos el segundo, si termina en 4 mostrar
la resta del segundo menos el primero y si es mayor que 4 simplemente
ambos d ́ıgitos.
*/
int Ejercicio1(int n)
{
    int resultado;
    int digito1 = n / 10;
    int digito2 = n % 10;
    if (digito2 == 1)
    {
        resultado = digito1 + digito2;
    }
    else if (digito2 == 2)
    {
        resultado = digito1 * digito2;
    }
    else if (digito2 == 3)
    {
        resultado = digito1 - digito2;
    }
    else if (digito2 == 4)
    {
        resultado = digito2 - digito1;
    }
    else if (digito2 > 4)
    {
        resultado = digito1 + digito2;
    }
    return resultado;
}   

/*
Ingrese el dia y mes de nacimiento, indique a que signo zodiacal corre-
sponde
*/

void signoZodiacal(int dia, int mes)
{
    if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 19))
        printf("Aries\n");
    else if ((mes == 4 && dia >= 20) || (mes == 5 && dia <= 20))
        printf("Tauro\n");
    else if  ((mes == 5 && dia >= 21) || (mes == 6 && dia <= 20))
        printf("Geminis\n");
    else if  ((mes == 6 && dia >= 21) || (mes == 7 && dia <= 22))
        printf("Cancer\n");
    else if  ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 22))
        printf("Leo\n");
    else if  ((mes == 8 && dia >= 23) || (mes == 9 && dia <= 22))
        printf("Virgo\n");
    else if  ((mes == 9 && dia >= 23) || (mes == 10 && dia <= 22))
        printf("Libra\n");
    else if  ((mes == 10 && dia >= 23) || (mes == 11 && dia <= 21))
        printf("Escorpio\n");
    else if  ((mes == 11 && dia >= 22) || (mes == 12 && dia <= 21))
        printf("Sagitario\n");
    else if  ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 19))
        printf("Capricornio\n");
    else if  ((mes == 1 && dia >= 20) || (mes == 2 && dia <= 18))
        printf("Acuario\n");
    else if  ((mes == 2 && dia >= 19) || (mes == 3 && dia <= 20))
        printf("Piscis\n");
    else
        printf("Fecha invalida\n");
}
/*
Realice un procedimeinto para saber si un a ̃no le ́ıdo es bisiesto o no. Es
bisiesto si el a ̃no es divisible por 4 y el residuo es 0 y adem ́as que sea
m ́ultiplo de 100 y de 400 mayor de 1000.
*/
void Bisiesto(int anio)
{
    if (anio % 4 == 0 && anio % 100 == 0 && anio % 400 == 0 && anio > 1000)
        printf("Es bisiesto\n");
    else
        printf("No es bisiesto\n");
}

/*
Comparar 3 numeros entre s ́ı y determinar cu ́al es menor e imprimirlo.
*/

void Menor3numeros(int numero1, int numero2, int numero3)
{
    if (numero1 < numero2 && numero1 < numero3)
        printf("El numero %d es el menor\n", numero1);
    else if (numero2 < numero1 && numero2 < numero3)
        printf("El numero %d es el menor\n", numero2);
    else if (numero3 < numero1 && numero3 < numero2)
        printf("El numero %d es el menor\n", numero3);
    else
        printf("Los numeros son iguales\n");
}
/*
Leer tres n ́umeros e imprimirlos en orden descendente.
*/

void Ordendescendente(int numero1, int numero2, int numero3)
{
    int mayor, intermedio, menor;
    if (numero1 >= numero2 && numero1 >= numero3)
    {
        mayor = numero1;
        if (numero2 >= numero3)
        {
            intermedio = numero2;
            menor = numero3;
        }
        else
        {
            intermedio = numero3;
            menor = numero2;
        }
    }
    else if (numero2 >= numero1 && numero2 >= numero3)
    {
        mayor = numero2;
        if (numero1 >= numero3)
        {
            intermedio = numero1;
            menor = numero3;
        }
        else
        {
            intermedio = numero3;
            menor = numero1;
        }
    }
    else
    {
        mayor = numero3;
        if (numero1 >= numero2)
        {
            intermedio = numero1;
            menor = numero2;
        }
        else
        {
            intermedio = numero2;
            menor = numero1;
        }
    }
    printf("El orden es: %d, %d, %d\n", mayor, intermedio, menor);
}