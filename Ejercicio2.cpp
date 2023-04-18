#include <iostream>
using namespace std;

// “El náufrago satisfecho” ofrece hamburguesas sencillas, dobles y triples, las cuales
// tienen un costo de C$50.00, C$75.00 y C$100.00 respectivamente; considere que se puede solicitar
// más de una hamburguesa. La empresa acepta tarjetas de crédito con un cargo de 5 % sobre la
// compra. Realice un algoritmo para determinar cuánto debe pagar una persona por N hamburguesas.

float totall(float canthamburguesas, float preciosencillas, float preciodobles, float preciotriples, float cantsencillas, float cantdobles, float canttriples);

int main()

{
    float preciosencillas = 50, preciodobles = 75, preciotriples = 100, cantsencillas, cantdobles, canttriples, canttotal, Precioarticulos;

    cout << "digite el cantidad de hamburgesas sencillas " << endl;
    cin >> cantsencillas;
    cout << "digite el cantidad de hamburgesas sencillas dobles " << endl;
    cin >> cantdobles;
    cout << "digite el cantidad  de hamburgesas triples  " << endl;
    cin >> canttriples;

    canttotal = cantsencillas + cantdobles + canttriples;

    cout << "el total a pagar con tarjeta es de : " << totall(canttotal, 50, 75, 100, cantsencillas, cantdobles, canttriples) << endl;

    return 0;
}

float totall(float canthamburguesas, float preciosencillas, float preciodobles, float preciotriples, float cantsencillas, float cantdobles, float canttriples)

{
    string tipodepago = "tarjeta ";
    float total;
    float totalfinal;
    float aumento;
    if (tipodepago == "tarjeta")

    {
        aumento = (cantsencillas * preciosencillas) + (cantdobles * preciodobles) + (canttriples * preciotriples) * 0.5;
        total = (cantsencillas * preciosencillas) + (cantdobles * preciodobles) + (canttriples * preciotriples);
        totalfinal = total + aumento;
    }
    else

    {
        aumento = (cantsencillas * preciosencillas) + (cantdobles * preciodobles) + (canttriples * preciotriples) * 0.5;
        total = (cantsencillas * preciosencillas) + (cantdobles * preciodobles) + (canttriples * preciotriples);
        totalfinal = total + (aumento * 0.05);
    }

    return totalfinal;

    
}