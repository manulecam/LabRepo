#include <iostream>
#include <string>
using namespace std;

void mayusculaMinuscula()
{
    string cadenaEntrada, cadenaConvertida;
    int i = 0;
    cout << "> Ingrese una cadena:";
    getline(cin>>ws, cadenaEntrada);
    for (i; i<cadenaEntrada.length(); i++) {
        if (i==0) {
            cadenaConvertida += toupper(cadenaEntrada[i]);
            continue;
        }
        cadenaConvertida += tolower(cadenaEntrada[i]);
    }
    cout << "# La cadena invertida es: " << cadenaConvertida << endl;
}

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 13 #------------" << endl;
    cout << "----------------------------------------" << endl;
    mayusculaMinuscula();
    return 0;
}