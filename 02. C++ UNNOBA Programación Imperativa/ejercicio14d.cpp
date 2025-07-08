#include <iostream>
#include <string>
using namespace std;

void verificarPalindromos() 
{
    string cadenaEntrada, cadenaInvertida;
    cout << "> Ingrese una cadena: ";
    getline(cin>>ws, cadenaEntrada);
    int i = cadenaEntrada.length() - 1;
    for (i; i >= 0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    if (cadenaInvertida == cadenaEntrada) {
        cout << "# La cadena SI es un palindromo." << endl;
    } else {
        cout << "# La cadena NO es un palindromo. " << endl;
    }
}

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 14 #------------" << endl;
    cout << "----------------------------------------" << endl;
    verificarPalindromos();
    return 0;
}