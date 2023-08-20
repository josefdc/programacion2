
#include <iostream>
#include <string>
using namespace std;

// 1. Function to analyze a two-digit number
void analyzeTwoDigitNumber() {
    int number, firstDigit, secondDigit;
    cout << "Ingrese un número de dos dígitos: ";
    cin >> number;

    secondDigit = number % 10;
    firstDigit = number / 10;

    if (secondDigit == 1) {
        cout << "Suma de ambos dígitos: " << firstDigit + secondDigit << endl;
    } else if (secondDigit == 2) {
        cout << "Producto de ambos dígitos: " << firstDigit * secondDigit << endl;
    } else if (secondDigit == 3) {
        cout << "Resta del primero menos el segundo: " << firstDigit - secondDigit << endl;
    } else if (secondDigit == 4) {
        cout << "Resta del segundo menos el primero: " << secondDigit - firstDigit << endl;
    } else if (secondDigit > 4) {
        cout << "Ambos dígitos son: " << firstDigit << " y " << secondDigit << endl;
    }
}

// 2. Determine zodiac sign based on birth date
void determineZodiacSign() {
    int day, month;
    cout << "Ingrese el día de nacimiento: ";
    cin >> day;
    cout << "Ingrese el mes de nacimiento (1-12): ";
    cin >> month;

    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        cout << "Tu signo zodiacal es Aries." << endl;
    } else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        cout << "Tu signo zodiacal es Tauro." << endl;
    } // ... Similar checks for other zodiac signs would be added here
}

// 3. Function to determine if a year is a leap year
void isLeapYear() {
    int year;
    cout << "Ingrese un año: ";
    cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0 && year > 1000)) {
        cout << "El año " << year << " es bisiesto." << endl;
    } else {
        cout << "El año " << year << " no es bisiesto." << endl;
    }
}

// ... Other functions for remaining points would be added here


void showMenu() {
    int choice;
    cout << "\nSeleccione una opción:" << endl;
    cout << "1. Analizar un número de dos dígitos" << endl;
    cout << "2. Determinar signo zodiacal" << endl;
    cout << "3. Determinar si un año es bisiesto" << endl;
    cout << "4. Encontrar el número menor entre tres números" << endl;
    cout << "5. Imprimir tres números en orden descendente" << endl;
    cout << "6. Imprimir el número medio de tres números" << endl;
    cout << "7. Seleccionar un atleta para un maratón internacional" << endl;
    cout << "8. Calcular la comisión de un vendedor" << endl;
    cout << "9. Calcular el salario neto de un empleado" << endl;
    cout << "10. Calcular el precio de un libro" << endl;
    cout << "11. Salir" << endl;
    cout << "Opción: ";
    cin >> choice;

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
            cout << "Gracias por utilizar el programa. ¡Hasta luego!" << endl;
            return;
        default:
            cout << "Opción no válida." << endl;
    }

    showMenu();  // Recursive call to show the menu again
}

void showMenu() {
    int choice;
    cout << "\nSeleccione una opción:" << endl;
    cout << "1. Analizar un número de dos dígitos" << endl;
    cout << "2. Determinar signo zodiacal" << endl;
    cout << "3. Determinar si un año es bisiesto" << endl;
    // ... Menu options for other points would be added here
    cout << "11. Salir" << endl;
    cout << "Opción: ";
    cin >> choice;

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
            cout << "Gracias por utilizar el programa. ¡Hasta luego!" << endl;
            return;
        default:
            cout << "Opción no válida." << endl;
    }

    showMenu();  // Recursive call to show the menu again
}

int main() {
    showMenu();
    return 0;
}

void printMiddleNumber() {
    int a, b, c;
    cout << "Ingrese tres números diferentes: ";
    cin >> a >> b >> c;

    if ((a > b && a < c) || (a > c && a < b)) {
        cout << "El número medio es: " << a << endl;
    } else if ((b > a && b < c) || (b > c && b < a)) {
        cout << "El número medio es: " << b << endl;
    } else {
        cout << "El número medio es: " << c << endl;
    }
}

void selectAthlete() {
    char gender;
    int age, time;
    cout << "Ingrese el género del atleta (M para masculino, F para femenino): ";
    cin >> gender;
    cout << "Ingrese la edad del atleta: ";
    cin >> age;
    cout << "Ingrese el tiempo (en minutos) que tomó en el maratón anterior: ";
    cin >> time;

    if (gender == 'M' && age < 40 && time <= 150) {
        cout << "El atleta ha sido seleccionado." << endl;
    } else if (gender == 'M' && age >= 40 && time <= 175) {
        cout << "El atleta ha sido seleccionado." << endl;
    } else if (gender == 'F' && time <= 180) {
        cout << "El atleta ha sido seleccionado." << endl;
    } else {
        cout << "El atleta no cumple con los requisitos." << endl;
    }
}

