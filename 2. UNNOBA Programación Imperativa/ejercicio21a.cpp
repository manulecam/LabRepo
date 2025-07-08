#include <iostream>
using namespace std;

void funcion(int &x, int y, int &z)
{
    x++;
    y = 12;
    z = 20;
}
int main()
{
    int a = 0;
    int b = 9;
    funcion(a, 17, b);
    cout << "# Variable a: " << a << endl;
    cout << "# Variable b: " << b << endl;
    return 0;
}