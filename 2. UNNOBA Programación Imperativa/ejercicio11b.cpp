#include <iostream>
#include <string>
using namespace std;

void invertirCadena() 
{
    string cadenaEntrada, cadenaInvertida = "";
    cout << "> Ingrese una cadena a invertir: ";
    getline(cin, cadenaEntrada);
    int i=cadenaEntrada.length();
    for (i; i>=0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    cout << "# Conversion exitosa. La cadena invertida es: " << cadenaInvertida << endl;
}

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 11 #------------" << endl;
    cout << "----------------------------------------" << endl;
    invertirCadena();
    return 0;
}