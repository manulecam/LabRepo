#include <iostream>
#include <string>
using namespace std;

// Ejercicio 12: Leer una frase de teclado e informar 
// la longitud de la última palabra. 
// Se considera al espacio como separador de palabras.
// Precondición: el string no finaliza con espacios.

void longitudUltimaPalabra()
{
    string cadenaEntrada;
    int longitudPalabra = 0;
    cout << "> Ingrese una frase: ";
    getline(cin >> ws, cadenaEntrada);
    for (int i=0; i < cadenaEntrada.length(); i++) {
        longitudPalabra++;
        if (cadenaEntrada[i] == ' ') {
            longitudPalabra = 0;
        }
    }
    cout << "# La longitud de la ultima palabra es: " << longitudPalabra << endl;
}

int main()
{
    cout << "--------------------------------------" << endl;
    cout << "---------- # Ejercicio 12 # ----------" << endl;
    cout << "--------------------------------------" << endl;
    longitudUltimaPalabra();
    return 0;
}