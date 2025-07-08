#include <iostream>
using namespace std;

void comprobarEcuacion()
{
    int x, y;
    cout << "# A continuacion, se le solicitara el ingreso de un punto de coordenadas (x, y)." << endl;
    cout << "> Ingrese el punto 'x': ";
    cin >> x;
    cout << "> Ingrese el punto 'y': ";
    cin >> y;
    if (((3*x) + 2) == y) {
        cout << "# TRUE #" << endl;
    } else {
        cout << "# FALSE #" << endl;
    }
}

int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 17 # --------" << endl;
    cout << "----------------------------------" << endl;
    comprobarEcuacion();
    return 0;
}