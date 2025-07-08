#include <iostream>
using namespace std;

// CASO 1)
// void primeraFuncion(int x)
// {
//     x = x + 8;
//     cout << "# Valor de x luego de la primera funcion:" << x << endl;     // x=15
// }                   //   2
// void segundaFuncion(int &x)
// {
//     x = x + 5;          // 7
//     primeraFuncion(x);
//     cout << "# Valor de x luego de la segunda funcion:" << x << endl;     // x=7
// }
// int main()
// {
//     int x = 2;
//     segundaFuncion(x);
//     return 0;
// }

// CASO 2)
        //      5     8        8
// void funcion(int a, int & y, int & z)
// {
//     int b = 1;
//     y = y + 1;  
//     z = z + a;
//     b = 4;
// }
// int main()
// {
//     int a = 2;
//     int b = 3;
//     funcion(a + b, a, a);
//     cout << "# Variable a: " << a << endl;  //  8
//     cout << "# Variable b: " << b << endl;  //  3
//     return 0;
// }
// ¿Qué cambiaría si en la función se reemplazara el nombre del parámetro a por el nombre x ? Es decir : void funcion(int x, int &y, int &z)
// {
//     int b = 1;
//     y = y + 1;
//     z = z + x;
//     b = 4;
// }

// CASO 3)
//                  90210
int sumatoriaPares(int numero)
{
    int suma = 0;
    while (numero != 0)
    {
        if ((numero % 10) % 2 == 0)
        {
            suma += numero % 10;
        }
        numero = numero / 10;
    }
    return suma;
}
//                  4      90210    2
void alterarNumero(int a, int &b, int c)
{
    a = sumatoriaPares(c);
    b = a;
}
int main()
{
    int i = 4;
    int numero = 90210;
    alterarNumero(i, numero, sumatoriaPares(numero));
    cout << "Numero: " << numero << endl;       // 2
    cout << "Variable i: " << i << endl;        // 4
    return 0;
}
