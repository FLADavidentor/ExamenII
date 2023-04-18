/*Este es el archivo final*/

#include <iostream>
#include "Ejercicio2.cpp"
#include "Ejercicio1.cpp"
#include "Ejercicio3.cpp"

using namespace std;
int main(int argc, char const *argv[])
{
    int llamadas = 0;
    int caso = 0;
    float cantidadarticulos;
    float precioarticulo;
    float preciosencillas = 50, preciodobles = 75, preciotriples = 100, cantsencillas, cantdobles, canttriples, canttotal, Precioarticulos;
    cout << "Numero de ejercicio\n1:Tienda\n2:BurgerShack\n3:Call center";
    cin >> caso;
    switch (caso)
    {
    case 1:

        cout << "digite la cantidad de articulos a comprar" << endl;
        cin >> cantidadarticulos;

        cout << "digite el precio por articulo " << endl;
        cin >> precioarticulo;

        cout << "el subtotal de su compra es de :" << subtotal(cantidadarticulos, precioarticulo) << endl;
        cout << "el el iva sobre su compra es de : " << Iva(cantidadarticulos, precioarticulo) << endl;
        cout << "el descuento sobre su compra es de : " << Descuento20(cantidadarticulos, precioarticulo) << endl;
        cout << "el total de su compra es de : " << total(cantidadarticulos, precioarticulo) << endl;

        break;
    case 2:
        cout << "digite el cantidad de hamburgesas sencillas " << endl;
        cin >> cantsencillas;
        cout << "digite el cantidad de hamburgesas sencillas dobles " << endl;
        cin >> cantdobles;
        cout << "digite el cantidad  de hamburgesas triples  " << endl;
        cin >> canttriples;

        canttotal = cantsencillas + cantdobles + canttriples;

        cout << "el total a pagar con tarjeta es de : " << totall(canttotal, 50, 75, 100, cantsencillas, cantdobles, canttriples) << endl;
        break;
case 3:
    cout << "Cantidad de llamadas atendidas: ";
    cin >> llamadas;
    Incentivo(llamadas);
    break;
default:
    cout << "digite un numero valido";
    break;
}
}