
/**
 * @file parcial2.cpp
 * @brief Programa principal para gestionar comisiones, atletas y dibujar triángulos. (Parcial 2)
 * @author Jose Felipe Duarte Coronado
 * @date 13-10-2023
 * @version 1.0
 * @see https://github.com/josefdc/programacion2/tree/main/talleres/Parcial2
 */

// Invocamos las librerías necesarias
#include "presentacionDatos.h"  ///< Librería para presentación de datos.
#include <stdio.h>  ///< Para funciones de entrada/salida estándar.
#include <windows.h>  ///< Para funciones específicas de Windows.
#include <conio.h>  ///< Para la función getch().

// declaramos las funciones

int menu();
void calcularComisiones();
void seleccionarAtleta();
void dibujarTrianguloRectangulo();
//funcion principal
int main(){
    menu();
    return 0;
}

//funcion menu
/**
 * @brief Muestra un menú de opciones y ejecuta la función seleccionada.
 * 
 * El menú muestra las siguientes opciones:
 * 1. Calcular comisiones de los vendedores.
 * 2. Seleccionar atletas para una maratón.
 * 3. Dibujar un triángulo rectángulo con asteriscos.
 * 4. Salir.
 * 
 * @return 0 cuando el usuario selecciona la opción de salir.
 */
int menu(){
    int opcion;
    do {
        system("cls"); ///< Limpiar la pantalla
        gotoxy(0, 0);//< Mover el cursor a la posición (0, 0)
        
        
        ventana1(10, 2, 60, 15, 7, 8); ///< Dibujar una ventana en la consola
        
        gotoxy(20, 4); ///< Mover el cursor a la posición (20, 4)
        printf("Menu de opciones");
        
        gotoxy(15, 6);
        printf("1. Ejercicio 1, comisiones ");
        
        gotoxy(15, 7);
        printf("2. Seleccionar atleta para maraton");
        
        gotoxy(15, 8);
        printf("3. Triangulo rectangulo asteriscos");
        
        gotoxy(15, 9);
        printf("4. Salir");
        
        gotoxy(15, 11);
        printf("Ingrese la opcion que desea: ");
        scanf("%d", &opcion);
        
        switch (opcion) {
            case 1:
                calcularComisiones();
                break;
            case 2:
                seleccionarAtleta();
                break;
            case 3:
                dibujarTrianguloRectangulo();
                break;
        }
    } while(opcion != 4);
    
    return 0;
}


/**
 * @brief Calcula las comisiones de los vendedores.
 * 
 * @details Esta función solicita al usuario la cédula, el nombre y el valor de las ventas de cada vendedor.
 * Luego, calcula la comisión del vendedor basándose en el valor de sus ventas:
 * - Si el valor de las ventas es inferior a $100.000, la comisión es el 2.5% del valor de las ventas.
 * - Si el valor de las ventas está entre $100.000 y $500.000, la comisión es el 5.5% del valor de las ventas.
 * - Si el valor de las ventas es superior a $500.000, la comisión es el 7.5% del valor de las ventas.
 * 
 * La función continúa solicitando los datos de los vendedores hasta que el usuario decida no ingresar más vendedores.
 * Al final, la función muestra el valor total de las ventas y el valor total de las comisiones.
 */
void calcularComisiones(){
    char nombre[50];
    char cedula[20];
    float valorVentas, comision, totalVentas = 0, totalComisiones = 0;
    char seguir = 's';
    
    while(seguir == 's' || seguir == 'S') {
        system("cls"); 
        printf("Ingrese la cedula del vendedor: ");
        scanf("%s", &cedula);
        fflush(stdin); // limpia el buffer de entrada
        
        printf("Ingrese el nombre del vendedor: ");
        gets(nombre);
        
        printf("Ingrese el valor de las ventas: ");
        scanf("%f", &valorVentas);
        
        if(valorVentas < 100000) {
            comision = valorVentas * 0.025;
        } else if (valorVentas >= 100000 && valorVentas <= 500000) {
            comision = valorVentas * 0.055;
        } else {
            comision = valorVentas * 0.075;
        }
        
        printf("\nEl vendedor %s con cedula %s tiene una comision de: $%.2f", nombre, cedula, comision);
        
        totalVentas += valorVentas;
        totalComisiones += comision;
        
        printf("\n\nDesea ingresar otro vendedor? (s/n): ");
        seguir = getch();
    }
    
    system("cls");
    printf("Valor total de las ventas: $%.2f", totalVentas);
    printf("\nValor total de las comisiones: $%.2f", totalComisiones);
    
    getch(); // Espera que el usuario presione una tecla para continuar
}


