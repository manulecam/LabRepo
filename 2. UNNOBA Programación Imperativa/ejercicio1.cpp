#include <iostream>
using namespace std;

// Escribir un programa que imprima los números del 1 al 100, mostrando de a cinco por renglón.
int main() {
    int contador = 1;
    while (contador<=100) {
        
        if (contador % 5 == 0) {
            cout << contador << endl;
            contador ++;
        } else {
            cout << contador << " ";
            contador ++;
        }
    }
    return contador;
}