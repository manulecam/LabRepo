#include <iostream>
using namespace std;

// Ejercicio 5:
// Escribir un programa que lea una fecha en el formato numérico AAAAMMDD 
// y la informe con el formato DD/MM/AAAA.
// Precondición: los valores ingresados corresponden a una fecha válida.

int main() {
    int fechaInicial, dia, mes, año, fechaFinal;

    cout << "Ingrese una fecha en el formato AAAAMMDD: ";
    cin >> fechaInicial;

    dia = fechaInicial % 100;
    fechaInicial /= 100;
    mes = fechaInicial % 100;
    fechaInicial /= 100;
    año = fechaInicial;
    cout << dia << "/" << mes << "/" << año;

    return fechaFinal;
}