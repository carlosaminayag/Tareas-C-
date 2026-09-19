/*

PROGRAMA: Los Floreros de Salvador

DESCRIPCIÓN:
Hace algun tiempo Salvador compro 100 floreros para venderlos en un mercadillo.
La semana pasada, despues de haber vendido algunos de ellos en los dias anteriores, tenia los floreros ordenados en 6 filas,
con el mismo numero de unidades en cada una de ellas.
Esa semana vendio 8 floreros y en la actualidad tiene los que le quedan, 
ordenados en 11 filas, con el mismo numero de floreros en cada una.
Cuantos floreros tiene salvador para vender todavia?

*/
#include <iostream>
using namespace std;

int main()
{
    int max_floreros = 100;

    for (int i = 9; i < max_floreros; i++) {
        if (i % 6 == 0 && (i - 8) % 11 == 0) {
            int floreros_actuales = i - 8;
            cout << "A salvador le quedan " << floreros_actuales << " floreros (tenia " << i << " la semana pasada)." << endl;
        }
    }

    return 0;
}