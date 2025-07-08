#include <iostream>
using namespace std;

// Ejercicio 18: dado un año y una cantidad de días transcurridos desde el 1 de enero, muestre la
// fecha en formato dd/mm/aaaa. Validar que la cantidad de días dada sea válida (entre 1 y 365 ó entre 1 y 366).
// Para esto se debe considerar si el año es bisiesto o no.

// Para resolver este ejercicio, reutilice la funcion de otro ejercicio anterior para comprobar si es o no bisiesto, añadiendole algunas modificaciones.
// En rasgos generales, el programa solicita el ingreso de un año y una cantidad de dias. En este punto se llama a la funcion esBisiesto(), para comprobar
// esta cuestion. Esto retornara un parametro por referencia el cual nos servira para mas adelante. 
//
// Luego, el bucle principal: un 'for' que va del 1 al 12. Aprovecharemos el indice de iteracion del bucle para definir los meses.
// En este punto se dividen 3 condiciones: 1) si es febrero, 2) si es un mes con 30 dias, 3) o si es uno con 31.
// En cada iteracion se determinara, segun el mes que corresponda, si es de 30, 29/28 (aqui utilizaremos el parametro por referencia para saber si es 28 o 39)
// o 31 dias.
// De esta manera se van restando los dias correspondientes al mes en cuestion (al valor de 'i'), y sumando meses, para que si se excede de la cantidad
// de dias a restar, el programa finalice y se muestre la fecha.

// $ FUNCION ESBISIESTO $
int esBisiesto(int inputArg, int &boolArg)
{
    int inputDias;
    if (inputArg % 4 == 0)
    {
        // if (inputArg % 100 != 0 && inputArg % 400 == 0)
        // {
            cout << "# Ingresaste un anio bisiesto." << endl;
            boolArg = 1;
            do {
                cout << "> Ingresa una cantidad de dias (1-366): ";
                cin >> inputDias;
                if (inputDias < 1 || inputDias > 366) {
                    cout << "# Numero invalido. Debe estar entre 1 y 366." << endl;
                    continue;
                }
            } while (inputDias < 1 || inputDias > 366);
            return inputDias;
        // }
        // return 366;
    }
    else
    {
        cout << "# Ingresaste un anio NO bisiesto." << endl;
        boolArg = 0;
        do {
            cout << "> Ingresa una cantidad de dias (1-365): ";
            cin >> inputDias;
            if (inputDias < 1 || inputDias > 365) {
                cout << "# Numero invalido. Debe estar entre 1 y 365." << endl;
                continue;
            }
        } while (inputDias < 1 || inputDias > 365);
        return inputDias;
    }
}

// $ FUNCION MOSTRARFECHA $
int mostrarFecha()
{
    int inputAño, diasCorrimiento, mes = 0, boolBisiesto = 0;
    cout << "> Ingrese un anio (AAAA): ";
    cin >> inputAño;
    diasCorrimiento = esBisiesto(inputAño, boolBisiesto);
    cout << endl;
    cout << "# Ingresaste el anio: " << inputAño <<  " y la cantidad de dias: " << diasCorrimiento << endl;

    // BUCLE DE PRUEBA
    for (int i=1; i<=12; i++) {
        // ----------------------------------------------------si es febrero
        if (i == 2) { 
            // switch test
            switch (boolBisiesto) {
            case 0:
                if (diasCorrimiento <= 28) {
                    mes++;
                    break;
                } else {
                    mes++;
                    diasCorrimiento -=28;
                    continue;
                }
            case 1:
                if (diasCorrimiento <= 29) {
                    mes++;
                    break;
                } else {
                    mes++;
                    diasCorrimiento -= 29;
                    continue;
                }
            }
            if (boolBisiesto == 1 && diasCorrimiento <= 29) {
                break;
            } else if (boolBisiesto == 0 && diasCorrimiento <= 28) {
                break;
            }
        // ---------------------------------------------- si es un mes de 30
        } else if (i==4 || i==6 || i==9 || i==11) {
            if (diasCorrimiento<=30) {
                mes++;
                break;
            }
            mes++;
            diasCorrimiento-=30;
            continue;
        // ---------------------------------------------- si es un mes de 31
        } else if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            if (diasCorrimiento <= 31)
            {
                mes++;
                break;
            }
            mes++;
            diasCorrimiento -= 31;
        }
    }

    cout << "# La fecha correspondiente a los datos ingresados es: " << diasCorrimiento << " / " << mes << " / " << inputAño << endl;
    return 0;
}

// ------------------------ MAIN ------------------------
int main()
{
    cout << "----------------------------------" << endl;
    cout << "-------- # Ejercicio 18 # --------" << endl;
    cout << "----------------------------------" << endl;
    mostrarFecha();
    return 0;
}

