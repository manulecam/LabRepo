#include <iostream>
#include <string>
using namespace std;

// Ejercicio 12: Leer una frase de teclado e informar 
// la longitud de la última palabra. 
// Se considera al espacio como separador de palabras.
// Precondición: el string no finaliza con espacios.

int contarLongitud()
{
    string inputCadena;
    int contadorLongitud = 0;
    cout << "> Ingrese una cadena: ";
    getline(cin, inputCadena);

    for (int i=0; i < inputCadena.length(); i++) {
        if (inputCadena[i] == ' ') {
            contadorLongitud = 0;
            continue;
        } else {
            contadorLongitud++;
        }
    }

    cout << "# La longitud de la ultima palabra ingresada es: " << contadorLongitud << endl;
    return contadorLongitud;
}

int main()
{
    cout << "----------------------------------" << endl;
    cout << "---------# Ejercicio 12 #---------" << endl;
    cout << "----------------------------------" << endl;

    contarLongitud();

    cout << "# Programa finalizado con exito..." << endl;
    return 0;
}