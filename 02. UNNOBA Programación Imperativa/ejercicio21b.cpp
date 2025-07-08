#include <iostream>
#include <string>
using namespace std;

void funcion(int &x, int &y, int z)
{
    x++;
    y = 12;
    z = 20;
}
int main()
{
    int a = 0;
    int b = 9;
    int c = 17;
    funcion(a, c, b);
    cout << "# Variable a: " << a << endl;
    cout << "# Variable b: " << b << endl;
    cout << "# Variable c: " << c << endl;
    return 0;
}
