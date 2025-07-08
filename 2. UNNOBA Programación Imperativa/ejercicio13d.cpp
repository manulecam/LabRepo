#include <iostream>
#include <string>
using namespace std;

// Ejercicio 13: leer una cadena de caracteres de teclado e, independientemente de cómo ha sido ingresada, convertir la
// primera letra a mayúscula y el resto a minúsculas. Considerar que la cadena puede estar vacía.
// Precondición: si la cadena no está vacía, el primer carácter es una letra.
// Ejemplo: si se ingresa la cadena “EsTO ES UNa cadENA de Texto”, el resultado debería ser “Esto es una cadena
// de texto”

void acomodarMayusculas()
{
    string cadenaEntrada, cadenaConvertida;
    cout << "> Ingrese una cadena: ";
    getline(cin>>ws, cadenaEntrada);

    for (int i=0; i<cadenaEntrada.length(); i++) {
        if (i==0) {
            cadenaConvertida += toupper(cadenaEntrada[i]);
        } else {
            cadenaConvertida += tolower(cadenaEntrada[i]);
        }
    }

    cout << "# La cadena convertida es: " << cadenaConvertida <<  endl;
}

int main()
{
    cout << "------------------------------------------" << endl;
    cout << "------------ # Ejercicio 13 # ------------" << endl;
    cout << "------------------------------------------" << endl;
    acomodarMayusculas();
    return 0;
}