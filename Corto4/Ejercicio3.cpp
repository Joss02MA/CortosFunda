#include <iostream>

using namespace std;

void llenarMatriz (float arreglo[])
{
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "Ingrese notas: "; cin >> arreglo[i];
    }
    cout << endl;
}

float resultadoFinal (float arreglo[])
{
    float suma = 0, ponderacion, notaFinal;

    for (int i = 0; i < 5; i++)
    {
        ponderacion = arreglo[i] * 0.20;
        suma += ponderacion;
    }
    notaFinal = suma;
    cout << "La nota final es: " << notaFinal << endl;
    
    if (notaFinal >= 6)
    {
        cout << endl;
        cout << "APROBADO" << endl;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "REPROBADO" << endl;
        cout << endl;
    }
}

int main ()
{
    int estudiantes;
    float arreglo[5];
    float resultado[5];

    cout << endl;
    cout << "Ingrese el numero de estudiantes a evaluar: ";
    cin >> estudiantes;
    
    for (int i = 0; i < estudiantes; i++)
    {
        llenarMatriz (arreglo);
        resultadoFinal (arreglo);
    }
    
    return 0;
}