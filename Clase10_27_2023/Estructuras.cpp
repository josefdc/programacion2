#include <stdio.h>
#include <locale.h>
/**
 * @brief una estructura es un tipo de dato que permite agrupar datos de distinto tipo.
 * 
 * 
 */
struct fecha
{
    int dia;
    int mes;
    int anio;
};

main()
{
    setlocale(LC_ALL, "spanish");
    fecha d;
    printf("Ingrese el dia: ");
    scanf("%d", &d.dia);
    printf("Ingrese el mes: ");
    scanf("%d", &d.mes);
    printf("Ingrese el año: ");
    scanf("%d", &d.anio);
    printf("La fecha ingresada es: %d/%d/%d\n", d.dia, d.mes, d.anio);
    return 0;
}