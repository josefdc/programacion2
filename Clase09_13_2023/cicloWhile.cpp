// Llamar librerias
#include <cstdio>


void Tabla (int n)
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }
}

int main()
{
    int n;
    printf("Digite el numero de la tabla que desea imprimir\n");
    scanf("%d", &n);
    Tabla(n);
    return 0;
}

//----------------------------------------------
// Ahora con do-while
// #include <cstdio>


void Tabla (int n)
{
    int i = 1;
    do
    {
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }while(i <= 10);
}

int main()
{
    int n;
    printf("Digite el numero de la tabla que desea imprimir\n");
    scanf("%d", &n);
    Tabla(n);
    return 0;
}
//----------------------------------------------
// ahora con ciclo for
void Tabla (int n)
{
    int m;
    for (int = 1; i <= 10; i++) // primero se inicializa el contador, luego se define la condicion y luego se incrementa
    {
        m = n * i;
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main()
{
    int n;
    printf("Digite el numero de la tabla que desea imprimir\n");
    scanf("%d", &n);
    Tabla(n);
    return 0;
}