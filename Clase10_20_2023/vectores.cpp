#include <stdio.h>
#include <locale.h>


void leerVector (int 1);
void MostrarVector (int v1[], int n);
void Suma(int v1[], int v2[], int n);

main()
{
    int c ;
    printf("Ingrese por favor la cantidad de datos que tiene el vector:");
    scanf
    leerVector(c);
    int v1[] = {8,12,4,6,10,2,14,0,16,18};
    int v2[] = {6,7,2,4,8,1,9,0,11,13}; 
    Suma(v1,v2,c);
    system("pause");
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