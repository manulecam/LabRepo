#include <iostream>
#include <string>
using namespace std;

// Ejercicio 12:
// Leer una frase de teclado e informar la longitud de la última palabra. Se considera al espacio como separador
// de palabras.
// Precondición: el string no finaliza con espacios.

void ultimaPalabra()
{
    string cadenaEntrada;
    int longitudUltima=0, i=0;
    cout << "> Ingrese una cadena: ";
    getline(cin, cadenaEntrada);
    for (i; i<cadenaEntrada.length(); i++) {
        if (cadenaEntrada[i] == ' ') {
            longitudUltima = 0;
            continue;
        }
        longitudUltima++;
    }
    cout << "# La longitud de la ultima palabra es: " << longitudUltima;
}

int main()
{
    cout << "------------------------------------" << endl;
    cout << "----------# Ejercicio 12 #----------" << endl;
    cout << "------------------------------------" << endl;
    ultimaPalabra();
    return 0;
}