#include <cstdio>


// Declaración de funciones
void Menu();
int Ejercicio1(int n);
void signoZodiacal(int dia, int mes);
void Bisiesto(int anio);
void Menor3numeros(int numero1, int numero2, int numero3);
void Ordendescendente(int numero1,int numero2, int numero3);
void Medio(int numero1, int numero2, int numero3);
void Maraton(int sexo, int edad, int tiempo);
void Comision();
void Salario();
void PrecioLibros();

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
        printf("6. Ejercicio 6, Ingrese 3 numeros y se imprime el numero del medio\n");
        printf("7. Ejercicio 7, Seleccionar un atleta para una maraton internacional\n");   
        printf("8. Ejecicio 8, Calcular la comision de un vendedor\n");
        printf("9. Ejercicio 9, Calcular el salario neto de un empleado\n");
        printf("10. Ejercicio 10, Calcular el precio de un libro\n");
        printf("11. Salir\n");
        printf("Ingrese una opcion: (1-11)\n");
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
        case 6 :
            printf("Ejercicio 6, Ingrese 3 numeros y se imprime el numero del medio \n");
            printf("Ingrese el primer numero: ");
            scanf("%d", &numero1);
            printf("Ingrese el segundo numero: ");
            scanf("%d", &numero2);
            printf("Ingrese el tercer numero: ");
            scanf("%d", &numero3);
            Medio(numero1, numero2, numero3);
            break;
        case 7 :
            int sexo, edad, tiempo;
            printf("Ingrese el sexo (1: hombre, 2: mujer): ");
            scanf("%d", &sexo);
            printf("Ingrese la edad: ");
            scanf("%d", &edad);
            printf("Ingrese el tiempo: ");
            scanf("%d", &tiempo);
            Maraton(sexo, edad, tiempo);
            break;
        case 8 :
            Comision();
            break; 
        case 9 :
            Salario();
            break;
        case 10 :
            PrecioLibros();
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

/*
Realice un algoritmo que identifique e imprima el n ́umero medio de un
conjunto de tres n ́umeros  ́unicos. El n ́umero medio es aquel que no es el
menor ni el mayor.
*/

void Medio(int numero1, int numero2, int numero3)
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
    printf("El numero de medio es %d\n", intermedio);
}

/*
Se desea seleccionar un atleta para una maraton internacional, para se-
leccionarlo este debe haber terminado el maraton anterior, en un tiempo
determinado. Los tiempos son 150 minutos para hombres menores de 40
anios; 175 minutos para hombres con una edad mayor o igual a 40 a ̃nos y
180 minutos para mujeres. Los datos a introducir (leer) son: Sexo, Edad
y tiempo efectuado en su marat ́on anterior
*/
void Maraton(int sexo, int edad, int tiempo)
{
    if (sexo == 1 && edad < 40 && tiempo <= 150)
        printf("Seleccionado\n");
    else if (sexo == 1 && edad >= 40 && tiempo <= 175)
        printf("Seleccionado\n");
    else if (sexo == 2 && tiempo <= 180)
        printf("Seleccionado\n");
    else
        printf("No seleccionado\n");
}

/*
Se tiene el nombre, c ́odigo del producto, el total de las ventas de un
vendedor. Calcule su comisi ́on teniendo en cuenta que si el producto es
de: Codigo 1 esta es del 5%, Codigo 2 esta es del 8%, Codigo 3 esta es del
3%. Imprima el nombre y la comision.
*/

void Comision()
{
    char nombre[20];
    int codigo;
    float ventas;
    float comision;
    printf("Ingrese el nombre del vendedor: ");
    scanf("%s", nombre);
    printf("Ingrese el codigo del producto: ");
    scanf("%d", &codigo);
    printf("Ingrese el total de ventas: ");
    scanf("%f", &ventas);
    if (codigo == 1)
        comision = ventas * 0.05;
    else if (codigo == 2)
        comision = ventas * 0.08;
    else if (codigo == 3)
        comision = ventas * 0.03;
    else
        printf("Codigo invalido\n");
    printf("El vendedor %s tiene una comision de %f\n", nombre, comision);
}

/*

En un registro se encuentra el Nro. de horas trabajadas, salario b ́asico
hora de un empleado. Si su SB >100.000 hacerle un descuento por ISS de
2%. Si el salario en bruto ≥90.000 y ≤100.000 descuento ISS de 1% Si el
salario en bruto es <90.000 tiene una bonificaci ́on 4%. Se desea calcular
el salario neto de este empleado y cu ́al fue el valor de sus deducciones y
bonificaciones si las tiene

*/

void Salario()
{
    int horas;
    float salario;
    float salario_bruto;
    float salario_neto;
    float descuento;
    float bonificacion;
    printf("Ingrese el numero de horas trabajadas: ");
    scanf("%d", &horas);
    printf("Ingrese el salario basico por hora: ");
    scanf("%f", &salario);
    salario_bruto = horas * salario;
    if (salario_bruto > 100000)
        descuento = salario_bruto * 0.02;
    else if (salario_bruto >= 90000 && salario_bruto <= 100000)
        descuento = salario_bruto * 0.01;
    else
        bonificacion = salario_bruto * 0.04;
    salario_neto = salario_bruto - descuento + bonificacion;
    printf("El salario neto es %f\n", salario_neto);
    printf("El descuento es %f\n", descuento);
    printf("La bonificacion es %f\n", bonificacion);
}

/*
Una tienda de libros vende sus libros de acuerdo a las siguientes especi-
ficaciones: Precio base de $5000, si el numero de hojas es mas 100 y
menos de 200 $7 por cada hoja, entre 200 y 300 hojas $8 de recargo; $9 de
recargo por cada hoja si el n ́umero de hojas es mayor de 300. Realizar un
algoritmo que calcule el precio del libro y lo imprima con su nombre. Se
lee el nombre del libro y el n ́umero de p ́aginas. (la hoja tiene 2 p ́aginas).
1
*/

void PrecioLibros()
{
    char nombre[20];
    int hojas;
    float precio;
    printf("Ingrese el nombre del libro: ");
    scanf("%s", nombre);
    printf("Ingrese el numero de hojas: ");
    scanf("%d", &hojas);
    if (hojas < 100)
        precio = 5000;
    else if (hojas >= 100 && hojas < 200)
        precio = 5000 + (hojas * 7);
    else if (hojas >= 200 && hojas < 300)
        precio = 5000 + (hojas * 8);
    else if (hojas >= 300)
        precio = 5000 + (hojas * 9);
    printf("El precio del libro %s es %f\n", nombre, precio);
}
