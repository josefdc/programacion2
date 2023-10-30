#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdbool.h>

struct Estudiantes {
    char Cod[6];
    char Nombre[50]; // Aumentado para aceptar nombres más largos
    float Nota1, Nota2, Nota3, Promedio;
};

void adicionar(Estudiantes Est[], int n);
void buscar(char Codigo[], Estudiantes E[], int n);
void Listar(Estudiantes Est[], int n);

int main() {
    int n;
    char Cod[6];
    setlocale(LC_ALL, "spanish");
    printf("Cantidad de estudiantes: ");
    scanf("%d", &n);
    getchar(); // Consumir el '\n' que queda en el búfer
    Estudiantes Est[n];
    adicionar(Est, n);
    printf("Ingrese el codigo del estudiante a buscar: ");
    fgets(Cod, sizeof(Cod), stdin);
    Cod[strcspn(Cod, "\n")] = 0; // Eliminar el '\n' al final
    //buscar(Cod, Est, n);
    Listar(Est, n);
}

void adicionar(Estudiantes Est[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Ingrese el codigo del estudiante: ");
        fgets(Est[i].Cod, sizeof(Est[i].Cod), stdin);
        Est[i].Cod[strcspn(Est[i].Cod, "\n")] = 0; // Eliminar el '\n' al final
        printf("Ingrese el nombre del estudiante: ");
        fgets(Est[i].Nombre, sizeof(Est[i].Nombre), stdin);
        Est[i].Nombre[strcspn(Est[i].Nombre, "\n")] = 0; // Eliminar el '\n' al final
        printf("Ingrese la nota 1: ");
        scanf("%f", &Est[i].Nota1);
        printf("Ingrese la nota 2: ");
        scanf("%f", &Est[i].Nota2);
        printf("Ingrese la nota 3: ");
        scanf("%f", &Est[i].Nota3);
        getchar(); // Consumir el '\n' que queda en el búfer
        Est[i].Promedio = (Est[i].Nota1 + Est[i].Nota2 + Est[i].Nota3) / 3;
        printf("El promedio es: %.2f\n----------------\n", Est[i].Promedio);
    }
}

void buscar(char Codigo[], Estudiantes E[], int n) {
    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(Codigo, E[i].Cod) == 0) {
            encontrado = true;
            printf("datos del estudiante\n");
            printf("Codigo: %s\n", E[i].Cod);
            printf("Nombre: %s\n", E[i].Nombre);
            printf("Nota 1: %.2f\n", E[i].Nota1);
            printf("Nota 2: %.2f\n", E[i].Nota2);
            printf("Nota 3: %.2f\n", E[i].Nota3);
            printf("El promedio es: %.2f\n----------------\n", E[i].Promedio);
            break;
        }
    }
    if (!encontrado) {
        printf("El codigo no existe\n");
    }
}
void Listar (Estudiantes Est[], int n){
    float promedio;
    printf("Cod\tNombre\tNota1\tNota2\tNota3\tPromedio\n");
    for (int i = 0; i < n; i++) {
        printf("%s\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n", Est[i].Cod, Est[i].Nombre, Est[i].Nota1, Est[i].Nota2, Est[i].Nota3, Est[i].Promedio);
    }
}