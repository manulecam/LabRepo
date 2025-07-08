#include <iostream>
#include <string>
using namespace std;

void verificarPalindromo()
{
    string cadenaEntrada, cadenaInvertida;
    cout << "> Ingrese una cadena: ";
    getline(cin>>ws, cadenaEntrada);
    int i = cadenaEntrada.length() - 1;
    for (i; i>=0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    if (cadenaEntrada == cadenaInvertida) {
        cout << "# La cadena ingresada SI es un palindromo. " << endl;
    } else {
        cout << "# La cadena ingresada NO es un palindromo. " << endl;
    }
}

int main()
{
    cout << "------------------------------------" << endl;
    cout << "----------# Ejercicio 14 #----------" << endl;
    cout << "------------------------------------" << endl;
    verificarPalindromo();
    return 0;
}