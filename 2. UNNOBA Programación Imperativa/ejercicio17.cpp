#include <iostream>
using namespace std;

// Ejercicio 17: escribir un programa que determine si un año es bisiesto.
// Nota: un año es bisiesto si es múltiplo de 4. Los años múltiplos de 100
// NO son bisiestos, excepto que también sean múltiplos de 400.

int comprobarBisiesto() 
{
    int inputA;
    cout << "> Ingrese un anio (AAAA): ";
    cin >> inputA;
    if (inputA%4==0) {
        if (inputA%100!=0 && inputA%400==0) {
            cout << "# El anio " << inputA << " SI es un anio bisiesto. " << endl;
        }
        cout << "# El anio " << inputA << " SI es un anio bisiesto. " << endl;
    } else {
        cout << "# El anio " << inputA << " NO es un anio bisiesto. " << endl;
    }
    return 0;
}

int main() 
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 17 # --------" << endl;
    cout << "----------------------------------" << endl;

    comprobarBisiesto();

    return 0;
}