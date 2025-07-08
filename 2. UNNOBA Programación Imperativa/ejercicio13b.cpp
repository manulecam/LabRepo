#include <iostream>
#include <string>
using namespace std;

void acomodarMayusculas()
{
    int i=0;
    string cadenaEntrada, cadenaFinal;
    cout << "> Ingrese una cadena: ";
    getline(cin>>ws, cadenaEntrada);
    for (i; i<cadenaEntrada.length(); i++) {
        if (i == 0) {
            cadenaFinal += toupper(cadenaEntrada[i]);
            continue;
        }
        cadenaFinal += tolower(cadenaEntrada[i]);
    }
    cout << "# " << cadenaFinal << endl;
}

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 13 #------------" << endl;
    cout << "----------------------------------------" << endl;
    acomodarMayusculas();
    return 0;
}