/**
 * @brief Selecciona atletas para una maratón internacional.
 * 
 * Esta función solicita al usuario el nombre, sexo, edad y tiempo efectuado en el maratón anterior de cada atleta.
 * Luego, determina si el atleta es apto para el maratón internacional basándose en los siguientes criterios:
 * - Los hombres menores de 40 años deben haber terminado el maratón anterior en 150 minutos o menos.
 * - Los hombres de 40 años o más deben haber terminado el maratón anterior en 175 minutos o menos.
 * - Las mujeres deben haber terminado el maratón anterior en 180 minutos o menos.
 * 
 * La función continúa solicitando los datos de los atletas hasta que el usuario decida no ingresar más atletas.
 * Al final, la función muestra el número total de hombres menores de 40 años, hombres de 40 años o más y mujeres que fueron admitidos.
 */
void seleccionarAtleta(){
    char nombre[50];
    char sexo;
    int edad, admitidosHombresMenor40 = 0, admitidosHombresMayor40 = 0, admitidasMujeres = 0;
    float tiempo;
    char seguir;
    
    do {
        system("cls");
        printf("Ingrese el nombre del atleta: ");
        fflush(stdin);
        gets(nombre);
        
        printf("Ingrese el sexo del atleta (H/M): ");
        scanf(" %c", &sexo);
        
        printf("Ingrese la edad del atleta: ");
        scanf("%d", &edad);
        
        printf("Ingrese el tiempo (en minutos) efectuado en el maraton anterior: ");
        scanf("%f", &tiempo);
        
        if(sexo == 'H' || sexo == 'h'){
            if(edad < 40){
                if(tiempo <= 150){
                    printf("\n%s es apto para el maraton internacional.", nombre);
                    admitidosHombresMenor40++;
                } else {
                    printf("\n%s no es apto para el maraton internacional.", nombre);
                }
            } else {
                if(tiempo <= 175){
                    printf("\n%s es apto para el maraton internacional.", nombre);
                    admitidosHombresMayor40++;
                } else {
                    printf("\n%s no es apto para el maraton internacional.", nombre);
                }
            }
        } else if(sexo == 'M' || sexo == 'm') {
            if(tiempo <= 180){
                printf("\n%s es apto para el maraton internacional.", nombre);
                admitidasMujeres++;
            } else {
                printf("\n%s no es apto para el maraton internacional.", nombre);
            }
        } else {
            printf("\nSexo no valido. Por favor ingrese H para hombres o M para mujeres.");
        }
        
        printf("\n\nDesea ingresar otro atleta? (s/n): ");
        seguir = getch();
    } while(seguir == 's' || seguir == 'S');
    
    system("cls");
    printf("Total de hombres menores de 40 anos admitidos: %d", admitidosHombresMenor40);
    printf("\nTotal de hombres de 40 anos o mas admitidos: %d", admitidosHombresMayor40);
    printf("\nTotal de mujeres admitidas: %d", admitidasMujeres);
    
    getch(); // Espera que el usuario presione una tecla para continuar
}


/**
 * @brief Dibuja un triángulo rectángulo con asteriscos.
 * 
 * Esta función solicita al usuario un número entero `n` y luego dibuja un 
 * triángulo rectángulo con asteriscos en la consola. El triángulo tendrá una 
 * altura de `n` niveles.
 * 
 * Ejemplo de salida para n=5:
 * *
 * **
 * ***
 * ****
 * *****
 */
void dibujarTrianguloRectangulo(){
    int n;
    system("cls");
    printf("Ingrese la cantidad de niveles para el triangulo: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    
    getch(); // Espera que el usuario presione una tecla para continuar
}
