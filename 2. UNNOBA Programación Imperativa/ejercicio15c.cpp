#include <iostream>
#include <string>
using namespace std;
// Implementar aquí las funciones invocadas en main
int cantidadVocales(string cadenaEntrada)
{
    string vocales = "aeiou";
    int contadorVocales = 0, i = 0;
    for (i; i<cadenaEntrada.length(); i++) {
        for (int j=0; j<vocales.length(); j++) {
            if (tolower(cadenaEntrada[i]) == vocales[j]) {
                contadorVocales++;
                continue;
            }
        }
    }
    return contadorVocales;
}

int contar(string cadenaEntrada, char caracterEntrada)
{
    int contadorCaracter = 0, i = 0;
    for (i; i<cadenaEntrada.length(); i++) {
        if (cadenaEntrada[i] == caracterEntrada) {
            contadorCaracter ++;
        }
    }
    return contadorCaracter;
}

void caracteresPares(string cadenaEntrada)
{
    string cadenaPares = "";
    int i = 0;
    for (i; i<cadenaEntrada.length(); i++) {
        if (i % 2 == 0) {
            cadenaPares += cadenaEntrada[i];
        }
    }
    cout << "# Los caracteres en indices pares son: " << cadenaPares << endl;
}

// Main
int main()
{
    int opcion;
    do
    {
        string cadena;
        cout << "> Ingresar frase: ";
        getline(cin >> ws, cadena);
        cout << "# MENU PRINCIPAL #" << endl;
        cout << "1. Cantidad total de vocales (mayusculas y minusculas)." << endl;
        cout << "2. Contar cuantas veces aparece un caracter." << endl;
        cout << "3. Mostrar caracteres en posiciones (indice) pares." << endl;
        cout << endl;
        cout << "0. Salir." << endl;
        cout << "> Opcion elegida: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "# Cantidad de vocales: " << cantidadVocales(cadena) << endl;
            break;
        case 2:
            cout << "# Ingresar caracter a contar: ";
            char caracter;
            cin >> caracter;
            cout << "# Cantidad encontrada: " << contar(cadena, caracter) << endl;
            break;
        case 3:
            caracteresPares(cadena);
            cout << endl;
            break;
        case 0:
            break;
        default:
            cout << "# Opcion invalida, vuelva a intentarlo..." << endl;
            break;
        }
    } while (opcion != 0);
}