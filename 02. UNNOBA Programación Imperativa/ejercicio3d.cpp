#include <iostream>
#include <string>
using namespace std;
// Ejercicio 3.
// Leer tres letras desde teclado e indicar cuál de ellas 
// viene primero en el alfabeto.
void cualVienePrimero(string abecedario, int & posicionPrimera)
{
    char letraEntrada;
    for (int j = 1; j <= 3; j++) {
        cout << "> Ingrese una letra: ";
        cin >> letraEntrada;
        for (int i = 0; i < abecedario.length(); i++) {
            if (abecedario[i] == letraEntrada && i < posicionPrimera) {
                posicionPrimera = i;
            }
        }
    }
}

int main()
{
    cout << "-----------------------------------" << endl;
    cout << "----------# Ejercicio 3 #----------" << endl;
    cout << "-----------------------------------" << endl;
    string alfabeto = "abcdefghijklmnopqrstuvwxyz";
    int posicion = 25;
    cualVienePrimero(alfabeto, posicion);
    cout << "# La letra que viene primero es: " << alfabeto[posicion] << endl;
    return 0;
}