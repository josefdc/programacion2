// Factorial de un numero
#include <studio.h>
#include <iostream>
using namespace std;
int x, f;
/******************************************************/
 int factorial(int x)
 {
    int fa;
    if(i==0)
    {
        return (1);
    }
    fa = i * factorial(i-1);
    cout << "El factorial de " << i << " es: " << fa << endl;
    return (fa);
 }

 /******************************************************/
    int main()
    {
        cout << "Ingrese un numero: ";
        cin >> x;
        f = factorial(x);
        cout << "El factorial de " << x << " es: " << f << endl;
        return 0;
    }