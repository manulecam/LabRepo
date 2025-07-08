#include <iostream>
#include <string>
using namespace std;

void cualVienePrimero(string alfabeto, int & primerLetra) 
{
    // Declaracion de variables
    char letraEntrada;
    // Bucle de 3 iteraciones para la entrada y procesamiento
    for (int i=0; i<3; i++) {
        cout << "> Ingrese una letra: ";
        cin >> letraEntrada;
        // Bucle que recorre el abecedario
        for (int j=0; j<alfabeto.length(); j++) {
            if (letraEntrada == alfabeto[j] && j < primerLetra) {
                primerLetra = j;
            }
        }
    }
}

int main()
{
    string abecedario = "abcdefghijklmnopqrstuvwxyz";
    int letraMenor = 25;
    cualVienePrimero(abecedario, letraMenor);
    cout << "# La letra que primero viene es: " << abecedario[letraMenor] << endl;
}