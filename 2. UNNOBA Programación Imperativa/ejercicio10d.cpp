#include <iostream>
using namespace std;

void interfazMenu()
{
    cout << "------> Menu Principal <------" << endl;
    cout << endl;
    cout << "A. Invertir numero" << endl;
    cout << "B. Sumatoria de digitos" << endl;
    cout << "C. Decir si son multiplos" << endl;
    cout << "D. Salir" << endl;
    cout << endl;
}

void invertirNumero()
{
    int numeroEntrada, numeroInvertido;
    cout << "> Ingrese un numero: ";
    cin >> numeroEntrada;
    while (numeroEntrada != 0) {
        numeroInvertido += numeroEntrada % 10;
        numeroEntrada /= 10;
        if (numeroEntrada == 0) {
            break;
        }
        numeroInvertido *= 10;
    }
    cout << "# El numero invertido es: " << numeroInvertido << endl;
    cout << endl;
};

void sumatoriaDigitos()
{
    int numeroEntrada, sumaDigitos;
    cout << "> Ingrese un numero: ";
    cin >> numeroEntrada;
    while (numeroEntrada != 0) {
        sumaDigitos += numeroEntrada % 10;
        numeroEntrada /= 10;
        if (numeroEntrada == 0) {
            break;
        }
    }
    cout << "# La suma de los digitos es: " << sumaDigitos << endl;
    cout << endl;
};

void sonMultiplos()
{
    int numeroA, numeroB;
    cout << "# A continuacion, ingrese dos numeros." << endl;
    cout << "> Ingrese el primer numero: ";
    cin >> numeroA;
    cout << "> Ingrese el segundo numero: ";
    cin >> numeroB;
    if (numeroA % numeroB == 0 || numeroB % numeroA == 0) {
        cout << "# Los numeros ingresados SI son multiplos." << endl;
    } else {
        cout << "# Los numeros ingresados NO son multiplos." << endl;
    }
};

int main()
{
    cout << "----------------------------------------" << endl;
    cout << "------------# Ejercicio 10 #------------" << endl;
    cout << "----------------------------------------" << endl;
    char opcion;
    do {
        interfazMenu();
        cout << "> Elija una opcion: ";
        cin >> opcion;
        switch (opcion) {
            case 'A':
                invertirNumero();
                break;
            
            case 'B':
                sumatoriaDigitos();
                break;

            case 'C':
                sonMultiplos();
                break;

            case 'D':
                cout << "# Programa terminado." << endl;
                break;

            default:   
                cout << "# Opcion invalida. Vuelva a intentarlo." << endl;
                break;
        }
    } while (opcion != 'D');
    return 0;
}
