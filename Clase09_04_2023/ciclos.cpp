/*
Ejemplo:
Elaborar un algoritmo que capture un numero y que realice la tabla de multiplicar del uno al diez
de ese numero.
*/

#include <iostream>

using namespace std;
int num, i, mult;
int main()
{
    cout << "Ingrese un numero: ";
    cin >> num;
    i=1;
    while (i <= 10)
    {
        mult = num * i;
        cout << num << " x " << i << " = " << mult << endl;
        i++;
    }
    system("pause");
}