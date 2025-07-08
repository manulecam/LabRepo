#include <iostream>
#include <string>
using namespace std;
// Ejercicio 8:
// Leer una secuencia de caracteres que finaliza con la letra minúscula 'n',
// la cual debe ser procesada. Contabilizarla cantidad de cada una de las
// letras vocales minúsculas. También informar la cantidad de caracteres leídos
// en total y el porcentaje de letras vocales minúsculas encontradas en la secuencia.

void contarMinusculas()
{
    string vocales = "aeiou";
    int contadorVocales = 0, contadorTotal = 0;
    float porcentajeVocales = 0;
    char caracterEntrada;
    do {
        cout << "> Ingrese un caracter ('n' para finalizar): ";
        cin >> caracterEntrada;
        contadorTotal++;
        for (int i=0; i<vocales.length(); i++) {
            if (caracterEntrada == vocales[i]) {
                contadorVocales++;
                break;
            }
        }
    } while (caracterEntrada != 'n');
    porcentajeVocales = (float(contadorVocales) * 100.0) / float(contadorTotal);
    cout << "# La cantidad total de caracteres ingresados es: " << contadorTotal << endl;
    cout << "# La cantidad total de vocales minusculas ingresadas es: " << contadorVocales << endl;
    cout << "# El porcentaje de vocales minusculas es: %" << porcentajeVocales << endl;
}

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "------------ # Ejercicio 8 # ------------" << endl;
    cout << "-----------------------------------------" << endl;
    contarMinusculas();
    return 0;
}