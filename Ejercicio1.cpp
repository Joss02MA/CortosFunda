// Programa para calcular los salarios de n empleados

#include <iostream>

using namespace std;

int main ()
{
    // Se usa "for" para que el programa se ejecute según el número de empleados que hayan en la empresa
    int i, n;
    cout << endl;
    cout << "Ingrese el numero de empleados de la empresa: ";
    cin >> n;
    cout << endl;
    
    for (i = 1; i <= n; i = i + 1)
    {
        // número de horas normales = hnormales, número de horas extra = hextra
        int hnormales, hextra;

        // remuneración por horas normales = gnormal, remuneración por horas extra = gextra
        // salario total = saltotal, salario real = salreal
        float gnormal, gextra, saltotal, salreal, seguro, afp, renta;

        cout << "BIENVENIDO/A, ingrese los siguientes datos:";
        cout << endl;

        cout << endl;
        cout << "Horas trabajadas en el mes: ";
        cin >> hnormales;
        cout << "Horas extra: ";
        cin >> hextra;
        cout << endl;
    
        gnormal = hnormales * 1.75;
        gextra = hextra * 2.50;
        saltotal = gnormal + gextra;
        cout << "Salario total: $" << saltotal;
        cout << endl;
    
        // En esta parte, se muestran los diferentes descuentos que se le harán al salario del empleado
        seguro = saltotal * 0.04;
        afp = saltotal * 0.0625;
        cout << endl;
        cout << "DESCUENTOS A APLICAR SOBRE SALARIO" << endl;
        cout << "Seguro Social (4%): $" << seguro << endl;
        cout << "AFP (6.25%): $" << afp << endl;
        cout << endl;

        if (saltotal > 500)
        {
            renta = saltotal * 0.10;
            cout << "Debido a que el salario total es mayor a $500.0, se aplica:" << endl;
            cout << "Impuesto sobre la renta (10%): $" << renta << endl;
        
            salreal = saltotal - (seguro + afp + renta);
            cout << endl;
            cout << "Salario real: $" << salreal;
            cout << endl;
            cout << endl;
            cout << endl;
        }
        else
        {
            salreal = saltotal - (seguro + afp);
            cout << "Salario real: $" << salreal;
            cout << endl;
            cout << endl;
            cout << endl;
        }
    }
    return 0;
}