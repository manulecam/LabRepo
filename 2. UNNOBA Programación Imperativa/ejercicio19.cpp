#include <iostream>
#include <string>
using namespace std;

// Ejercicio 19: sin modificar el código existente, completar las líneas punteadas
// en cada uno de los programas mostrados a continuación. Suponer que en cada uno
// se han importado los encabezados necesarios y se usa el espacio de nombres estándar:

// PROGRAMA 1)
// string mayusculas(string cadena)
// {
//     for (int i = 0; i < cadena.length(); i++)
//     {
//         cadena[i] = toupper(cadena[i]);
//     }
//     return cadena;
// }

// int main()
// {
//     string nombre;
//     cout << "> Cual es tu nombre?: ";
//     getline(cin >> ws, nombre);
//     nombre = mayusculas(nombre);
//     cout << "# Hola, " << nombre << "!" << endl;
//     return 0;
// }

// PROGRAMA 2)
// void mayusculas(string & cadena)
// {
//     for (int i = 0; i < cadena.length(); i++)
//     {
//         cadena[i] = toupper(cadena[i]);
//     }
// }

// int main()
// {
//     string nombre;
//     cout << "> Cual es tu nombre?: ";
//     getline(cin >> ws, nombre);
//     mayusculas(nombre);
//     cout << "# Hola, " << nombre << "!" << endl;
//     return 0;
// }

// PROGRAMA 3)
// char validarEleccion()
// {
//     char opcion;
//     do
//     {
//         cout << "> Desea confirmar el prestamo? Ingrese S o N: ";
//         cin >> opcion;
//         opcion = tolower(opcion);
//     } while (opcion != 's' and opcion != 'n');
//     return opcion;
// }

// int main()
// {
//     cout << " *** BIENVENIDO AL SISTEMA DEL BANCO MONEYMONEY *** " << endl;
//     cout << "> Ingrese monto para obtener un prestamo: ";
//     float monto;
//     cin >> monto;
//     cout << "# El interes es del 25%." << endl;
//     if (validarEleccion() == 's')
//         cout << "# Ahora usted nos debe " << monto + (monto * 0.25) << endl;
//     else
//         cout << "# Lamentamos que no quiera hacer negocios con nosotros...";
//     return 0;
// }
