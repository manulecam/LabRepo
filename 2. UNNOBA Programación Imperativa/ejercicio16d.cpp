#include <iostream>
using namespace std;

// Ejercicio 16: escribir una función que reciba un punto de coordenadas (X,Y) desde el teclado 
// y devuelva TRUE si el punto pertenece a la recta de ecuación Y = 3X + 2 ó FALSE en caso contrario.
// Nota: sólo se debe hacer la función, aunque puede ser útil realizar la invocación y utilizar 
// el valor de retorno para imprimir algo en pantalla, a fines de probar el algoritmo.

bool perteneceRecta(int x, int y)
{
    if (((3*x)+2)==y) {
        cout << "# TRUE #" << endl;
        return true;
    } else {
        cout << "# FALSE #" << endl;
        return false;
    }
}

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 16 #------------" << endl;
    cout << "----------------------------------------" << endl;
    int a, b;
    cout << "> Ingrese el primer numero (punto 'x'): ";
    cin >> a;
    cout << "> Ingrese el segundo numero (punto 'y'): ";
    cin >> b;
    perteneceRecta(a, b);
    return 0;
}