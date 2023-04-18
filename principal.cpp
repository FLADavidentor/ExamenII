/*Este es el archivo principal*/

#include <iostream>

#include "Ejercicio3.cpp"

using namespace std;

int main()
{
    int llamadas = 0;

    cout << "Cantidad de llamadas atendidas: ";
    cin >> llamadas;
    Incentivo(llamadas);
    return 0;
}
