#include <iostream>
#include <string>
using namespace std;

void convertirCadena() 
{
    string cadenaEntrada, cadenaConvertida="";
    cout << "> Ingrese una cadena: ";
    getline(cin, cadenaEntrada);
    for (int i=0; i<cadenaEntrada.length(); i++) {
        if (i==0) {
            cadenaConvertida+=toupper(cadenaEntrada[i]);
        } else {
            cadenaConvertida+=tolower(cadenaEntrada[i]);
        }
    }
    cout << "# La cadena fue convertida con exito, y el resultado es:" << endl;
    cout << "# " << cadenaConvertida << endl;
}

int main() 
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 13 # --------" << endl;
    cout << "----------------------------------" << endl;
    convertirCadena();
    return 0;
}