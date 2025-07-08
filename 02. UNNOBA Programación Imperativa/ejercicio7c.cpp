#include <iostream>
using namespace std;

// Ejercicio 7:
// Escribir un programa que visualice el más grande, el más pequeño 
// y el promedio de N números enteros. El valor de N se solicita al 
// usuario al comienzo del programa y luego se le permite introducir los números.

// FUNCION MAYORMENORPROMEDIO
void mayorMenorPromedio(int n)
{
    int numeroEntrada, mayor=-999, menor=999;
    float promedio=0;
    for (int i=0; i<n; i++) {
        cout << "> Ingrese un numero entero: ";
        cin >> numeroEntrada;
        promedio += numeroEntrada;
        if (numeroEntrada > mayor) {
            mayor = numeroEntrada;
        } else if (numeroEntrada < menor) {
            menor = numeroEntrada;
        }
    }
    promedio /= n;
    cout << "# El promedio total es: " << promedio << endl;
    cout << "# El numero mayor ingresado es: " << mayor << endl;
    cout << "# El numero menor ingresado es: " << menor << endl;
}

// MAIN
int main()
{
    cout << "-------------------------------------" << endl;
    cout << "---------- # Ejercicio 7 # ----------" << endl;
    cout << "-------------------------------------" << endl;
    int entradaN;
    cout << "> Establezca la cantidad de numeros ('n') a ingresar: ";
    cin >> entradaN;
    mayorMenorPromedio(entradaN);
    return 0;
}