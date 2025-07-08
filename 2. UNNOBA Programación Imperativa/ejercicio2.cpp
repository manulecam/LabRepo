#include <iostream>
using namespace std;

// Contar la cantidad de números negativos leídos desde teclado. 
// La serie termina con el valor cero (0), el cual no debe procesarse. 
// ¿Qué cambiaría si debiera procesarse también el último número ingresado (0)?

int main() {
    int contadorNegativos = 0;
    int entrada;

    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> entrada;

        if (entrada > 0) {
            cout << "Ingreso un numero positivo y no sera contado. Ingrese otro numero." << endl;
            continue;
        } else if (entrada < 0) {
            contadorNegativos ++;
            continue;
        }

    } while (entrada != 0);

    cout << "La cantidad de numeros negativos es: " << contadorNegativos;

    return contadorNegativos;
}

// Si debiéramos procesar también el último 0 ingresado, simplemente podríamos
// aumentar el contador de negativos en 1 al momento de retornarlo o mostrarlo
// por pantalla.