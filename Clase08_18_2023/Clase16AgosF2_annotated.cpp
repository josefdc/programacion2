#include <stdio.h>
// Importa las funciones estándar de entrada/salida
#include <math.h>
// Importa funciones matemáticas

// Constantes
#define PI 3.1416
// Define una constante para el valor de PI

// Declaración de funciones
float convertirAFahrenheit(float gradosCelsius);
// Declara función para convertir grados Celsius a Fahrenheit
// Función para convertir grados Celsius a Fahrenheit
float calcularAreaCirculo(float radio);
// Declara función para calcular el área de un círculo
// Función para calcular el área de un círculo
float obtenerPromedioEstudiante();
// Declara función para obtener el promedio de un estudiante
// Función para obtener el promedio de un estudiante
int calcularExpresion(int n);
// Declara función para calcular una expresión matemática
// Función para calcular una expresión matemática
void calcularAreaTrapecio();
// Declara función para calcular el área de un trapecio
// Función para calcular el área de un trapecio
void calcularAreaEsfera(float radio);
// Declara función para calcular el área de una esfera
// Función para calcular el área de una esfera
void calcularAreaCilindro(float radio, float altura);
// Declara función para calcular el área de un cilindro
// Función para calcular el área de un cilindro
void calcularValorBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000);
// Declara función para calcular el valor total de billetes
// Función para calcular el valor total de billetes
void mostrarMenu();
// Declara función para mostrar un menú al usuario
// Llama a la función para mostrar el menú
// Definición de la función que muestra el menú

int main()
// Función principal del programa
{
    mostrarMenu();
// Llama a la función para mostrar el menú
    return 0;
// Termina la ejecución del programa con estado 0
}

void mostrarMenu()
// Definición de la función que muestra el menú
{
    int opcion;
// Variable para almacenar la opción seleccionada por el usuario
    printf("Menu Principal: \n");
    printf("1. Convertir a Grados Celsius \n");
    printf("2. Calcular el Area de un circulo \n");
    printf("3. Obtener el promedio de un estudiante \n");
    printf("4. Calcular expresión n^2 + 10 \n");
    printf("5. Calcular el area de un trapecio \n");
    printf("6. Calcular el area de una esfera \n");
    printf("7. Calcular el area de la superficie de un cilindro \n");
    printf("8. Calcular el valor total de billetes \n");
    printf("9. Salir \n");
    printf("Seleccione una opcion (1-9)? ");
    scanf("%d", &opcion);  // El operador "&" obtiene la dirección de memoria de la variable. Es necesario para modificar directamente el valor de la variable.
// Lee la opción ingresada por el usuario

    // Variables para las diferentes opciones
    float grados, radio, altura;
    int n, b1000, b2000, b5000, b10000, b20000, b50000;

    if (opcion == 1) 
// Si el usuario selecciona la opción 1...
    {
        printf("Introduce la temperatura en grados Fahrenheit: ");
        scanf("%f", &grados);
        printf("La temperatura en grados Celsius es: %.2f \n", convertirAFahrenheit(grados));  // El operador "%" es usado para formatear la salida, en este caso "%.2f" imprime el número con 2 decimales.
    }
    else if (opcion == 2) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Introduce el radio del circulo: ");
        scanf("%f", &radio);
        printf("El area del circulo es: %.2f \n", calcularAreaCirculo(radio));
    }
    else if (opcion == 3) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("El promedio del estudiante es: %.2f \n", obtenerPromedioEstudiante());
    }
    else if (opcion == 4) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Introduce el valor de n: ");
        scanf("%d", &n);
        printf("El resultado de la expresión es: %d \n", calcularExpresion(n));
    }
    else if (opcion == 5) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        calcularAreaTrapecio();
    }
    else if (opcion == 6) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Introduce el radio de la esfera: ");
        scanf("%f", &radio);
        calcularAreaEsfera(radio);
    }
    else if (opcion == 7) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Introduce el radio del cilindro: ");
        scanf("%f", &radio);
        printf("Introduce la altura del cilindro: ");
        scanf("%f", &altura);
        calcularAreaCilindro(radio, altura);
    }
    else if (opcion == 8) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Introduce la cantidad de billetes de 1000: ");
        scanf("%d", &b1000);
        printf("Introduce la cantidad de billetes de 2000: ");
        scanf("%d", &b2000);
        printf("Introduce la cantidad de billetes de 5000: ");
        scanf("%d", &b5000);
        printf("Introduce la cantidad de billetes de 10000: ");
        scanf("%d", &b10000);
        printf("Introduce la cantidad de billetes de 20000: ");
        scanf("%d", &b20000);
        printf("Introduce la cantidad de billetes de 50000: ");
        scanf("%d", &b50000);
        calcularValorBilletes(b1000, b2000, b5000, b10000, b20000, b50000);
    }
    else if (opcion == 9) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Hasta luego! \n");
    }
    else 
// Si el usuario selecciona una opción no válida...
    {
        printf("Opción no válida. \n");
    }
}

float convertirAFahrenheit(float gradosCelsius)
// Función para convertir grados Celsius a Fahrenheit
{
    return (gradosCelsius - 32) * 0.55;
// Fórmula para convertir Fahrenheit a Celsius
}

float calcularAreaCirculo(float radio)
// Función para calcular el área de un círculo
{
    return PI * pow(radio, 2);
// Fórmula para calcular el área de un círculo
}

float obtenerPromedioEstudiante()
// Función para obtener el promedio de un estudiante
{
    char codigoEstudiante[6];
    char nombreEstudiante[10];
    float nota1, nota2, nota3;

    printf("Código del estudiante: ");
    scanf("%s", codigoEstudiante);
    printf("Nombre del estudiante: ");
    scanf("%s", nombreEstudiante);
    printf("Introduce la primera nota: ");
    scanf("%f", &nota1);
    printf("Introduce la segunda nota: ");
    scanf("%f", &nota2);
    printf("Introduce la tercera nota: ");
    scanf("%f", &nota3);

    return (nota1 + nota2 + nota3) / 3;
// Fórmula para calcular el promedio
}

int calcularExpresion(int n)
// Función para calcular una expresión matemática
{
    return pow(n, 2) + 10;
// Fórmula para calcular la expresión
}

void calcularAreaTrapecio()
// Función para calcular el área de un trapecio
{
    float baseMayor, baseMenor, altura, area;
    printf("Introduce la base mayor del trapecio: ");
    scanf("%f", &baseMayor);
    printf("Introduce la base menor del trapecio: ");
    scanf("%f", &baseMenor);
    printf("Introduce la altura del trapecio: ");
    scanf("%f", &altura);
    
    area = ((baseMayor + baseMenor) / 2) * altura;
// Fórmula para calcular el área de un trapecio
    printf("El area del trapecio es: %.2f \n", area);
}

void calcularAreaEsfera(float radio)
// Función para calcular el área de una esfera
{
    float area = 4 * PI * pow(radio, 2);
    printf("El area de la esfera es: %.2f \n", area);
}

void calcularAreaCilindro(float radio, float altura)
// Función para calcular el área de un cilindro
{
    float area = 2 * PI * radio * (radio + altura);
    printf("El area del cilindro es: %.2f \n", area);
}

void calcularValorBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000)
// Función para calcular el valor total de billetes
{
    int total = (b1000 * 1000) + (b2000 * 2000) + (b5000 * 5000) + (b10000 * 10000) + (b20000 * 20000) + (b50000 * 50000);
    printf("El valor total de los billetes es: %d \n", total);
}
