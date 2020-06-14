// Programa para saber si un año es bisiesto o no

#include <iostream>

using namespace std;

int main ()
{
    int a;

    cout << endl;
    cout << "Ingrese un anio para saber si es bisiesto o no: ";
    cin >> a;
    cout << endl;

    // Existen dos condiciones para saber si un año es bisiesto:
    // La primera es si el año es divisible entre 400, si no es divisible, se realiza la siguiente condición
    // Si el año es divisible entre 4 y no entre 100
    // Si tampoco cumple esa función entonces el año no es bisiesto
    
    if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
    {
        cout << "El anio " << a << " es bisiesto" << endl;
    }
    else
    {
        cout << "El anio " << a << " no es bisiesto" << endl;
    }
    return 0;
}