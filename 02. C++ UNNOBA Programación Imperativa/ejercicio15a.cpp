#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------------------------------
// Ejercicio 15:
// Dado el siguiente programa cuya función main está completa, implementar
// las funciones que falten para compilar y realizar las operaciones del menú.
// ------------------------------------------------------------------------------------

// Implementar aquí las funciones invocadas en main
int cantidadVocales(string cadenaEntrada) {
    string vocales = "aeiou";
    int contadorVocales = 0;
    for (int i=0; i<cadenaEntrada.length(); i++) {
        for (int j=0; j<vocales.length(); j++) {
            if (tolower(cadenaEntrada[i])==vocales[j]) {
                contadorVocales++;
            }
        }
    }
    return contadorVocales;
}

int contar(string cadenaEntrada, char caracterEntrada) {
    int contadorCaracter = 0;
    for (int i=0; i<cadenaEntrada.length(); i++) {
        if (cadenaEntrada[i] == caracterEntrada) {
            contadorCaracter++;
        }
    }
    return contadorCaracter;
}

void caracteresPares(string cadenaEntrada) {
    string cadenaPares = "";
    for (int i=0; i<cadenaEntrada.length(); i++) {
        if (i % 2==0) {
            cadenaPares += cadenaEntrada[i];
        }
    }
    cout << "# Los caracteres en indices pares son: " << cadenaPares << endl;
}

// ------------------------------------------------------------------------------------
// MAIN
int main()
{
    int opcion;
    do
    {
        string cadena;
        cout << "> Ingrese una frase: ";
        getline(cin >> ws, cadena);
        cout << "----------------- # MENU PRINCIPAL # -----------------" << endl;
        cout << endl;
        cout << "1. Cantidad total de vocales (mayusculas y minusculas)" << endl;
        cout << "2. Contar cuantas veces aparece un caracter" << endl;
        cout << "3. Mostrar caracteres en posiciones (indices) pares" << endl;
        cout << endl;
        cout << "0. Salir" << endl;
        cout << "> Elija una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "# Cantidad de vocales: " << cantidadVocales(cadena) << endl;
            break;
        case 2:
            cout << "> Ingresar caracter a contar: ";
            char caracter;
            cin >> caracter;
            cout << "# Cantidad encontrada: " << contar(cadena, caracter) << endl;
            break;
        case 3:
            caracteresPares(cadena);
            cout << endl;
            break;
        case 0:
            cout << "# Programa finalizado..." << endl;
            break;
        default:
            cout << "# Opcion invalida, intentelo nuevamente... " << endl;
            break;
        }
    } while (opcion != 0);
}
