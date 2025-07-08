#include <iostream>
#include <string>
using namespace std;

// ------------------------------------------------------------------------------------
// Ejercicio 15:
// Dado el siguiente programa cuya función main está completa, implementar 
// las funciones que falten para compilar y realizar las operaciones del menú.
// ------------------------------------------------------------------------------------

// Implementar aquí las funciones invocadas en main
int cantidadVocales(string stringArg)
{
    string vocales = "aeiou";
    int contadorVocales = 0;
    for (int i=0; i<stringArg.length(); i++) {
        for (int j=0; j<vocales.length(); j++) {
            if (tolower(stringArg[i])==vocales[j]) {
                contadorVocales++;
            }
        }
    }
    return contadorVocales;
}

int contar(string stringArg, char charArg)
{
    int contadorCaracter = 0;
    for (int i=0; i<stringArg.length(); i++) {
        if (stringArg[i] == charArg) {
            contadorCaracter++;
        }
    }
    return contadorCaracter;
}

int caracteresPares(string stringArg)
{
    string stringFinal = "";
    for (int i=0; i < stringArg.length(); i++) {
        if (i % 2 == 0) {
            stringFinal += stringArg[i];
        }
    }
    cout << "$ Test stringFinal: " << stringFinal << endl;
    return 0;
}
// ------------------------------------------------------------------------------------
// Main
int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 15 # --------" << endl;
    int opcion;

    do
    {
        // Declaracion de variable y entrada de frase
        string cadena;
        cout << "----------------------------------" << endl;
        cout << "> Ingresar frase: ";
        getline(cin >> ws, cadena);

        // Menu principal 
        cout << "# MENU PRINCIPAL #" << endl;
        cout << "1. Cantidad total de vocales (mayusculas y minusculas)" << endl;
        cout << "2. Contar cuantas veces aparece un caracter" << endl;
        cout << "3. Mostrar caracteres en posiciones (indice) pares" << endl;
        cout << endl;
        cout << "0. Salir" << endl;
        cout << "> Ingresar opcion: ";
        cin >> opcion;

        // Switch de opciones
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
            cout << "# Saliendo..." << endl;
            break;

        default:
            cout << "# Opción no válida.." << endl;
            break;
        }
    } while (opcion != 0);
}

