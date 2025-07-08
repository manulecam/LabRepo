#include <iostream>
using namespace std;

// Ejercicio 10: Escribir un programa que imprima el menú mostrado a continuación y solicite al usuario elegir una opción, la
// cual se debe ejecutar para luego volver a mostrar el menú repetidas veces, hasta que el usuario decida salir:
// ‘A’: Invertir número.
// ‘B’: Sumatoria de dígitos.
// ‘C’: Decir si son múltiplos.
// ‘D’: Salir.
// Si el usuario ingresa un carácter que no es la opción D, se debe ejecutar lo que corresponda y volver a mostrar
// el menú para permitirle elegir otra opción. Si el carácter ingresado por el usuario no es A, B, C ni D, mostrarle un
// mensaje de error y continuar mostrándole el menú y solicitando una opción hasta que ingrese una que sea válida.

// Funciones:
int invertirNumero()
{
    int input, numeroInvertido = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> input;

    while (input != 0) {
        numeroInvertido += input % 10;
        input /= 10;
        if (input == 0) {
            break;
        } else {
            numeroInvertido *= 10;
        }
    }

    cout << "# El numero ingresado fue invertido con exito: " << numeroInvertido << endl;
    return numeroInvertido;
}

int sumarDigitos()
{
    int input, sumaTotal = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> input;
    while (input != 0) {
        sumaTotal += input % 10;
        input /= 10;
    }
    cout << "# La suma de los digitos del numero ingresado es: " << sumaTotal << endl;
    return sumaTotal;
}

int sonMultiplos()
{
    int inputA, inputB;

    cout << "# A continuacion, debera ingresar dos numeros." << endl;
    cout << "> Ingrese el primer numero: ";
    cin >> inputA;
    cout << "> Ingrese el segundo numero: ";
    cin >> inputB;

    if ((inputA % inputB == 0) || (inputB % inputA == 0)) {
        cout << "# Los numeros ingresados SI son multiplos entre si. " << endl;
    } else {
        cout << "# Los numeros ingresados NO son multiplos entre si." << endl;
    }

    return 0;
}

// ---------------------------------------------------------------------------------
// Menu:
int menu()
{
    char opcionInput;

    do
    {
        cout << "------------------------------" << endl;
        cout << "# Menu de Seleccion #" << endl;
        cout << "A. Invertir numero" << endl;
        cout << "B. Sumar digitos" << endl;
        cout << "C. Son (o no) multiplos" << endl;
        cout << endl;
        cout << "D. Salir" << endl;
        cout << endl;
        cout << "> Elija una opcion: ";
        cin >> opcionInput;
        opcionInput = toupper(opcionInput);
        cout << "------------------------------" << endl;

        switch (opcionInput)
        {
        case 'A':
            invertirNumero();
            break;

        case 'B':
            sumarDigitos();
            break;

        case 'C':
            sonMultiplos();
            break;

        case 'D':
            cout << "# Saliendo..." << endl << "# Programa finalizado con exito #" << endl;
            break;

        default:
            cout << "# Usted ingreso una opcion invalida..." << endl;
            break;
        }

    } while (opcionInput != 'D');

    return 0;
}

// ---------------------------------------------------------------------------------
// Main:
int main()
{
    cout << "------------------------------" << endl;
    cout << "------ # Ejercicio 10 # ------" << endl;
    menu();
    return 0;
}