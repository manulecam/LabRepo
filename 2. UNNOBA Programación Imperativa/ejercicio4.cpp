#include <iostream>
using namespace std;

// Ejercicio 4.
// Escribir un programa que, dado un número (entero largo) expresado en segundos, informe el equivalente en
// horas, minutos y segundos.

int main() {
    int input;
    float horas, minutos, minutosDecimal, segundos;
    cout << "> Ingrese un numero en segundos: ";
    cin >> input;

    horas = (input / 60) / 60;
    cout << "* Horas: " << horas << endl;
    minutos = (input / 60) - (60 * horas);
    minutosDecimal = (input / 60.0) - (60 * horas);
    cout << "* Minutos: " << minutos << endl;
    segundos = int((minutosDecimal - minutos) * 60);
    cout << "* Segundos: " << segundos << endl;

    cout << "# El numero ingresado en formato HH:MM:SS es: " << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}
