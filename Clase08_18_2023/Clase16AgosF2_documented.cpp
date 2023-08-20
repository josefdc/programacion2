
/**
 * @file Clase16AgosF2_completed.cpp
 * @brief Programa para realizar diversos cálculos matemáticos y mostrar un menú de opciones al usuario.
 * @author Usuario
 * @date 2023-08-19
 */
#include <stdio.h>
// Importa las funciones estándar de entrada/salida
#include <math.h>
// Importa funciones matemáticas

// Constantes
#define PI 3.1416
// Define una constante para el valor de PI

// Declaración de funciones
// 3) Función para convertir grados Celsius a Fahrenheit sin parámetros

/**
 * @brief Convierte una temperatura dada en grados Celsius a grados Fahrenheit.
 * @return Valor resultante del cálculo.
 */
float convertirAFahrenheit();
// Declara función para convertir grados Celsius a Fahrenheit
// Función para convertir grados Celsius a Fahrenheit
// 2) Función para calcular la longitud de la circunferencia

/**
 * @brief Calcula la longitud de una circunferencia dado su radio.
 * @param radio float utilizado para calcula la longitud de una circunferencia dado su radio.
 * @return Valor resultante del cálculo.
 */
float calcularLongitudCircunferencia(float radio);
// Declara función para calcular el área de un círculo
// Función para calcular el área de un círculo
float obtenerPromedioEstudiante();
// Declara función para obtener el promedio de un estudiante
// Función para obtener el promedio de un estudiante

/**
 * @brief Calcula y muestra el resultado de n^2 + 10 para un n dado.
 * @param n int utilizado para calcula y muestra el resultado de n^2 + 10 para un n dado.
 * @return Valor resultante del cálculo.
 */
int calcularExpresion(int n);
// Declara función para calcular una expresión matemática
// Función para calcular una expresión matemática

/**
 * @brief Solicita al usuario las dimensiones y calcula el área de un trapecio.
 */
void calcularAreaTrapecio();
// Declara función para calcular el área de un trapecio
// Función para calcular el área de un trapecio
void calcularAreaEsfera(float radio);
// Declara función para calcular el área de una esfera
// Función para calcular el área de una esfera

/**
 * @brief Calcula y muestra el área de la superficie de un cilindro dado su radio y altura.
 * @param radio float utilizado para calcula y muestra el área de la superficie de un cilindro dado su radio y altura.
 * @param altura float utilizado para calcula y muestra el área de la superficie de un cilindro dado su radio y altura.
 */
void calcularAreaCilindro(float radio, float altura);
// Declara función para calcular el área de un cilindro
// Función para calcular el área de un cilindro
void calcularValorBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000);
// Declara función para calcular el valor total de billetes
// Función para calcular el valor total de billetes

/**
 * @brief Muestra un menú de opciones al usuario.
 */
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
// El operador '&' obtiene la dirección de memoria de 'opcion'. Esto permite que 'scanf' modifique el valor de 'opcion' directamente.
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
// '%.2f' es una cadena de formato que indica que se imprimirá un número flotante con 2 decimales.
    }
    else if (opcion == 2) 
