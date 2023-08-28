//Sumar los digitos de un numero
#include <iostream>
using namespace std;
int sumarDigitos(int n);
/***********************************************************/
int main()
{
    int num;
    cout << "Ingrese un numero: ";
    cin >> num ;
    num = sumarDigitos(num);
    cout << "La suma de los digitos es: " << num << endl;
    system("pause");
    return 0;
}
/***********************************************************/
int sumarDigitos(int n)
{
    if (n < 10)
        return n;
    else
        return n % 10 + sumarDigitos(n / 10);
}