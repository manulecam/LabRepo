
#include <iostream>
using namespace std;

// Ejercicio 7:
// Escribir un programa que visualice el más grande, el más pequeño 
// y el promedio de N números enteros. El valor de N se solicita al 
// usuario al comienzo del programa y luego se le permite introducir los números.

void mayorMenorPromedio(float cantidadN)
{
    int numeroEntrada, numeroMayor = -999, numeroMenor = 999, i = 0;
    float promedio = 0;
    for (i; i<cantidadN; i++) {
        cout << "> Ingrese un numero entero: ";
        cin >> numeroEntrada;
        promedio += numeroEntrada;
        if (numeroEntrada < numeroMenor) {
            numeroMenor = numeroEntrada;
            continue;
        } else if (numeroEntrada > numeroMayor) {
            numeroMayor = numeroEntrada;
            continue;
        }
    }
    promedio /= cantidadN;
    cout << "# El PROMEDIO de la suma total de numeros ingresados es: " << promedio << endl;
    cout << "# El MENOR de los numeros ingresados es: " << numeroMenor << endl;
    cout << "# El MAYOR de los numeros ingresados es: " << numeroMayor << endl;
}

int main() 
{
    cout << "---------------------------------" << endl;
    cout << "-------- # Ejercicio 7 # --------" << endl;
    cout << "---------------------------------" << endl;
    float cantidadNumeros;
    cout << "> Especifique la cantidad N de numeros enteros que ingresara: ";
    cin >> cantidadNumeros;
    mayorMenorPromedio(cantidadNumeros);
    return 0;
}