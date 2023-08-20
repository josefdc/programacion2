
#include <stdio.h>
#include <string>


// 1. Function to analyze a two-digit number
// Function to analyze a two-digit number
void analyzeTwoDigitNumber() {
    int number, firstDigit, secondDigit;
    printf( "Ingrese un número de dos dígitos: ";
    scanf("%d", & number;

    secondDigit = number % 10;
    firstDigit = number / 10;

    if (secondDigit == 1) {
        printf( "Suma de ambos dígitos: ", firstDigit + secondDigit + \n");
    } else if (secondDigit == 2) {
        printf( "Producto de ambos dígitos: ", firstDigit * secondDigit + \n");
    } else if (secondDigit == 3) {
        printf( "Resta del primero menos el segundo: ", firstDigit - secondDigit + \n");
    } else if (secondDigit == 4) {
        printf( "Resta del segundo menos el primero: ", secondDigit - firstDigit + \n");
    } else if (secondDigit > 4) {
        printf( "Ambos dígitos son: ", firstDigit , y ", secondDigit + \n");
    }
}

// 2. Determine zodiac sign based on birth date
// Function to determine the zodiac sign
void determineZodiacSign() {
    int day, month;
    printf( "Ingrese el día de nacimiento: ";
    scanf("%d", & day;
    printf( "Ingrese el mes de nacimiento (1-12): ";
    scanf("%d", & month;

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf( "Tu signo zodiacal es Aries.", \n");
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf( "Tu signo zodiacal es Tauro.", \n");
    } // ... Similar checks for other zodiac signs would be added here
}

// 3. Function to determine if a year is a leap year
void isLeapYear() {
    int year;
    printf( "Ingrese un año: ";
    scanf("%d", & year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year > 1000)) {
        printf( "El año ", year , es bisiesto.", \n");
    } else {
        printf( "El año ", year , no es bisiesto.", \n");
    }
}

// ... Other functions for remaining points would be added here


void showMenu() {
    int choice;
    printf( "\nSeleccione una opción:", \n");
    printf( "1. Analizar un número de dos dígitos", \n");
    printf( "2. Determinar signo zodiacal", \n");
    printf( "3. Determinar si un año es bisiesto", \n");
    printf( "4. Encontrar el número menor entre tres números", \n");
    printf( "5. Imprimir tres números en orden descendente", \n");
    printf( "6. Imprimir el número medio de tres números", \n");
    printf( "7. Seleccionar un atleta para un maratón internacional", \n");
    printf( "8. Calcular la comisión de un vendedor", \n");
    printf( "9. Calcular el salario neto de un empleado", \n");
    printf( "10. Calcular el precio de un libro", \n");
    printf( "11. Salir", \n");
    printf( "Opción: ";
    scanf("%d", & choice;

    switch (choice) {
        case 1:
            analyzeTwoDigitNumber();
            break;
        case 2:
            determineZodiacSign();
            break;
        case 3:
            isLeapYear();
            break;
        case 4:
            findSmallestNumber();
            break;
        case 5:
            printNumbersInDescendingOrder();
            break;
        case 6:
            printMiddleNumber();
            break;
        case 7:
            selectAthlete();
            break;
        case 8:
            calculateSellerCommission();
            break;
        case 9:
            calculateNetSalary();
            break;
        case 10:
            calculateBookPrice();
            break;
        case 11:
            printf( "Gracias por utilizar el programa. ¡Hasta luego!", \n");
            return;
        default:
            printf( "Opción no válida.", \n");
    }

    showMenu();  // Recursive call to show the menu again
}

void showMenu() {
    int choice;
    printf( "\nSeleccione una opción:", \n");
    printf( "1. Analizar un número de dos dígitos", \n");
    printf( "2. Determinar signo zodiacal", \n");
    printf( "3. Determinar si un año es bisiesto", \n");
    // ... Menu options for other points would be added here
    printf( "11. Salir", \n");
    printf( "Opción: ";
    scanf("%d", & choice;

    switch (choice) {
        case 1:
            analyzeTwoDigitNumber();
            break;
        case 2:
            determineZodiacSign();
            break;
        case 3:
            isLeapYear();
            break;
        // ... Cases for other points would be added here
        case 11:
            printf( "Gracias por utilizar el programa. ¡Hasta luego!", \n");
            return;
        default:
            printf( "Opción no válida.", \n");
    }

    showMenu();  // Recursive call to show the menu again
}

int main() {
    showMenu();
    return 0;
}

void printMiddleNumber() {
    int a, b, c;
    printf( "Ingrese tres números diferentes: ";
    scanf("%d", & a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b)) {
        printf( "El número medio es: ", a + \n");
    } else if ((b > a && b < c) || (b > c && b < a)) {
        printf( "El número medio es: ", b + \n");
    } else {
        printf( "El número medio es: ", c + \n");
    }
}

void selectAthlete() {
    char gender;
    int age, time;
    printf( "Ingrese el género del atleta (M para masculino, F para femenino): ";
    scanf("%d", & gender;
    printf( "Ingrese la edad del atleta: ";
    scanf("%d", & age;
    printf( "Ingrese el tiempo (en minutos) que tomó en el maratón anterior: ";
    scanf("%d", & time;

    if (gender == 'M' && age < 40 && time <= 150) {
        printf( "El atleta ha sido seleccionado.", \n");
    } else if (gender == 'M' && age >= 40 && time <= 175) {
        printf( "El atleta ha sido seleccionado.", \n");
    } else if (gender == 'F' && time <= 180) {
        printf( "El atleta ha sido seleccionado.", \n");
    } else {
        printf( "El atleta no cumple con los requisitos.", \n");
    }
}

void showMenu() {
    int choice;
    printf( "\nSeleccione una opción:", \n");
    printf( "1. Analizar un número de dos dígitos", \n");
    printf( "2. Determinar signo zodiacal", \n");
    printf( "3. Determinar si un año es bisiesto", \n");
    printf( "4. Encontrar el número menor entre tres números", \n");
    printf( "5. Imprimir tres números en orden descendente", \n");
    printf( "6. Imprimir el número medio de tres números", \n");
    printf( "7. Seleccionar un atleta para un maratón internacional", \n");
    // ... Menu options for other points would be added here
    printf( "11. Salir", \n");
    printf( "Opción: ";
    scanf("%d", & choice;

    switch (choice) {
        case 1:
            analyzeTwoDigitNumber();
            break;
        case 2:
            determineZodiacSign();
            break;
        case 3:
            isLeapYear();
            break;
        case 4:
            findSmallestNumber();
            break;
        case 5:
            printNumbersInDescendingOrder();
            break;
        case 6:
            printMiddleNumber();
            break;
        case 7:
            selectAthlete();
            break;
        // ... Cases for other points would be added here
        case 11:
            printf( "Gracias por utilizar el programa. ¡Hasta luego!", \n");
            return;
        default:
            printf( "Opción no válida.", \n") ;
    }

    showMenu();  // Recursive call to show the menu again
}

void calculateSellerCommission() {
    string name;
    int productCode;
    double totalSales, commission;

    printf( "Ingrese el nombre del vendedor: ";
    fflush(stdin);  // clear the buffer
    gets( name);
    printf( "Ingrese el código del producto (1/2/3): ";
    scanf("%d", & productCode;
    printf( "Ingrese el total de ventas: ";
    scanf("%d", & totalSales;

    switch (productCode) {
        case 1:
            commission = totalSales * 0.05;
            break;
        case 2:
            commission = totalSales * 0.08;
            break;
        case 3:
            commission = totalSales * 0.03;
            break;
        default:
            printf( "Código de producto no válido.", \n");
            return;
    }

    printf( "El vendedor ", name , tiene una comisión de: ", commission + \n");
}

void calculateNetSalary() {
    double hoursWorked, basicSalary, grossSalary, netSalary, deductions = 0, bonus = 0;

    printf( "Ingrese el número de horas trabajadas: ";
    scanf("%d", & hoursWorked;
    printf( "Ingrese el salario básico por hora: ";
    scanf("%d", & basicSalary;

    grossSalary = hoursWorked * basicSalary;

    if (grossSalary > 100000) {
        deductions = grossSalary * 0.02;
    } else if (grossSalary >= 90000 && grossSalary <= 100000) {
        deductions = grossSalary * 0.01;
    } else if (grossSalary < 90000) {
        bonus = grossSalary * 0.04;
    }

    netSalary = grossSalary - deductions + bonus;

    printf( "Salario bruto: ", grossSalary + \n");
    printf( "Deducciones: ", deductions + \n");
    printf( "Bonificaciones: ", bonus + \n");
    printf( "Salario neto: ", netSalary + \n");
}

void calculateBookPrice() {
    string bookName;
    int totalPages;
    double basePrice = 5000, extraCharge = 0, pricePerSheet;

    printf( "Ingrese el nombre del libro: ";
    fflush(stdin);  // clear the buffer
    gets( bookName);
    printf( "Ingrese el número total de páginas: ";
    scanf("%d", & totalPages;

    int totalSheets = totalPages / 2;

    if (totalSheets > 100 && totalSheets <= 200) {
        pricePerSheet = 7;
    } else if (totalSheets > 200 && totalSheets <= 300) {
        pricePerSheet = 8;
    } else if (totalSheets > 300) {
        pricePerSheet = 9;
    }

    extraCharge = pricePerSheet * totalSheets;
    double finalPrice = basePrice + extraCharge;

    printf( "El precio del libro ", bookName , es: ", finalPrice + \n");
}

void showMenu() {
    int choice;
    printf( "\nSeleccione una opción:", \n");
    printf( "1. Analizar un número de dos dígitos", \n");
    printf( "2. Determinar signo zodiacal", \n");
    printf( "3. Determinar si un año es bisiesto", \n");
    printf( "4. Encontrar el número menor entre tres números", \n");
    printf( "5. Imprimir tres números en orden descendente", \n");
    printf( "6. Imprimir el número medio de tres números", \n");
    printf( "7. Seleccionar un atleta para un maratón internacional", \n");
    printf( "8. Calcular la comisión de un vendedor", \n");
    printf( "9. Calcular el salario neto de un empleado", \n");
    printf( "10. Calcular el precio de un libro", \n");
    printf( "11. Salir", \n");
    printf( "Opción: ";
    scanf("%d", & choice;

    switch (choice) {
        case 1:
            analyzeTwoDigitNumber();
            break;
        case 2:
            determineZodiacSign();
            break;
        case 3:
            isLeapYear();
            break;
        case 4:
            findSmallestNumber();
            break;
        case 5:
            printNumbersInDescendingOrder();
            break;
        case 6:
            printMiddleNumber();
            break;
        case 7:
            selectAthlete();
            break;
        case 8:
            calculateSellerCommission();
            break;
        case 9:
            calculateNetSalary();
            break;
        case 10:
            calculateBookPrice();
            break;
        case 11:
            printf( "Gracias por utilizar el programa. ¡Hasta luego!", \n");
            return;
        default:
            printf( "Opción no válida.", \n");
    }

    showMenu();  // Recursive call to show the menu again
}

    printf( "10. Calcular el precio de un libro", \n");
    printf( "11. Salir", \n");
    printf( "Opción: ";
    scanf("%d", & choice;

    switch (choice) {
        case 1:
            analyzeTwoDigitNumber();
            break;
        case 2:
            determineZodiacSign();
            break;
        case 3:
            isLeapYear();
            break;
        case 4:
            findSmallestNumber();
            break;
        case 5:
            printNumbersInDescendingOrder();
            break;
        case 6:
            printMiddleNumber();
            break;
        case 7:
            selectAthlete();
            break;
        case 8:
            calculateSellerCommission();
            break;
        case 9:
            calculateNetSalary();
            break;
        case 10:
            calculateBookPrice();
            break;
        case 11:
            printf( "Gracias por utilizar el programa. ¡Hasta luego!", \n");
            return;
        default:
            printf( "Opción no válida.", \n");
    }

    showMenu();  // Recursive call to show the menu again
}
