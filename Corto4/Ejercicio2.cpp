#include <iostream>

using namespace std;
int contadorMenor = 0, contadorMayor = 0;

float mediaEstatura (int estatura[])
{
    float suma = 0.00;
    float media = 0.00;

    for (int i = 0; i < 25; i++)
    {
        suma += estatura[i];
    }
    suma = suma/25.00;
    media = suma;
    cout << "La media de las estaturas ingresadas es de " << media << " cm" << endl;
    cout << endl;

    return media;
}

void comparacionEstatura (int estatura[], float media)
{   
    for (int i = 0; i < 25; i++)
    {   
        if (estatura[i] > media)
        {
            contadorMayor += 1;
        }
        else if (estatura[i] < media)
        {
            contadorMenor += 1;
        }
    }
}

int main()
{
    int estatura [25];
    cout << endl;
    for (int i = 0; i < 25; i++)
    {
        cout << "Ingrese la estatura en cm: ";
        cin >> estatura[i];
    }
    cout << endl;

    float media = mediaEstatura (estatura);
    comparacionEstatura (estatura, media);

    cout << "Hay " << contadorMayor << " estudiantes con estaturas arriba de la media" << endl;
    cout << "Hay " << contadorMenor << " estudiantes con estaturas abajo de la media" << endl;
    cout << endl;

    return 0;
}