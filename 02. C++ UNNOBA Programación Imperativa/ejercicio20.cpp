#include <iostream>
#include <string>
using namespace std;

//  Ejercicio 20: Sin utilizar la computadora, indicar qué valores se imprimirían en cada caso.
// Luego verificar compilando y ejecutando cada uno.

// CASO 1)
// void primeraFuncion(int x)
// {
//     x = x + 8;                                                      // x = 15
//     cout << "Valor de x luego de la primera funcion:" << x << endl; // Se imprimirá que 'x' es igual a 15;
// }
// void segundaFuncion(int &x)
// {
//     x = x + 5;                                                      // x = 7
//     primeraFuncion(x);                                              // x = 7
//     cout << "Valor de x luego de la segunda funcion:" << x << endl; // Se imprimirá que 'x' es igual a 7;
// }
// int main()
// {
//     int x = 2;
//     segundaFuncion(x);
//     return 0;
// }

// CASO 2)
// void funcion(int a, int & y, int & z)
// {
//     int b = 1;
//     y = y + 1;   // 3
//     z = z + a;   // 8
//     b = 4;
// }
// ¿Qué cambiaría si en la función se reemplazara el nombre del parámetro a por el nombre x ?
// Es decir : void funcion(int x, int &y, int &z)
// {
//     int b = 1;
//     y = y + 1;
//     z = z + x;
//     b = 4;
// }
// int main()
// {
//     int a = 2;
//     int b = 3;
//     funcion(a + b, a, a);
//     cout << "# Variable 'a': " << a << endl; // Se imprimira '8'
//     cout << "# Variable 'b': " << b << endl; // Se imprimira '3'
//     return 0;
// }

// CASO 3)
//                       
// int sumatoriaPares(int numero)
// {
//     int suma = 0;           
//     while (numero != 0)
//     {
//         if ((numero % 10) % 2 == 0)
//         {
//             suma += numero % 10;
//         }
//         numero = numero / 10;
//     }
//     return suma;    // 2 
// }                   
// //                    4    90210    2      
// void alterarNumero(int a, int &b, int c)
// {
//     a = sumatoriaPares(c);
//     b = a;
// }
// int main()
// {
//     int i = 4;
//     int numero = 90210;
//     alterarNumero(i, numero, sumatoriaPares(numero));
//     cout << "Numero: " << numero << endl;   // Imprime el valor 2
//     cout << "Variable i: " << i << endl;    // Imprime el valor 4
//     return 0;
// }
