#include <cstdio>

// Declaración de funciones
void Menu();
int Ejercicio1(int n);
int Cirunferencia(int radio);
int GradosFahrenheit();
void Trapecio();
int VolumenEsfera(int radio);
void AreaCilindro(int radio, int altura);
int ValorBilletes(int mil, int dosmil, int cincomil, int diezmil, int veintemil, int cincuentamil);

// Función principal
int main() {
    Menu();
    return 0;
}

// Menu 
void Menu()
{   
    int opcion;
    printf("Bienvenido al taller 3\n");
    printf("1. Ejercicio 1\n");
    printf("2. Ejercicio 2, circunferencia de un circulo\n");
    printf("3. Ejercicio 3, grados Fahrenheit\n");
    printf("4. Ejercicio 4, area de un trapecio\n");
    printf("5. Ejercicio 5, volumen de una esfera\n");
    printf("6. Ejercicio 6, area de un cilindro\n");
    printf("7. Ejercicio 7, valor de billetes\n");
    printf("Ingrese la opción:(1-7) ");
    scanf("%d", &opcion);

    switch (opcion)
    {
    case 1:
    {
        int n;
        printf("Ingrese el valor de n: ");
        scanf("%d", &n);
        int resultado = Ejercicio1(n);
        printf("El resultado es: %d\n", resultado);
        break;
    }
    case 2:
    {
        int radio;
        printf("Ingrese el valor del radio: ");
        scanf("%d", &radio);
        int resultado2 = Cirunferencia(radio);
        printf("El resultado es: %d\n", resultado2);
        break;
    }
    case 3:
    {
        int resultado3 = GradosFahrenheit();
        printf("El resultado es: %d\n", resultado3);
        break;
    }
    case 4:
        Trapecio();
        break;
    case 5:
    {
        int radio2;
        printf("Ingrese el valor del radio: ");
        scanf("%d", &radio2);
        int resultado4 = VolumenEsfera(radio2);
        printf("El resultado es: %d\n", resultado4);
        break;
    }
    case 6:
    {
        int radio3, altura;
        printf("Ingrese el valor del radio: ");
        scanf("%d", &radio3);
        printf("Ingrese el valor de la altura: ");
        scanf("%d", &altura);
        AreaCilindro(radio3, altura);
        break;
    }
    case 7:
    {
        int mil, dosmil, cincomil, diezmil, veintemil, cincuentamil;
        printf("Ingrese el valor de billetes de 1000: ");
        scanf("%d", &mil);
        printf("Ingrese el valor de billetes de 2000: ");
        scanf("%d", &dosmil);
        printf("Ingrese el valor de billetes de 5000: ");
        scanf("%d", &cincomil);
        printf("Ingrese el valor de billetes de 10000: ");
        scanf("%d", &diezmil);
        printf("Ingrese el valor de billetes de 20000: ");
        scanf("%d", &veintemil);
        printf("Ingrese el valor de billetes de 50000: ");
        scanf("%d", &cincuentamil);
        int resultado5 = ValorBilletes(mil, dosmil, cincomil, diezmil, veintemil, cincuentamil);
        printf("El resultado es: %d\n", resultado5);
        break;
    }
    default:
        printf("Opción no válida\n");
        break;
    }
}

// Funciones del taller
int Ejercicio1(int n)
{
    return n * n + 10;
}

int Cirunferencia(int radio)
{
    return 2 * 3.1416 * radio;
}

int GradosFahrenheit()
{
    int celsius;
    printf("Ingrese el valor de la temperatura en grados Celsius: ");
    scanf("%d", &celsius);
    return (celsius * 9/5) + 32;
}

void Trapecio()
{
    int baseMayor, baseMenor, altura;
    printf("Ingrese el valor de la base mayor: ");
    scanf("%d", &baseMayor);
    printf("Ingrese el valor de la base menor: ");
    scanf("%d", &baseMenor);
    printf("Ingrese el valor de la altura: ");
    scanf("%d", &altura);
    int area = (baseMayor + baseMenor) * altura / 2;
    printf("El area del trapecio es: %d\n", area);
}

int VolumenEsfera(int radio)
{
    return 4/3 * 3.1416 * radio * radio * radio;
}

void AreaCilindro(int radio, int altura)
{
    int area = 2 * 3.1416 * radio * (radio + altura);
    printf("El area del cilindro es: %d\n", area);
}

int ValorBilletes(int mil, int dosmil, int cincomil, int diezmil, int veintemil, int cincuentamil)
{
    return mil * 1000 + dosmil * 2000 + cincomil * 5000 + diezmil * 10000 + veintemil * 20000 + cincuentamil * 50000;
}
