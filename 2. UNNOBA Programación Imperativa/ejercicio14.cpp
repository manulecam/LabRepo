#include <iostream>
#include <string>
using namespace std;

// Ejercicio 14: Implementar un programa que solicite una palabra y verifique si es palíndromo. 
// Una palabra es palíndromo si puede leerse igual de izquierda a derecha que de derecha a izquierda.
// Precondición: todos los caracteres son minúsculas y no se ingresarán vocales acentuadas ni diéresis.
// --------------------------------------------------------------------
// Trabajaremos con dos variables: la cadena de entrada original, y una nueva cadena. 
// Esta nueva cadena sera creada a partir de la original, pero de manera invertida.
// Al final, compararemos ambas variables ó cadenas: si son iguales, se verifica que son palíndromos.

int esPalindromo()
{
    string inputPalabra, palabraInvertida;
    cout << "> Ingrese una palabra: ";
    cin >> inputPalabra;

    for (int i=inputPalabra.length()-1; i>=0; i--) {
        palabraInvertida += inputPalabra[i];
    }

    if (palabraInvertida == inputPalabra) {
        cout << "# La palabra ingresada SI es un palindromo. " << endl;
    } else {
        cout << "# La palabra ingresada NO es un palindromo. " << endl;
    }

    // Solucion 2
    // for (int i=0; i <= inputPalabra.length(); i++) {
    //     if (inputPalabra[i] != palabraInvertida[i]) {
    //         cout << "# La palabra ingresada NO es un palindromo." << endl;
    //         break;
    //     } else if (i == inputPalabra.length() && inputPalabra[i] == palabraInvertida[i]) {
    //         cout << "# La palabra ingresada SI es un palindromo." << endl;
    //     }
    // }

    return 0;
}

// --------------------------------------------------------------------
// Main
int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 14 # --------" << endl;
    cout << "----------------------------------" << endl;
    esPalindromo();
    return 0;
}