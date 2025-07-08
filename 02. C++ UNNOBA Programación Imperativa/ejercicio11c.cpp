#include <iostream>
#include <string>
using namespace std;

void invertirCadena()
{
    string cadenaEntrada, cadenaInvertida;
    cout << "> Ingrese unacadena: ";
    cin >> cadenaEntrada;
    int i = cadenaEntrada.length() - 1;
    for (i; i>=0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    cout << "# La cadena invertida es: " << cadenaInvertida << endl;
}

int main()
{
    cout << "--------------------------------" << endl;
    cout << "--------# Ejercicio 11 #--------" << endl;
    cout << "--------------------------------" << endl;
    invertirCadena();
    return 0;
}