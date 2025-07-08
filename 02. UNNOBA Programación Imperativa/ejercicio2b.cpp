#include <iostream>
using namespace std;

// Contar la cantidad de números negativos leídos desde teclado. 
// La serie termina con el valor cero (0), el cual no debe procesarse. 

int main()
{
    int inputNumero, contadorNegativos = 0;
    do
    {
        cout << "> Ingrese un numero (0 para terminar): ";
        cin >> inputNumero;
        if (inputNumero < 0) {
            contadorNegativos++;
            continue;
        }
    } while (inputNumero != 0);
    cout << "# La cantidad de negativos ingresados es: " << contadorNegativos << endl;
    cout << "# Programa finalizado..." << endl;
    return contadorNegativos;
}