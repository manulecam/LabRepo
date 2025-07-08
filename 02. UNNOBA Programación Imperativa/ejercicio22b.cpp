#include <iostream>
using namespace std;

// Ejercicio 22: Completar los parámetros y las instrucciones necesarias
// en el cuerpo de la siguiente función, de manera que la impresión final
// muestre los valores de las variables a y b intercambiados.

void intercambiarValores(int & a, int & b)
{
    int c = b;
    b = a;
    a = c;
}
int main()
{
    int a = 10;
    int b = 25;
    intercambiarValores(a, b);
    cout << "# Variable a: " << a << endl;
    cout << "# Variable b: " << b << endl;
    return 0;
}