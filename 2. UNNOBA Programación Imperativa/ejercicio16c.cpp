#include <iostream>
using namespace std;
// Y = 3X + 2
bool perteneceRecta(int x, int y) {
    
    if (((3*x )+ 2) == y) {
        return true;
    } else {
        return false;
    }
}
int main() 
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 16 #------------" << endl;
    cout << "----------------------------------------" << endl;
    int a, b;
    cout << "# A continuacion, se le solicitara el ingreso de un punto (x, y)." << endl;
    cout << "> Ingrese el primer numero 'x': ";
    cin >> a;
    cout << "> Ingrese el segundo numero 'y': ";
    cin >> b;
    cout << perteneceRecta(a, b) << endl;
    return 0;
}