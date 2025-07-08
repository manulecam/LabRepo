#include <iostream>
using namespace std;

// Ejercicio 6:
// Escribir un programa que calcule la suma de una determinada 
// cantidad de elementos de la serie armónica:
// 1/1 + 1/2 + 1/3 + … + 1/n, donde n se especifica por el usuario.

int main() {
    int input;
    float sumaTotal = 0.0;

    cout << "> Ingrese un numero: ";
    cin >> input;

    for (float i=1.0; i<=input; i++) {
        sumaTotal += (1.0/i);
    }
    
    cout << "# El resultado de la suma de la serie armonica es: " << sumaTotal << endl;
    return sumaTotal;
}