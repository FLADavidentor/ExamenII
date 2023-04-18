/*   Realice un algoritmo para determinar cuánto pagará una persona
en una tienda por un artículo, considerando que tiene un descuento del 20%
cuando se compran dos o más ejemplares del artículo.
Recuerde calcular el 15% de I.V.A ,
el subtotal y el total a pagar.  */
#include <iostream>
using namespace std;

float Descuento20(float Cantidadarticulos, float Precioarticulos);
float Iva(float Cantidadarticulos, float Precioarticulos);
float total(float Cantidadarticulos, float Precioarticulos);
float subtotal(float Cantidadarticulos, float Precioarticulos);

int main()

{

    float cantidadarticulos;
    cout << "digite la cantidad de articulos a comprar" << endl;
    cin >> cantidadarticulos;

    float precioarticulo;
    cout << "digite el precio por articulo " << endl;
    cin >> precioarticulo;

    cout << "el subtotal de su compra es de :" << subtotal(cantidadarticulos, precioarticulo) << endl;
    cout << "el el iva sobre su compra es de : " << Iva(cantidadarticulos, precioarticulo) << endl;
    cout << "el descuento sobre su compra es de : " << Descuento20(cantidadarticulos, precioarticulo) << endl;
    cout << "el total de su compra es de : " << total(cantidadarticulos, precioarticulo) << endl;
    return 0;
}

float total(float Cantidadarticulos, float Precioarticulos)

{
    float totaliva;
    float totalcompra;
    float totalfinal;

    totalcompra = Cantidadarticulos * Precioarticulos;

    if (Cantidadarticulos > 1)

    {
        totalcompra = totalcompra - (totalcompra)*0.20;
        totaliva = totalcompra * 0.15;
        totalfinal = totalcompra + totaliva;
    }

    else

    {

        totaliva = totalcompra * 0.15;
        totalfinal = totalcompra + totaliva;
    }

    return totalfinal;
}

float subtotal(float Cantidadarticulos, float Precioarticulos)

{
    float totalcompra;
    totalcompra = Cantidadarticulos * Precioarticulos;

    return totalcompra;
}

float Iva(float Cantidadarticulos, float Precioarticulos)

{
    float totaliva;
    float totalcompra;

    totalcompra = Cantidadarticulos * Precioarticulos;

    if (Cantidadarticulos > 1)

    {
        totalcompra = totalcompra - (totalcompra)*0.20;
        totaliva = totalcompra * 0.15;
    }

    else

    {

        totaliva = totalcompra * 0.15;
    }

    return totaliva;
}

float Descuento20(float Cantidadarticulos, float Precioarticulos)
{
    float totalcompra;

    totalcompra = Cantidadarticulos * Precioarticulos;

    if (Cantidadarticulos > 1)

    {
        totalcompra = totalcompra * 0.20;
    }
    else
    {
        totalcompra = totalcompra * 0;
    }
    return totalcompra;
    

}