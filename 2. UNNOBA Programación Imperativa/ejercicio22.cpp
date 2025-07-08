#include <iostream>
using namespace std;

// Ejercicio 22: Completar los parámetros y las instrucciones necesarias
// en el cuerpo de la siguiente función, de manera que la impresión final
// muestre los valores de las variables a y b intercambiados.

void intercambiarValores(int &a, int &b)
{
    int tempVar = a;
    a = b;
    b = tempVar;
}
int main()
{
    int a = 10;
    int b = 25;
    intercambiarValores(a, b);
    cout << "Variable a: " << a << endl;
    cout << "Variable b: " << b << endl;
    return 0;
}

// ¿Podría hacerse esto mismo si ambas variables están pasadas por valor?
// Dificilmente pueda llevarse a cabo. Se me ocurre con alguna funcion que pueda retornar
// más de un valor (en este caso 2), o bien utilizando algun tipo de contenedor.