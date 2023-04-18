/* En un Centro de Atención al Cliente (CAT) de una empresa X de Nicaragua se ha
establecido una política de bono para incentivar a sus empleados. Considere las siguientes
condiciones para recibir el incentivo entorno a las llamadas atendidas:.
50<x<100= C$1000
100<x<150= C$1500
150<x=C$2000
*/

#include <iostream>
using namespace std;
void Incentivo(int llamadas);

void Incentivo(int llamadas)
{
    if (50 <= llamadas && llamadas < 100)
    {
        cout << "A usted le corresponden C$1000 ";
    }

    if (100 <= llamadas && llamadas < 150)
    {
        cout << "A usted le corresponden C$1500 ";
    }
    if (150 <= llamadas)
    {
        cout << "A usted le corresponden C$2000 ";
    }
}