#include <iostream>
using namespace std;

int main()
{
    cout << "-----------------------------------" << endl;
    cout << "----------# Ejercicio 1 #----------" << endl;
    cout << "-----------------------------------" << endl;
    int i = 1;
    for (i; i<=100; i++) {
        cout << i << " ";
        if (i % 5 == 0) {
            cout << endl;
        }
    }
    return 0;
}