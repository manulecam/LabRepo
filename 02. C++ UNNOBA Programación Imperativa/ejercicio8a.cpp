#include <iostream>
#include <string>
using namespace std;

// Ejercicio 8:
// Leer una secuencia de caracteres que finaliza con la letra minúscula 'n',
// la cual debe ser procesada. Contabilizarla cantidad de cada una de las
// letras vocales minúsculas. También informar la cantidad de caracteres leídos
// en total y el porcentaje de letras vocales minúsculas encontradas en la secuencia.

void contarLetras()
{
    char entradaLetra;
    string vocales = "aeiou";
    int cantidadCaracteres = 0, cantidadVocales = 0, porcentajeVocales = 0;
    
    do 
    {
        cout << "> Ingrese una letra ('n' para terminar): ";
        cin >> entradaLetra;
        entradaLetra = tolower(entradaLetra);
        cantidadCaracteres++;

        for (int i=0; i<vocales.length(); i++) {
            if (entradaLetra == vocales[i]) {
                cantidadVocales ++;
                break;
            }
        }
    } while (entradaLetra != 'n');

    porcentajeVocales = (cantidadVocales*100) / cantidadCaracteres;
    cout << "# La cantidad de caracteres ingresados es: " << cantidadCaracteres << endl;
    cout << "# La cantidad de vocales minusculas ingresadas es: " << cantidadVocales << endl;
    cout << "# El porcentaje de vocales minusculas es: %" << porcentajeVocales << endl;
}

int main()
{
    cout << "---------------------------------" << endl;
    cout << "-------- # Ejercicio 8 # --------" << endl;
    cout << "---------------------------------" << endl;
    contarLetras();
    cout << "* Programa finalizado..." << endl;
    return 0;
}