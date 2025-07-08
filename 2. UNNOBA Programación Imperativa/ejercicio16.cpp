#include <iostream>
using namespace std;

// Ejercicio 16: escribir una función que reciba un punto de coordenadas (X,Y) desde el teclado 
// y devuelva TRUE si el punto pertenece a la recta de ecuación Y = 3X + 2 ó FALSE en caso contrario.
// Nota: sólo se debe hacer la función, aunque puede ser útil realizar la invocación y utilizar 
// el valor de retorno para imprimir algo en pantalla, a fines de probar el algoritmo.

int perteneceRecta(int x, int y)
{

    if (((3*x)+2) == y) {
        cout << "# El punto de coordenadas SI pertenece a la recta 'Y = 3X + 2'" << endl;
        return true;
    } else {
        cout << "# El punto de coordenadas NO pertenece a la recta 'Y = 3X + 2'" << endl;
        return false;
    }
    return 0;
}

int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 16 # --------" << endl;
    cout << "----------------------------------" << endl;
    int a, b;
    cout << "> Ingrese el primer numero: ";
    cin >> a;
    cout << "> Ingrese el segundo numero: ";
    cin >> b;
    perteneceRecta(a, b);
    return 0;
}