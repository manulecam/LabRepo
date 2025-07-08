#include <iostream>
using namespace std;

int main() {
    int numeroEntrada, contadorNegativos = 0;
    do {
        cout << "> Ingrese un numero entero: ";
        cin >> numeroEntrada;
        if (numeroEntrada < 0) {
            contadorNegativos++;
        }
    } while (numeroEntrada != 0);
    cout << "# La cantidad de numeros negativos ingresados es: " << contadorNegativos << endl;
    return 0;
}