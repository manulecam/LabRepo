#include <iostream>
using namespace std;

// Ejercicio 9: escribir un bucle para validar lo ingresado por el usuario.

// * Se debe solicitar el ingreso de un carácter y sólo se debe interrumpir el bucle 
// uando el usuario haya ingresado el carácter 's' o el carácter 'n'. 
// * La solicitud de ingreso del dato debe hacerse al menos una vez antes de evaluar 
// si el bucle debe interrumpirse o no. No utilizar "while true" como condición.
// * A continuación, si el usuario ingresó la letra 's', imprimir "usted eligió SÍ"
// y, si ingresó la 'n' imprimir "usted eligió NO".

void validarEntrada()
{
    char caracterEntrada;
    do {
        cout << "> Ingrese un caracter ('n' o 's' para terminar): ";
        cin >> caracterEntrada;
        if (caracterEntrada == 's') {
            cout << "# Usted eligio SI." << endl;
            break;
        } else if (caracterEntrada == 'n') {
            cout << "# Usted eligio NO." << endl;
        }
    } while (caracterEntrada != 'n' && caracterEntrada != 's');
}

int main()
{
    cout << "-----------------------------------" << endl;
    cout << "----------# Ejercicio 9 #----------" << endl;
    cout << "-----------------------------------" << endl;
    validarEntrada();
    return 0;
}