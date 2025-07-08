#include <iostream>
#include <string>
using namespace std;

// Ejercicio 3.
// Leer tres letras desde teclado e indicar cuál de ellas 
// viene primero en el alfabeto.

int main() {
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    int letraMinima = 25;
    char entrada;

    for (int i=1; i<=3; i++) { 
        cout << "Ingrese una letra: ";
        cin >> entrada;

        for (int i=0; i < abecedario.length(); i++) {
            if (entrada == abecedario[i] && i < letraMinima) {
                letraMinima = i;
                break;
            };
        }
    }
    cout << "Menor letra ingresada: " << abecedario[letraMinima];
    
    return abecedario[letraMinima];
}

