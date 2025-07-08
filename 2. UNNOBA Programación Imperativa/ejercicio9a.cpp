#include <iostream>
using namespace std;

// Ejercicio 9: escribir un bucle para validar lo ingresado por el usuario.

// * Se debe solicitar el ingreso de un carácter y sólo se debe interrumpir el bucle 
// cuando el usuario haya ingresado el carácter 's' o el carácter 'n'. 
// * La solicitud de ingreso del dato debe hacerse al menos una vez antes de evaluar 
// si el bucle debe interrumpirse o no. No utilizar "while true" como condición.
// * A continuación, si el usuario ingresó la letra 's', imprimir "usted eligió SÍ"
// y, si ingresó la 'n' imprimir "usted eligió NO".

// *Nota: para evaluar la condición de corte del bucle considerando mayúsculas y minúsculas 
// es posible utilizar las funciones toupper(carácter) y tolower(carácter), que convierten
// el carácter pasado por parámetro a mayúscula o a minúscula respectivamente.

void validarCaracter()
{
    char entradaCaracter;
    do
    {
        cout << "> Ingrese un caracter ('n' para terminar): ";
        cin >> entradaCaracter;
        entradaCaracter = tolower(entradaCaracter);
        if (entradaCaracter == 's') {
            cout << "# Usted eligio SI." << endl;
        } else if (entradaCaracter == 'n') {
            cout << "# Usted eligio NO." << endl;
        }
    } while (entradaCaracter != 'n');
}

int main()
{
    cout << "---------------------------------" << endl;
    cout << "-------- # Ejercicio 9 # --------" << endl;
    cout << "---------------------------------" << endl;
    validarCaracter();
    return 0;
}