#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Estudiantes
{
    char Cod[6];
    char Nombre[20];
    float Nota1, Nota2, Nota3;
};
void adiccionar(Estudiantes Est[], int n);
void buscar (char Codigo[], Estudiantes E [], int n);

int main()
{
    
    int n;
    char Cod[6];
    printf("Cantidad de estudiantes: ");
    scanf("%d", &n); 
    Estudiantes Est[n];
    setlocale(LC_ALL, "spanish");
    adiccionar(Est, n);
    printf("Ingrese el codigo del estudiante a buscar: ");
    scanf("%s", Cod);
    buscar(Cod, Est, n);
    
}

void adiccionar(Estudiantes Est[], int n){
    float promedio;
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el codigo del estudiante: ");
        scanf("%s", Est[i].Cod); 
        printf("Ingrese el nombre del estudiante: ");
        scanf("%s", Est[i].Nombre); 
        printf("Ingrese la nota 1: ");
        scanf("%f", &Est[i].Nota1);
        printf("Ingrese la nota 2: ");
        scanf("%f", &Est[i].Nota2);
        printf("Ingrese la nota 3: ");
        scanf("%f", &Est[i].Nota3);
        promedio=(Est[i].Nota1+Est[i].Nota2+Est[i].Nota3)/3;
        printf("El promedio es: %.2f\n----------------\n", promedio);
    }
}

void buscar (char Codigo[], Estudiantes E [], int n)
{
    float promedio;
    for (int i = 0; i < n; i++)
    {
        if (strcmp(Codigo, E[i].Cod)==0)
        {
            printf("datos del estudiante\n");
            printf("Codigo: %s\n", E[i].Cod);
            printf("Nombre: %s\n", E[i].Nombre);
            printf("Nota 1: %.2f\n", E[i].Nota1);
            printf("Nota 2: %.2f\n", E[i].Nota2);
            printf("Nota 3: %.2f\n", E[i].Nota3);
            promedio=(E[i].Nota1+E[i].Nota2+E[i].Nota3)/3;
            printf("El promedio es: %.2f\n----------------\n", promedio);
            break;
        }
        printf("El codigo no existe\n");
    }
}