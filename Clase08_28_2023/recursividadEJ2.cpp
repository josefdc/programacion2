// el producto de forma recursiva
#include <iostream>
using namespace std;
/**********************************/
int producto(int a, int b)
{
    if (b == 0)
    {
        return 0;
    }
    else
    {
        return a + producto(a, b - 1);
    }
}
/**********************************/
int main()
{
    int a, b;
    cout << "Ingrese dos numeros: ";
    cin >> a >> b;
    cout << "El producto es: " << producto(a, b) << endl;
    return 0;
}
/**********************************/


