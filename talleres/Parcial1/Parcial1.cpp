/*
Nombre: Jose Felipe Duarte Coronado
Codigo: 1003661694
Fecha: 9/11/2023
*/

// Incluimos librerias que vamos a usar
#include <cstdio> // no necesitamos declarar #include <stdio.h> porque ya esta incluido en la libreria <cstdio>
#include <math.h> 
// Declaramos las funciones
void menu();    
int primo(int n, int i);
int cantidad_digitos(int n);
int invertir_digitos(int n);

//Definimos la funcion principal

int main()
{
    menu();
    return 0;
}   

// Definicion de funciones

// Menu de manera recursiva
void menu()
{
    int opcion;
    int numero;
    printf("Menu Principal\n");
    printf("1. Funcion que determina de manera recursiva si un numero es primo o no\n");
    printf("2. Funcion que determina de manera recursiva la cantidad de digitos de un numero entero\n");
    printf("3. Funcion que Valida si un numero entero tiene cuatro digitos y retorna el valor con los digitos invertidos\n");
    printf("4. Salir\n");
    printf("Seleccione una opcion entre (1-4)\n");
    scanf("%d", &opcion);
    switch (opcion)
    {
    case 1:
        int n, i;
        printf("Digite un numero entero\n");
        scanf("%d", &n);
        i = n / 2; // Dividimos el numero entre 2 para optimizar el algoritmo
        if (primo(n, i) == 1)
        {
            printf("El numero %d es primo\n", n);
        }
        else
        {
            printf("El numero %d no es primo\n", n);
        }
        break;
    case 2:
        printf("Ingrese un numero entero\n");
        scanf("%d", &n);
        printf("El numero %d tiene %d digitos\n", n, cantidad_digitos(n));
        break;
    case 3:
        printf("Digite el numero que desea invertir\n");
        scanf("%d", &numero);
        if (numero < 1000 || numero > 9999)
        {
            printf("El numero no tiene 4 digitos\n");
        }
        else
        {
            printf("El numero invertido es: %d\n", invertir_digitos(numero));
        }
        break;
    case 4:
        printf("Salir\n");
        break;
    default:
        printf("Opcion no valida\n");
        break;
    }
    if (opcion != 4)
    {
        printf("\n");
        printf("-------------------------------------------------------------------------------\n");
        menu(); // Llamado recursivo
    }
}

// Funcion que determina de manera recursiva si un numero es primo o no
int primo(int n, int i)
{
    if (i == 1) // Caso base
    {
        return 1;  // Si llegamos a i=1, significa que n no fue divisible por ningún número entre 2 y n-1. Por lo tanto, es primo.
    }
    else
    {
        if (n % i == 0) // Caso recursivo
        {
            return 0;  // Si n es divisible por i, entonces no es primo.
        }
        else
        {
            return primo(n, i - 1); // Llamado recursivo: verifica si n es divisible por el siguiente número menor a i.
        }
    }
}


// Funcion que determina de manera recursiva la cantidad de digitos de un número entero
int cantidad_digitos(int n)
{
    if (n < 10) // Caso base
    {
        return 1;  // Si el número es menor que 10, significa que solo tiene un dígito.
    }
    else // Caso recursivo
    {
        return 1 + cantidad_digitos(n / 10); // Añade 1 al contador y quita el último dígito del número.
    }
}


/*
Escriba una función que tome un valor entero de cuatro dígitos (Debe validar que el número es de 4 dígitos) y retorne el número con los dígitos invertidos. 
*/

int invertir_digitos(int n)
{
    if (n < 10) // Caso base
    {
        return n; // Si el número tiene solo un dígito, simplemente se devuelve ese número.
    }
    
    else
    {
        int ultimo_digito = n % 10;  // Obtiene el último dígito del número. Ejemplo: 1234 % 10 = 4
        int resto = n / 10; // Obtiene el número sin su último dígito. Ejemplo: 1234 / 10 = 123
        
        int numero_invertido = invertir_digitos(resto); // Llamado recursivo para invertir los dígitos del número sin el último dígito.
        int cantidad_digitos_invertidos = cantidad_digitos(numero_invertido); // Determina la cantidad de dígitos del número invertido hasta ahora.
        
        int factor = pow(10, cantidad_digitos_invertidos); // Calcula un factor multiplicativo para el último dígito. Si el número invertido tiene 2 dígitos, el factor será 100.
        
        return ultimo_digito * factor + numero_invertido; // Coloca el último dígito al principio y suma el número invertido hasta ahora.
    }
}



