#include <iostream>
using namespace std;

// CASO 1)
// void primeraFuncion(int x)
// {
//     x = x + 8;
//     cout << "# Valor de 'x' luego de la primera funcion: " << x << endl;        // Primera impresion por pantalla: valor de x=15;
// }
// void segundaFuncion(int &x)
// {
//     x = x + 5;          // Modifica el valor de 'x' de manera global;
//     primeraFuncion(x);
//     cout << "# Valor de x' luego de la segunda funcion: " << x << endl;         // Segunda impresion, valor de x=7;
// }
// int main()
// {
//     int x = 2;
//     segundaFuncion(x);
//     return 0;
// }

// CASO 2)      5       8       8
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
//     //        5    2  2
//     funcion(a + b, a, a);
//     cout << "# Variable a=" << a << endl; // a=8
//     cout << "# Variable b=" << b << endl; // b=3
//     return 0;
// }
// ¿Qué cambiaría si en la función se reemplazara el nombre del parámetro a por el nombre x ? Es decir : void funcion(int x, int &y, int &z)
// No pasaria nada diferente, ya que aunque cambiemos el nombre del parametro, las funcionalidades seguiran siendo las mismas.
// {
//     int b = 1;
//     y = y + 1;
//     z = z + x;
//     b = 4;
// }

// CASO 3)
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
}              //    4     90210   2
void alterarNumero(int a, int &b, int c)
{                   // 2
    a = sumatoriaPares(c); //a=
    b = a;  //b=2
}
int main()
{
    int i = 4;
    int numero = 90210;

    //            4   90210              2       
    alterarNumero(i, numero, sumatoriaPares(numero));
    cout << "Numero: " << numero << endl;   //2
    cout << "Variable i: " << i << endl;    // 4
    return 0;
}
