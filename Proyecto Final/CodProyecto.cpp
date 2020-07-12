/*Elaborar un programa que procese información sobre productos comprados por un
cliente en una tienda, a modo de procesamiento de una factura de compra. La
información se manejará en un arreglo, en el cual cada casilla contendrá los datos
de: nombre del artículo, cantidad de unidades compradas, precio unitario y costo
total por artículo.*/

#include <iostream>

using namespace std;

const int longCad = 20;

struct costoPorArticulo
{
    char nombreArticulo[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

void leerDatos(struct costoPorArticulo articulos[], int numero)
{
    /*b) Una función que lea los datos sobre el nombre, la cantidad y el precio unitario
    de cada artículo y los incorpore al arreglo.*/
    
    for (int i = 0; i < numero; i++)
    {
        cin.ignore();
        cout << endl;
        cout << "Nombre del articulo: ";
        cin.getline (articulos[i].nombreArticulo, longCad);
        cout << "Cantidad: ";
        cin >> articulos[i].cantidad;
        cout << "Precio unitario: $";
        cin >> articulos[i].precio;
    }
}

void costoPorArticulo(struct costoPorArticulo articulos[], int numero)
{
    /*c) Una función que calcule el costo por artículo e incorpore este valor en el campo
    correspondiente de cada artículo en cada casilla del arreglo.*/

    for (int i = 0; i < numero; i++)
    {
        float cantidad, precioUnitario, totalProducto;

        cantidad = articulos[i].cantidad;
        precioUnitario = articulos[i].precio;
        totalProducto = cantidad * precioUnitario;
        articulos[i].costoPorArticulo = totalProducto;
    }
}

void desplegarContenido(struct costoPorArticulo articulos[], int numero)
{
    /*d) Una función que despliegue el contenido del arreglo. Mostrando los cuatro datos
    de la estructura para cada artículo.*/
    
    cout << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
    for (int i = 0; i < numero; i++)
    {
        cout << endl;
        cout << "ARTICULO: " << articulos[i].nombreArticulo << endl;
        cout << "CANT: " << articulos[i].cantidad << endl;
        cout << "PRECIO UNITARIO: $" << articulos[i].precio << endl;
        cout << endl;
        cout << "TOTAL:    $" << articulos[i].costoPorArticulo << endl;
        cout << endl;
        cout << endl;
    }
}

float costoTotal(struct costoPorArticulo articulos[], int numero)
{
    /*e) Una función que retorne el costo total de la compra, que es la suma de los
    costos de cada artículo. Este valor se desplegará en la función main.*/

    float totalCompra = 0.00;

    for (int i = 0; i < numero; i++)
    {
        totalCompra += articulos[i].costoPorArticulo;
    }
    return totalCompra;
}

int main()
{
    /*a) La función main, que solicita la cantidad de artículos a incluir en el arreglo y
    controla las llamadas a las demás funciones. En esta función se debe declarar
    el arreglo y la variable entera que indicará la cantidad de artículos que
    contendrá.*/
    
    int numero;

    cout << endl;
    cout << "Inserte el numero de articulos a procesar: ";
    cin >> numero;

    struct costoPorArticulo articulos[numero];

    leerDatos (articulos, numero);
    costoPorArticulo (articulos, numero);
    desplegarContenido (articulos, numero);
    float total = costoTotal (articulos, numero);
    cout << "VENTA TOTAL: $" << total << endl;
    cout << endl;
    cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -";
    cout << endl;
    
    return 0;
}