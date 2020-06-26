#include <iostream>

using namespace std;

int main()
{
    int p;
    float c, iva;

    cout << endl;
    cout << "CALCULE EL IVA POR PAIS";
    cout << endl;

    cout << "Puede escoger entre las siguientes naciones:" << endl;
    cout << "1. El Salvador" << endl;
    cout << "2. Guatemala" << endl;
    cout << "3. Honduras" << endl;
    cout << "4. Espania" << endl;

    cout << endl;
    cout << "Cantidad de dinero: $";
    cin >> c;
    cout << "Numero del pais correspondiente: ";
    cin >> p;
    cout << endl;

    switch(p)
    {
        case 1:
            iva = c * 0.13;
            cout << "El IVA que debe cancelar por dicha cantidad es de: $" << iva << endl;
            break;
        case 2:
            iva = c * 0.09;
            cout << "El IVA que debe cancelar por dicha cantidad es de: $" << iva << endl;
            break;
        case 3:
            iva = c * 0.15;
            cout << "El IVA que debe cancelar por dicha cantidad es de: $" << iva << endl;
            break;
        case 4:
            iva = c * 0.20;
            cout << "El IVA que debe cancelar por dicha cantidad es de: $" << iva << endl;
            break;
        default:
            cout << "Este numero no es valido" << endl;
            break;
    }

    return 0;
}