#include <iostream>
using namespace std;

// --------------------------------FUNCIONES--------------------------------------------
// Opcion A
void invertirNumero() {
    int numeroEntrada, numeroInvertido = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> numeroEntrada;
    while (numeroEntrada != 0) {
        numeroInvertido += numeroEntrada % 10;
        numeroEntrada /= 10;
        if (numeroEntrada == 0) {
            numeroInvertido += numeroEntrada;
            break;
        } else {
            numeroInvertido *= 10;
        }
    }
    cout << "# Inversion exitosa. El numero invertido es: " << numeroInvertido << endl;
}

// Opcion B
void sumatoriaDigitos() {
    int numeroEntrada, sumatoriaTotal = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> numeroEntrada;
    while (numeroEntrada != 0) {
        sumatoriaTotal += numeroEntrada % 10;
        numeroEntrada /= 10;
    }
    cout << "# La suma total de los digitos es: " << sumatoriaTotal << endl;
}

// Opcion C
void sonMultiplos() {
    int x, y;
    cout << "# A continuacion, se le solicitara el ingreso de dos numeros enteros. " << endl;
    cout << "> Ingrese el primer numero entero: ";
    cin >> x;
    cout << "> Ingrese el segundo numero entero: ";
    cin >> y;
    if ((x % y == 0) || (y % x == 0)) {
        cout << "# Los numeros ingresados SI son multiplos." << endl;
    } else {
        cout << "# Los numeros ingresados NO son multiplos." << endl;
    }
}
// ------------------------------------------------------------------------------------


// --------------------------------MENU------------------------------------------------
// SWITCH DE OPCIONES
void switchPrincipal(char opcionArg) {
    switch (opcionArg) {
        case 'A':
            cout << "# Eligio la opcion de 'INVERTIR NUMERO' #" << endl;
            invertirNumero();
            break;
        case 'B':
            cout << "# Eligio la opcion de 'SUMATORIA DE DIGITOS' #" << endl;
            sumatoriaDigitos();
            break;
        case 'C':
            cout << "# Eligio la opcion de 'SABER SI SON MULTIPLOS' #" << endl;
            sonMultiplos();
            break;
        case 'D':
            cout << "# Saliendo del programa..." << endl;
            break;
        default:
            cout << "# Opcion invalida, vuelva a intentarlo." << endl;
            break;
    }
}

// INTERFAZ
void interfazMenu()
{
    cout << "-------------------------------" << endl;
    cout << "#### INTERFAZ DE SELECCION ####" << endl;
    cout << "-------------------------------" << endl;
    cout << "A. Invertir un numero" << endl;
    cout << "B. Sumatoria total de digitos" << endl;
    cout << "C. Determinar si son multiplos" << endl;
    cout << endl;
    cout << "D. Salir";
    cout << endl;
    cout << "> Ingrese la opcion deseada: ";
}

// MENU
void menuPrincipal() {
    char opcionIngresada;
    do {
        interfazMenu();
        cin >> opcionIngresada;
        opcionIngresada = toupper(opcionIngresada);
        cout << endl;
        switchPrincipal(opcionIngresada);
    } while (opcionIngresada != 'D');
}

// -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- -- --  -- --
// MAIN
int main()
{   
    cout << "-------------------------------" << endl;
    cout << "------ # Ejercicio 10 # -------" << endl;
    menuPrincipal();
    return 0;
}
// ------------------------------------------------------------------------------------