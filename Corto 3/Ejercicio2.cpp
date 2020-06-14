// Programa para que el usuario juegue a adivinar un número previamente guardado

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // Aqui se genera un numero aleatorio para que sea adivinado por el usuario
    int nrandom, i, n;
    srand(time(NULL));

    nrandom = 1 + rand()%(101-1);
    
    // Aqui es donde comienza el juego
    cout << endl;
    cout << "Hola, bienvenido/a." << endl;
    cout << "Tiene cinco oportunidades para adivinar un numero entre 1 y 100." << endl;
    cout << "Si desea salir del juego, escriba un 0." << endl;
    cout << endl;

    do
    {
        for (i = 1; i <= 5; i++)
        {
            cout << "Tiene " << 5 - i << " intentos mas para adivinar" << endl;
            cout << "Ingrese un numero: ";
            cin >> n;
            cout << endl;

            if (n == 0)
            {
                cout << "Gracias por jugar, vuelva pronto." << endl;
                cout << endl;
            }
            else
            {
                if (n == nrandom)
                {
                    cout << "Felicidades, ha adivinado el numero" << endl;
                    cout << endl;
                }
                else
                {
                    if (n < nrandom)
                    {
                        cout << "El numero que ha ingresado es menor al numero secreto" << endl;
                        cout << endl;
                    }
                    else
                    {
                        cout << "El numero que ha ingresado es mayor al numero secreto" << endl;
                        cout << endl;
                    }
                }
            }
            
        }
    }
    while (i <= 5);
    return 0;
}
