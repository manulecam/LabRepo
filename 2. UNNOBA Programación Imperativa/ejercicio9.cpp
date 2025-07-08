#include <iostream>
using namespace std;

// Ejercicio 9: escribir un bucle para validar lo ingresado por el usuario.

// * Se debe solicitar el ingreso de un carácter y sólo se debe interrumpir el bucle 
// uando el usuario haya ingresado el carácter 's' o el carácter 'n'. 
// * La solicitud de ingreso del dato debe hacerse al menos una vez antes de evaluar 
// si el bucle debe interrumpirse o no. No utilizar "while true" como condición.
// * A continuación, si el usuario ingresó la letra 's', imprimir "usted eligió SÍ"
// y, si ingresó la 'n' imprimir "usted eligió NO".

// *Nota: para evaluar la condición de corte del bucle considerando mayúsculas y minúsculas 
// es posible utilizar las funciones toupper(carácter) y tolower(carácter), que convierten
// el carácter pasado por parámetro a mayúscula o a minúscula respectivamente.

int validarIngreso() {
    char charInput;
    
    do
    {
        cout << "> Ingrese un caracter ('s' o 'n' para terminar): ";
        cin >> charInput;
        charInput = tolower(charInput);

        if (charInput == 'n') {
            cout << "# Usted eligio NO" << endl;
        } else if (charInput == 's') {
            cout << "# Usted eligio SI" << endl;
        }
    } while (charInput != 's' && charInput != 'n');    

    return 0;
}

int main()
{
    cout << "-----------------------------------------" << endl;
    cout << "-------------# Ejercicio 8 #-------------" << endl;
    cout << "-----------------------------------------" << endl;
    validarIngreso();
    return 0;
}