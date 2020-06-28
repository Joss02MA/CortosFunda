#include <iostream>

using namespace std;

char codificarPalabra(char letraOriginal)
{
  char murcielago[] = {"murcielago"};
  int cualquierLetra = 11;

  for (int clave = 0; clave < 10; clave++)
  {
    if (letraOriginal == murcielago[clave])
    {
      cualquierLetra = clave;
    }
  }

  char algo = '0' + cualquierLetra;

  if (cualquierLetra == 11)
  {
    return letraOriginal;
  }
  else
  {
    return algo;
  }
}

 int main()
 {
    string palabra;
    
    cout << endl;
    cout << "Ingrese el texto a codificar: ";
    getline (cin, palabra);
    cout << endl;

    for (int i = 0; i < sizeof(palabra); i++)
    { 
        palabra[i] = tolower(palabra[i]);
        
        if (!isspace(palabra[i]))
        {
          palabra[i] = codificarPalabra(palabra[i]);
        }
    } 
    cout << "El texto codificado es: " << palabra << endl;

    return 0;
}