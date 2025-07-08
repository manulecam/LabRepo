#include <iostream>
#include <string>
using namespace std;

// Ejercicio 3.
// Leer tres letras desde teclado e indicar cuál de ellas 
// viene primero en el alfabeto.

int cualVienePrimero()
{
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    int letraMenor = 25;
    char inputLetra;

    for (int i=0; i<3; i++) {
        cout << "> Ingrese una letra: ";
        cin >> inputLetra;

        for (int i=0; i < abecedario.length(); i++) {
            if (inputLetra == abecedario[i] && i < letraMenor) {
                letraMenor = i;
                break;
            }
        }
    }
    
    cout << "# La letra menor ingresada es: " << abecedario[letraMenor] << endl;
    return letraMenor;
}

int main()
{
    cout << "---------------------------------" << endl;
    cout << "-------- # Ejercicio 3 # --------" << endl;
    cout << "---------------------------------" << endl;

    cualVienePrimero();

    return 0;
}