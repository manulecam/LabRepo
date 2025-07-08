#include <iostream>
using namespace std;

// Ejercicio 7:
// Escribir un programa que visualice el más grande, el más pequeño 
// y el promedio de N números enteros. El valor de N se solicita al 
// usuario al comienzo del programa y luego se le permite introducir los números.

int mayorMenorPromedio() {
    cout << "> test mayorMenorPromedio() <" << endl;
    int inputN, numberInput;
    float promedio = 0.0;
    int numeroMayor = -999;
    int numeroMenor = 999;
    cout << "> Ingrese la cantidad de numeros con la que desea operar: ";
    cin >> inputN;
    for (int i=0; i< inputN; i++) {
        cout << "> Ingrese un numero entero: ";
        cin >> numberInput;
        promedio += float(numberInput);
        if (numberInput > numeroMayor) {
            numeroMayor = numberInput;
        } 
        if (numberInput < numeroMenor) {
            numeroMenor = numberInput;
        }
    }
    promedio /= float(inputN);

    cout << "# El numero mayor es: " << numeroMayor << endl;
    cout << "# El numero menor es: " << numeroMenor << endl;
    cout << "# El promedio es: " << promedio << endl;
    return 0;
}

int main() {
    cout << "# Ejercicio 7 #" << endl;
    mayorMenorPromedio();
    return 0;
}