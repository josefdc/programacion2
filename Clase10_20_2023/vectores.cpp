#include <stdio.h>
#include <locale.h>

#define MAX_FIL 100  // Tamaño máximo para filas
#define MAX_COL 100  // Tamaño máximo para columnas

void LeerVector(int v1[], int n);
void MostrarVector(int v1[], int n);
void Suma(int v1[], int v2[], int n);
void MostrarMatriz(int m[MAX_FIL][MAX_COL], int Fil, int Col);

int main()
{
    int Fil, Col;

    printf("Ingrese el número de filas (máximo %d): ", MAX_FIL);
    scanf("%d", &Fil);
    printf("Ingrese el número de columnas (máximo %d): ", MAX_COL);
    scanf("%d", &Col);

    int matriz[MAX_FIL][MAX_COL];

    // Llenar la matriz con datos de ejemplo (puedes adaptar para leer del usuario)
    for(int i = 0; i < Fil; i++) {
        for(int j = 0; j < Col; j++) {
            matriz[i][j] = i + j;
        }
    }

    MostrarMatriz(matriz, Fil, Col);

    return 0;
}

//-----------------------------------------------------
void LeerVector(int v1[], int n)
{
    int MiVector[10];
    for(int i=0; i<n; i++)
    {
        printf("Ingrese el valor de la posicion %d:", i);
        scanf("%d", &MiVector[i]);
    }
    printf("---------\n DAtos del vector\n");
    MostrarVector(MiVector, n);
}

//-----------------------------------------------------
void MostrarVector(int v1[], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("posicion [%d] = %d\n", i, v1[i]);
    }
}

//-----------------------------------------------------
void suma(int v1[], int v2[], int n)
{
    int v3[10];
    for(int i=0; i<n; i++)
    {
        v3[i] = v1[i] + v2[i];
    }
    printf("---------\n DAtos del vector\n");
    MostrarVector(v3, n);
}

//-----------------------------------------------------
void MostrarMatriz(int m[MAX_FIL][MAX_COL], int Fil, int Col)
{
    for (int f=0; f<Fil; f++)
    {
        for (int c=0; c<Col; c++)
        {
            printf(" [%d] ", m[f][c]);
        }
        printf("\n");
    }
}
