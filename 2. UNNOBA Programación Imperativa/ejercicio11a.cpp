#include <iostream>
#include <string>
using namespace std;

void invertirCadena() {
    string cadenaEntrada, cadenaInvertida = "";
    cout << "> Ingrese una cadena: ";
    getline(cin, cadenaEntrada);
    for (int i=cadenaEntrada.length(); i>=0; i--) {
        cadenaInvertida += cadenaEntrada[i];
    }
    cout << "# La cadena fue invertida correctamente." << endl;
    cout << "# La cadena invertida es: " << cadenaInvertida << endl;
}

int main() {
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 10 # --------" << endl;
    cout << "----------------------------------" << endl;
    invertirCadena();
    return 0;
}