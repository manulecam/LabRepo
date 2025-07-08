#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------------------------------
// Ejercicio 15:
// Implementar
// las funciones que falten para compilar y realizar las operaciones del menú.
// ------------------------------------------------------------------------------------

// Implementar aquí las funciones invocadas en main
int cantidadVocales(string cadena) {
    string vocales = "aeiou";
    int contadorVocales = 0;
    for (int i=0; i<cadena.length(); i++) {
        for (int j=0; j<vocales.length(); j++) {
            if (tolower(cadena[i]) == vocales[j]) {
                contadorVocales++;
                break;
            }
        }
    }
    return contadorVocales;
}

int contar(string cadena, char caracter) {
    int contadorCaracter=0, i=0;
    for (i; i<cadena.length(); i++) {
        if (cadena[i] == caracter) {
            contadorCaracter++;
            continue;
        }
    }
    return contadorCaracter;
}

void caracteresPares(string cadena) {
    int i=0;
    string caracteresPares = "";
    for (i=0; i<cadena.length(); i++) {
        if (i%2==0) {
            caracteresPares+=cadena[i];
        }
    }
    cout << "# Los caracteres en posiciones pares son: " << caracteresPares << endl;
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
        cout << "MENU: " << endl;
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
            cout << "# Opcion no valida" << endl;
            break;
        }
    } while (opcion != 0);
}
