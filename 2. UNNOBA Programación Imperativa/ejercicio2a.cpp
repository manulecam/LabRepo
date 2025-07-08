#include <iostream>
using namespace std;

// Contar la cantidad de números negativos leídos desde teclado. 
// La serie termina con el valor cero (0), el cual no debe procesarse. 

int contarNegativos() {
    int input;
    int contadorNegativos = 0;
    do {
        cout << "> Ingrese un numero (0 para terminar): ";
        cin >> input;
        if (input < 0) {
            contadorNegativos++;
        }
    } while (input != 0);
    return contadorNegativos;
}


int main() {
    cout << "# Ejercicio 2 #" << endl;
    int cantidadNegativos = contarNegativos();
    cout << "# Cantidad de negativos ingresados: " << cantidadNegativos;
    return 0;
}


