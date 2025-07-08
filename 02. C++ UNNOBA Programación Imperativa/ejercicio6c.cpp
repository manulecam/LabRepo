#include <iostream>
using namespace std;

// Ejercicio 6:
// Escribir un programa que calcule la suma de una determinada 
// cantidad de elementos de la serie armónica:
// 1/1 + 1/2 + 1/3 + … + 1/n, donde n se especifica por el usuario.

int main() 
{
    float entradaN, sumaTotal=0;
    cout << "> Ingrese un numero: ";
    cin >> entradaN;
    for (float i=1; i<=entradaN; i++) {
        sumaTotal+=(1.00/i);
    }
    cout << "# Test salida: " << sumaTotal << endl;
    return 0;
}