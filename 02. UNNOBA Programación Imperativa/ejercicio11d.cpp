#include <iostream>
#include <string>
using namespace std;

// Ejercicio 11.
// Leer una cadena de caracteres (string) de teclado e imprimirla en orden inverso

void invertirCadena()
{
    string cadenaEntrada, cadenaInvertida;
    cout << "> Ingrese una cadena: ";
    getline(cin >> ws, cadenaEntrada);
    int i = cadenaEntrada.length() - 1;
    for (i; i >= 0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    cout << "# La cadena invertida es: " << cadenaInvertida << endl;
}

int main()
{
    invertirCadena();
    return 0;
}