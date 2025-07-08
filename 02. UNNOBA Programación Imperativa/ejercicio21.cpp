#include <iostream>
using namespace std;

// Ejercicio 21:
// ¿Qué errores tiene este fragmento de código y por qué?
                //   0       17      9
void funcion(int &x, int &y, int z) // El const en el parametro es un error: (const int & x...)
{
    x++;        // x=1
    y = 12;     // y=12
    z = 20;
}
int main()
{
    int a = 0;
    int b = 9;
    int c = 17;

        //  0  17  9
    funcion(a, c, b);  // Un parametro pasado por referencia debe ser una variable,
                        // no puede ser un valor sin almacenarse: (a, 17, b) -el 17-
    cout << "# Variable 'a': " << a << endl;
    cout << "# Variable 'b': " << b << endl;
    return 0;
}
