#include <iostream>
#include <string>
using namespace std;

void longitudUltima() 
{
    string cadenaEntrada;
    int longitud=0, i=0;
    cout << "> Ingrese una cadena: ";
    getline(cin>>ws, cadenaEntrada);
    for (i; i<cadenaEntrada.length(); i++) {
        if (cadenaEntrada[i] == ' ') {
            longitud = 0;
            continue;
        }
        longitud ++;
    }
    cout << "# La longitud de la ultima palabra es: " << longitud << endl;
}

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 12 #------------" << endl;
    cout << "----------------------------------------" << endl;
    longitudUltima();
    return 0;
}