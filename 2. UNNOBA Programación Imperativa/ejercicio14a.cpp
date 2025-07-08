#include <iostream>
#include <string>
using namespace std;

void verificarPalindromo()
{
    string cadenaEntrada, cadenaInvertida="";
    cout << "> Ingrese una palabra: ";
    cin >> cadenaEntrada;
    for (int i=cadenaEntrada.length()-1; i>=0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    if (cadenaEntrada==cadenaInvertida) {
        cout << "# La palabra ingresada SI es un palindromo." << endl;
    } else {
        cout << "# La palabra ingresada NO es un palindromo." << endl;
    }
}

int main() 
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 14 # --------" << endl;
    cout << "----------------------------------" << endl;
    verificarPalindromo();
    return 0;
}