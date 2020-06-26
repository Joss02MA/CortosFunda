#include <iostream>

using namespace std;

int main()
{
    int ncolor;

    cout << endl;
    cout << "BIENVENIDO/A A ESCOGE Y GANA" << endl;
    cout << endl;
    
    cout << "1. Azul" << endl;
    cout << "2. Amarillo" << endl;
    cout << "3. Verde" << endl;
    cout << "4. Rojo" << endl;
    cout << "5. Negro" << endl;

    cout << endl;
    cout << "Seleccione el numero correspondiente al color que desee y obtenga un premio: ";
    cin >> ncolor;
    cout << endl;

    switch(ncolor)
    {
        case 1:
            cout << "Felicidades, ha ganado $20" << endl;
            break;
        case 2:
            cout << "Felicidades, ha ganado $500" << endl;
            break;
        case 3:
            cout << "Felicidades, ha ganado $100" << endl;
            break;
        case 4:
            cout << "Felicidades, ha ganado $50" << endl;
            break;
        case 5:
            cout << "Felicidades, ha ganado $1000" << endl;
            break;
        default:
            cout << "Este numero no es valido" << endl;
            break;
    }

    return 0;
}