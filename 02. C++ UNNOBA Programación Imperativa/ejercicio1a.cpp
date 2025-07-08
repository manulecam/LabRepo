#include <iostream>
using namespace std;

// Escribir un programa que imprima los números del 1 al 100, 
// mostrando de a cinco por renglón.

int main() {
    cout << "#Ejercicio 1#" << endl;

    for (int i=1; i<=100; i++) {
        cout << i << " ";
        if (i%5==0) {
            cout << endl;
        }
    }

    return 0;
}