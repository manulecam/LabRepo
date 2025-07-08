#include <iostream>
using namespace std;

int main()
{
    cout << "# Ejercicio 6 #" << endl;
    float entradaN, sumaTotal=0;
    cout << "> Ingrese un numero: ";
    cin >> entradaN;
    for (float i=1; i<=entradaN; i++) {
        sumaTotal += (1.00/i);
    }
    cout << "# La suma total de la serie de elementos de N cantidad es: " << sumaTotal << endl;
    return 0;
}