#include <iostream>
#include <string>
using namespace std;
// Dado el siguiente programa cuya función main está completa, implementar las funciones que falten para que
// compile y realice las tres operaciones indicadas en el menú.
// Implementar aquí las funciones invocdas en main
int cantidadVocales(string cadenaEntrada)
{
    string vocales = "aeiou";
    int contadorVocales = 0;
    for (int i=0; i<cadenaEntrada.length(); i++) {
        for (int j=0; j<vocales.length(); j++) {
            if (tolower(cadenaEntrada[i]) == vocales[j]) {
                contadorVocales++;
                break;
            }
        }
    }
    return contadorVocales;
}

int contar(string cadenaEntrada, char caracterEntrada)
{
    int contarCaracter = 0;
    for (int i=0; i<cadenaEntrada.length(); i++) {
        if (cadenaEntrada[i]==caracterEntrada){
            contarCaracter++;
        }
    }
    return contarCaracter;
}

void caracteresPares(string cadenaEntrada)
{
    string caracteres = "";
    for (int i=0; i<cadenaEntrada.length(); i++) {
        if (i%2==0) {
            caracteres += cadenaEntrada[i];
        }
    }
    cout << "# Los caracteres en posiciones pares son: " << caracteres << endl;
}

int main()
{
    int opcion;
    do
    {
        string cadena;
        cout << "> Ingresar frase: ";
        getline(cin >> ws, cadena);
        cout << "---------- MENU ----------" << endl;
        cout << "1. Cantidad total de vocales (mayusculas y minusculas)" << endl;
        cout << "2. Contar cuantas veces aparece un caracter" << endl;
        cout << "3. Mostrar caracteres en posiciones (indice) pares" << endl;
        cout << "0. Salir" << endl;
        cout << "> Opcion elegida: ";
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
            break;
        default:
            cout << "# Opcion no valida..." << endl;
            break;
        }
    } while (opcion != 0);
}