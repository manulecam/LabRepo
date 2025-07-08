#include <iostream>
using namespace std;

void intercambiarValores(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}
int main()
{
    int a = 10;
    int b = 25;
    intercambiarValores(a, b);
    cout << "# Variable a: " << a << endl;
    cout << "# Variable b: " << b << endl;
    return 0;
}
