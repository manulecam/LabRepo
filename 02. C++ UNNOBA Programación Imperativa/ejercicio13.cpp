#include <iostream>
#include <string>
using namespace std;

// Ejercicio 13: leer una cadena de caracteres de teclado e, independientemente de cómo ha sido ingresada, convertir la
// primera letra a mayúscula y el resto a minúsculas. Considerar que la cadena puede estar vacía.
// Precondición: si la cadena no está vacía, el primer carácter es una letra.
// Ejemplo: si se ingresa la cadena “EsTO ES UNa cadENA de Texto”, el resultado debería ser “Esto es una cadena
// de texto”

int convertirCadena()
{
    string inputCadena, nuevaCadena;
    cout << "> Ingrese una cadena: ";
    getline(cin, inputCadena);

    for (int i=0; i < inputCadena.length(); i++) {
        cout << "$ test 'i': " << inputCadena[i] << endl;
        if (i == 0) {
            nuevaCadena += toupper(inputCadena[i]);
            continue;
        } else if (inputCadena[i] == ' ') {
            nuevaCadena += ' ';
            continue;
        }
        nuevaCadena += tolower(inputCadena[i]);
        cout << "$ test nuevaCadena: " << nuevaCadena << endl;
    }
    // cout << "$ TEST FINAL: " << nuevaCadena << endl;
    return 0;
}

int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 13 # --------" << endl;
    cout << "----------------------------------" << endl;

    convertirCadena();

    cout << "# Programa finalizado..." << endl;
    return 0;
}