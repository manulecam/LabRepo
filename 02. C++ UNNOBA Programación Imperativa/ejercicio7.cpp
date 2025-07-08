#include <iostream>
using namespace std;

// Ejercicio 7:
// Escribir un programa que visualice el más grande, el más pequeño 
// y el promedio de N números enteros. El valor de N se solicita al 
// usuario al comienzo del programa y luego se le permite introducir los números.

int main() {
    cout << "# Ejercicio 7 #" << endl;
    int cantidadNumeros, input; 
    int numeroMayor = -999, numeroMenor = 999, promedio = 0;
    
    cout << "> Ingrese la cantidad de numeros a operar: ";
    cin >> cantidadNumeros;

    for (int i=0; i < cantidadNumeros; ++i) {
        cout << "> Ingrese un numero entero: ";
        cin >> input;
        promedio += input;

        if (input > numeroMayor) {
            numeroMayor = input;
        }

        if(input < numeroMenor) {
            numeroMenor = input;
        }
    }
    promedio /= cantidadNumeros;
    cout << "# Numero mayor: " << numeroMayor << endl;
    cout << "# Numero menor: " << numeroMenor << endl;
    cout << "# Promedio: " << promedio << endl;

    return 0;
}