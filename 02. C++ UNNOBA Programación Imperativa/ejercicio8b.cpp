#include <iostream>
#include <string>
using namespace std;

// Ejercicio 8:
// Leer una secuencia de caracteres que finaliza con la letra minúscula 'n',
// la cual debe ser procesada. Contabilizarla cantidad de cada una de las
// letras vocales minúsculas. También informar la cantidad de caracteres leídos
// en total y el porcentaje de letras vocales minúsculas encontradas en la secuencia.
void contarVocales()
{
    char caracterEntrada;
    string vocales = "aeiou";
    float cantidadVocales = 0, cantidadTotal = 0, porcentajeVocales = 0;
    do {
        cout << "> Ingrese una letra ('n' para terminar):  ";
        cin >> caracterEntrada;
        cantidadTotal++;
        for (int i=0; i<vocales.length(); i++) {
            if (caracterEntrada == vocales[i]) {
                cantidadVocales++;
                break;
            }
        }
    } while (caracterEntrada != 'n');
    porcentajeVocales = (cantidadVocales * 100.0) / cantidadTotal;

    cout << "# La cantidad total de caracteres ingresados es: " << cantidadTotal << endl;
    cout << "# La cantidad de vocales minusculas ingresadas es: " << cantidadVocales << endl;
    cout << "# El porcentaje de vocales minusculas ingresadas es: %" << porcentajeVocales << endl;
}

int main()
{
    cout << "--------------------------------" << endl;
    cout << "-------- # Ejercicio 8 #--------" << endl;
    cout << "--------------------------------" << endl;
    contarVocales();
    return 0;
}