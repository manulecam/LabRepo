#include <iostream>
using namespace std;

// Funciones operacionales
void invertirNumero() 
{
    int numeroEntrada, numeroInvertido = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> numeroEntrada;
    while (numeroEntrada!=0) {
        numeroInvertido += numeroEntrada %10;
        numeroEntrada /= 10;
        if (numeroEntrada == 0) {
            break;
        } else {
            numeroInvertido *= 10;
        }
    }
    cout << "# Inversion exitosa. El numero invertido es: " << numeroInvertido << endl; 
}

void sumarDigitos() 
{
    int numeroEntrada, sumaTotal = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> numeroEntrada;
    while (numeroEntrada != 0) {
        sumaTotal += numeroEntrada % 10;
        numeroEntrada /= 10;
        if (numeroEntrada==0) {
            break;
        }
    }
    cout << "# La suma total de los digitos es: " << sumaTotal << endl;
}

void sonMultiplos()
{
    int numeroA, numeroB;
    cout << "# A continuacion, se le solicitara el ingreso de dos numeros enteros." << endl;
    cout << "> Ingrese el primer numero: ";
    cin >> numeroA;
    cout << "> Ingrese el segundo numero: ";
    cin >> numeroB;
    if (numeroA%numeroB==0 || numeroB%numeroA==0) {
        cout << "# Los numeros ingresados SI son multiplos." << endl;
    } else {
        cout << "# Los numeros ingresados NO son multiplos. " << endl;
    }
}

// Menu
void operarNumero() {
    char opcionMenu;
    do {
        cout << "----------# Menu Principal #----------" << endl;
        cout << "A. Invertir numero" << endl;
        cout << "B. Sumatoria de digitos" << endl;
        cout << "C. Decir si son multiplos" << endl;
        cout << endl;
        cout << "D. Salir" << endl;
        cout << "> Elija una opcion: ";
        cin >> opcionMenu;
        opcionMenu = toupper(opcionMenu);

        switch (opcionMenu) {
            case 'A':
                invertirNumero();
                continue;

            case 'B':
                sumarDigitos();
                continue;

            case 'C':
                sonMultiplos();
                continue;

            case 'D':
                cout << "# Saliendo... " << endl;
                break;

            default:
                cout << "# Opcion invalida, intentelo nuevamente." << endl;
        }


    } while (opcionMenu != 'D');
}

// Main
int main()
{
    cout << "--------------------------------------" << endl;
    cout << "-----------# Ejercicio 10 #-----------" << endl;
    cout << "--------------------------------------" << endl;
    operarNumero();
    return 0;
}