void showMenu() {
    int choice;
    cout << "\nSeleccione una opción:" << endl;
    cout << "1. Analizar un número de dos dígitos" << endl;
    cout << "2. Determinar signo zodiacal" << endl;
    cout << "3. Determinar si un año es bisiesto" << endl;
    cout << "4. Encontrar el número menor entre tres números" << endl;
    cout << "5. Imprimir tres números en orden descendente" << endl;
    cout << "6. Imprimir el número medio de tres números" << endl;
    cout << "7. Seleccionar un atleta para un maratón internacional" << endl;
    // ... Menu options for other points would be added here
    cout << "11. Salir" << endl;
    cout << "Opción: ";
    cin >> choice;

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
            cout << "Gracias por utilizar el programa. ¡Hasta luego!" << endl;
            return;
        default:
            cout << "Opción no válida." << endl;
    }

    showMenu();  // Recursive call to show the menu again
}

void calculateSellerCommission() {
    string name;
    int productCode;
    double totalSales, commission;

    cout << "Ingrese el nombre del vendedor: ";
    cin.ignore();  // clear the buffer
    getline(cin, name);
    cout << "Ingrese el código del producto (1/2/3): ";
    cin >> productCode;
    cout << "Ingrese el total de ventas: ";
    cin >> totalSales;

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
            cout << "Código de producto no válido." << endl;
            return;
    }

    cout << "El vendedor " << name << " tiene una comisión de: " << commission << endl;
}

void calculateNetSalary() {
    double hoursWorked, basicSalary, grossSalary, netSalary, deductions = 0, bonus = 0;

    cout << "Ingrese el número de horas trabajadas: ";
    cin >> hoursWorked;
    cout << "Ingrese el salario básico por hora: ";
    cin >> basicSalary;

    grossSalary = hoursWorked * basicSalary;

    if (grossSalary > 100000) {
        deductions = grossSalary * 0.02;
    } else if (grossSalary >= 90000 && grossSalary <= 100000) {
        deductions = grossSalary * 0.01;
    } else if (grossSalary < 90000) {
        bonus = grossSalary * 0.04;
    }

    netSalary = grossSalary - deductions + bonus;

    cout << "Salario bruto: " << grossSalary << endl;
    cout << "Deducciones: " << deductions << endl;
    cout << "Bonificaciones: " << bonus << endl;
    cout << "Salario neto: " << netSalary << endl;
}

void calculateBookPrice() {
    string bookName;
    int totalPages;
    double basePrice = 5000, extraCharge = 0, pricePerSheet;

    cout << "Ingrese el nombre del libro: ";
    cin.ignore();  // clear the buffer
    getline(cin, bookName);
    cout << "Ingrese el número total de páginas: ";
    cin >> totalPages;

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

    cout << "El precio del libro " << bookName << " es: " << finalPrice << endl;
}

void showMenu() {
    int choice;
    cout << "\nSeleccione una opción:" << endl;
    cout << "1. Analizar un número de dos dígitos" << endl;
    cout << "2. Determinar signo zodiacal" << endl;
    cout << "3. Determinar si un año es bisiesto" << endl;
    cout << "4. Encontrar el número menor entre tres números" << endl;
    cout << "5. Imprimir tres números en orden descendente" << endl;
    cout << "6. Imprimir el número medio de tres números" << endl;
    cout << "7. Seleccionar un atleta para un maratón internacional" << endl;
    cout << "8. Calcular la comisión de un vendedor" << endl;
    cout << "9. Calcular el salario neto de un empleado" << endl;
    cout << "10. Calcular el precio de un libro" << endl;
    cout << "11. Salir" << endl;
    cout << "Opción: ";
    cin >> choice;

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
            cout << "Gracias por utilizar el programa. ¡Hasta luego!" << endl;
            return;
        default:
            cout << "Opción no válida." << endl;
    }

    showMenu();  // Recursive call to show the menu again
}

    cout << "10. Calcular el precio de un libro" << endl;
    cout << "11. Salir" << endl;
    cout << "Opción: ";
    cin >> choice;

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
            cout << "Gracias por utilizar el programa. ¡Hasta luego!" << endl;
            return;
        default:
            cout << "Opción no válida." << endl;
    }

    showMenu();  // Recursive call to show the menu again
}
