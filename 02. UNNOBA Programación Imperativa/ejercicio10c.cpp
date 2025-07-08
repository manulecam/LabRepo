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
void invertirNumero() 
{
    int numeroEntrada, numeroInvertido = 0;
    cout << "> Ingrese el numero a ser invertido:";
    cin >> numeroEntrada;
    do
    {
        numeroInvertido += numeroEntrada % 10;
        numeroEntrada /= 10;
        if (numeroEntrada == 0) {
            break;
        }
        numeroInvertido *= 10;
    } while (numeroEntrada != 0);
    cout << "# El numero invertido es: " << numeroInvertido << endl;    
}

void sumatoriaDigitos()
{
    int numeroEntrada, sumatoriaTotal = 0;
    cout << "> Ingrese un numero entero: ";
    cin >> numeroEntrada;
    do 
    {
        sumatoriaTotal += numeroEntrada % 10;
        numeroEntrada /= 10;
        if (numeroEntrada == 0) {
            break;
        }
    } while(numeroEntrada!=0);
    cout << "# La suma total de los digitos es: " << sumatoriaTotal << endl;
}

void decirSonMultiplos()
{
    int a, b;
    cout << "# A continuacion, se le solicitara el ingreso de dos numeros enteros." << endl;
    cout << "> Ingrese el primer numero: ";
    cin >> a;
    cout << "> Ingrese el segundo numero: ";
    cin >> b;
    if (a % b == 0 || b % a == 0) {
        cout << "# Los numeros ingresados SI son multiplos. " << endl;
    } else {
        cout << "# Los numeros ingresados NO son multiplos. " << endl;
    }
}

void menuPrincipal()
{
    char opcion;
    do {
        cout << endl;
        cout << "#         MENU PRINCIPAL         #" << endl;
        cout << "A. Invertir numero" << endl;
        cout << "B. Sumatoria de digitos" << endl;
        cout << "C. Decir si son multiplos" << endl;
        cout << "D. Salir" << endl;
        cout << endl;
        cout << "> Elija una opcion: ";
        cin >> opcion;
        opcion = toupper(opcion);
        switch (opcion) {
            case 'A':
                invertirNumero();
                continue;
            case 'B':
                sumatoriaDigitos();
                continue;
            case 'C':
                decirSonMultiplos();
                continue;
            case 'D':
                cout << "# Saliendo..." << endl;
                break;

        }
    } while(opcion != 'D');
}

int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 10 # --------" << endl;
    cout << "----------------------------------" << endl;
    menuPrincipal();
    return 0;
}