// Si el usuario selecciona otra opción...
// Si el usuario selecciona una opción no válida...
    {
        printf("Introduce el radio del circulo: ");
        scanf("%f", &radio);
        printf("El area del circulo es: %.2f \n", calcularAreaCirculo(radio));
// '%.2f' es una cadena de formato que indica que se imprimirá un número flotante con 2 decimales.
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

// 3) Función para convertir grados Celsius a Fahrenheit sin parámetros
float convertirAFahrenheit()
// Función para convertir grados Celsius a Fahrenheit
{
    float gradosCelsius;
printf("Ingrese la temperatura en grados Celsius: ");
scanf("%f", &gradosCelsius);
return (gradosCelsius * 9.0/5.0) + 32;
// Fórmula para convertir Fahrenheit a Celsius
}

// 2) Función para calcular la longitud de la circunferencia
float calcularLongitudCircunferencia(float radio)
// Función para calcular el área de un círculo
{
    return 2 * PI * radio;
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
// '%.2f' es una cadena de formato que indica que se imprimirá un número flotante con 2 decimales.
}

void calcularAreaEsfera(float radio)
// Función para calcular el área de una esfera
{
    float area = 4 * PI * pow(radio, 2);
    printf("El area de la esfera es: %.2f \n", area);
// '%.2f' es una cadena de formato que indica que se imprimirá un número flotante con 2 decimales.
}

void calcularAreaCilindro(float radio, float altura)
// Función para calcular el área de un cilindro
{
    float area = 2 * PI * radio * (radio + altura);
    printf("El area del cilindro es: %.2f \n", area);
// '%.2f' es una cadena de formato que indica que se imprimirá un número flotante con 2 decimales.
}

void calcularValorBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000)
// Función para calcular el valor total de billetes
{
    int total = (b1000 * 1000) + (b2000 * 2000) + (b5000 * 5000) + (b10000 * 10000) + (b20000 * 20000) + (b50000 * 50000);
    printf("El valor total de los billetes es: %d \n", total);
}

// 1) Función para calcular n^2 + 10
void calcularExpresion(int n) {
    int resultado = n * n + 10;
    printf("El resultado de n^2 + 10 para n = %d es: %d\n", n, resultado);
}

// 5) Función para calcular el volumen de una esfera

/**
 * @brief Calcula y devuelve el volumen de una esfera dado su radio.
 * @param radio float utilizado para calcula y devuelve el volumen de una esfera dado su radio.
 * @return Valor resultante del cálculo.
 */
float calcularVolumenEsfera(float radio) {
    return (4.0/3.0) * PI * pow(radio, 3);
}

// 7) Función para calcular el valor total del conjunto de billetes

/**
 * @brief Calcula y devuelve el valor total de un conjunto de billetes dados.
 * @param b1000 int utilizado para calcula y devuelve el valor total de un conjunto de billetes dados.
 * @param b2000 int utilizado para calcula y devuelve el valor total de un conjunto de billetes dados.
 * @param b5000 int utilizado para calcula y devuelve el valor total de un conjunto de billetes dados.
 * @param b10000 int utilizado para calcula y devuelve el valor total de un conjunto de billetes dados.
 * @param b20000 int utilizado para calcula y devuelve el valor total de un conjunto de billetes dados.
 * @param b50000 int utilizado para calcula y devuelve el valor total de un conjunto de billetes dados.
 * @return Valor resultante del cálculo.
 */
int calcularTotalBilletes(int b1000, int b2000, int b5000, int b10000, int b20000, int b50000) {
    return b1000 * 1000 + b2000 * 2000 + b5000 * 5000 + b10000 * 10000 + b20000 * 20000 + b50000 * 50000;
}

// 8) Ejemplo de función 1

/**
 * @brief Ejemplo de función que suma dos números.
 * @param a float utilizado para ejemplo de función que suma dos números.
 * @param b float utilizado para ejemplo de función que suma dos números.
 * @return Valor resultante del cálculo.
 */
float ejemploFuncion1(float a, float b) {
    return a + b;
}

// 9) Ejemplo de función 2

/**
 * @brief Ejemplo de función que resta dos números.
 * @param a float utilizado para ejemplo de función que resta dos números.
 * @param b float utilizado para ejemplo de función que resta dos números.
 * @return Valor resultante del cálculo.
 */
float ejemploFuncion2(float a, float b) {
    return a - b;
}

// 10) Ejemplo de función 3

/**
 * @brief Ejemplo de función que multiplica dos números.
 * @param a float utilizado para ejemplo de función que multiplica dos números.
 * @param b float utilizado para ejemplo de función que multiplica dos números.
 * @return Valor resultante del cálculo.
 */
float ejemploFuncion3(float a, float b) {
    return a * b;
}
