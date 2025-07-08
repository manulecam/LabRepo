#include <iostream>
#include <string>
using namespace std;

// Ejercicio 12: Leer una frase de teclado e informar 
// la longitud de la última palabra. 
// Se considera al espacio como separador de palabras.
// Precondición: el string no finaliza con espacios.

void longitudUltima() {
    string entradaCadena;
    int longitudPalabra = 0;
    cout << "> Ingrese una cadena: ";
    getline(cin, entradaCadena);
    for (int i=0; i<entradaCadena.length(); i++) {
        if (entradaCadena[i] == ' '){
            longitudPalabra=0;
            continue;
        }
        longitudPalabra++;
    }
    cout << "# La longitud de la ultima palabra es: " << longitudPalabra << endl;
}

int main() {
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 12 # --------" << endl;
    cout << "----------------------------------" << endl;
    longitudUltima();
    return 0;
}