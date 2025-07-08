#include <iostream>
using namespace std;

// Escribir una función que reciba un punto de coordenadas (X,Y) desde el teclado y devuelva TRUE si el punto
// pertenece a la recta de ecuación Y = 3X + 2 ó FALSE en caso contrario.
// Nota: sólo se debe hacer la función, aunque puede ser útil realizar la invocación y utilizar el valor de retorno para
// imprimir algo en pantalla, a fines de probar el algoritmo

bool perteneceRecta(int x, int y) 
{
    if (y==(3*x)+2) {
        return true;
    } else {
        return false;
    }
}

int main() 
{
    cout << "------------------------------------------" << endl;
    cout << "------------ # Ejercicio 16 # ------------" << endl;
    cout << "------------------------------------------" << endl;
    bool pertenece;
    int a, b;
    cout << "# A continuacion, se le solicitara el ingreso de un punto (x, y)." << endl;
    cout << "> Ingrese el primer numero 'x': ";
    cin >> a;
    cout << "> Ingrese el segundo numero 'y': ";
    cin >> b;
    pertenece = perteneceRecta(a, b);
    if (pertenece == true) {
        cout << "# El punto ingresado SI pertenece a la recta. " << endl;
    } else {
        cout << "# El punto ingresado NO pertenece a la recta. " << endl;
    }
    
    return 0;
}