#include <iostream>
using namespace std;

// Contar la cantidad de números negativos leídos desde teclado. 
// La serie termina con el valor cero (0), el cual no debe procesarse. 
// ¿Qué cambiaría si debiera procesarse también el último número ingresado (0)?

int contarNegativos()
{
    int numeroEntrada, cantidadNegativos = 0;
    do {
        cout << "> Ingrese un numero entero (0 para salir): ";
        cin >> numeroEntrada;
        if (numeroEntrada < 0) {
            cantidadNegativos++;
        }
    } while (numeroEntrada != 0);
    return cantidadNegativos;
}

int main()
{
    cout << "-------------------------------" << endl;
    cout << "--------# Ejercicio 2 #--------" << endl;
    cout << "-------------------------------" << endl;
    int negativos = contarNegativos();
    cout << "# La cantidad de negativos ingresados es: " << negativos << endl;
    return 0;
}