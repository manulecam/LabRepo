#include <iostream>
#include <string>
using namespace std;

// Ejercicio 3.
// Leer tres letras desde teclado e indicar cuál de ellas 
// viene primero en el alfabeto.
char primerLetra() {
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    int posicionMenor = 25;
    char input;
    for (int i=0; i<3; i++) {
        cout << "> Ingrese una letra minuscula: ";
        cin >> input;
        for (int j=0; j<=25; j++) {
            if (input == abecedario[j] && j < posicionMenor) {
                posicionMenor = j;
                break;
            }
        }
    }
    return abecedario[posicionMenor];
}


int main() {
    cout << "# Ejercicio 3 #" << endl;
    char letra = primerLetra();
    cout << "# La letra ingresada que viene primero en el alfabeto es: '" << letra << "'" << endl;
    return 0;
}