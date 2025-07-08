#include <iostream>
using namespace std;

// Ejercicio 6:
// Escribir un programa que calcule la suma de una determinada 
// cantidad de elementos de la serie armónica:
// 1/1 + 1/2 + 1/3 + … + 1/n, donde n se especifica por el usuario.

float sumaArmonica() {
    float inputN, sumaTotal;
    cout << "> Ingrese un numero 'n': ";
    cin >> inputN;
    for (float i=1.0; i<=inputN; i++) {
        sumaTotal += (1.0/float(i));
    }
    return sumaTotal;
}

int main() {
    cout << "# Ejercicio 6 #" << endl;
    float resultado = sumaArmonica();
    cout << "# El resultado de la suma de la serie armonica es: " << resultado << endl;
    return 0;
}