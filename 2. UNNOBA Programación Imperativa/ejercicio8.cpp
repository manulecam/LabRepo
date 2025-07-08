#include <iostream>
#include <string>
using namespace std;

// Ejercicio 8:
// Leer una secuencia de caracteres que finaliza con la letra minúscula 'n',
// la cual debe ser procesada. Contabilizarla cantidad de cada una de las
// letras vocales minúsculas. También informar la cantidad de caracteres leídos
// en total y el porcentaje de letras vocales minúsculas encontradas en la secuencia.

int operarCaracteres()
{
    char input = 'a';
    string vocales = "aeiou";
    int cantidadVocales = 0, porcentajeVocales = 0, cantidadTotal = 0;
    
    do
    {
        cout << "> Ingrese una letra ('n' para terminar): ";
        cin >> input;
        cantidadTotal ++;
        for (int i=0; i < vocales.length(); i++) {
            if (input == vocales[i]) {
                cantidadVocales ++;
                break;
            }
        }
    } while (input != 'n');
    porcentajeVocales = (cantidadVocales * 100) / cantidadTotal;

    cout << "# Cantidad total de letras: " << cantidadTotal << endl;
    cout << "# Cantidad de vocales minusculas: " << cantidadVocales << endl;
    cout << "# Porcentaje de vocales minusculas: %" << porcentajeVocales << endl;
    return 0;
}

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "-------------# Ejercicio 8 #-------------" << endl;
    cout << "-----------------------------------------" << endl;
    operarCaracteres();
    return 0;
}