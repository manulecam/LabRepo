#include <iostream>
#include <string>
using namespace std;

// Ejercicio 11.
// Leer una cadena de caracteres (string) de teclado e imprimirla en orden inverso

string invertirCadena()
{
    string cadenaInput, cadenaInvertida;
    cout << "> Ingrese una cadena para invertir: ";
    getline(cin, cadenaInput);

    for (int i = cadenaInput.length(); i >= 0; i--) {
        cadenaInvertida += cadenaInput[i];
    }
    cout << "# La cadena ingresada invertida es: " << cadenaInvertida << endl;

    return cadenaInvertida;
}

int main() 
{
    cout << "----------------------------------------------" << endl;
    cout << "-------------- # Ejercicio 11 # --------------" << endl;
    cout << "----------------------------------------------" << endl;

    invertirCadena();

    return 0;
}

