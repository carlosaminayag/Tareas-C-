/*
    PROGRAMA: 16. La hora

    DESCRIPCIÓN:

    La profesora María Jesús Budría explicaba a sus alumnos, en clase de
    matemáticas, las interesantes propiedades de los números enteros. Les
    mostró cómo el número 8.833 es igual a 88^2 + 33^2 y prosiguió su clase.

    Como es habitual en los alumnos, el avispado Michelena no prestaba
    atención a las explicaciones de su profesora observando, en su lugar, el
    reloj digital de la pared. Así, advirtió que cuando la Srta. Budría
    acababa de hablar del número 8.833, la hora que marcaba el reloj (tomada
    como un número sin coma) tenía la misma propiedad. Esto es, el cuadrado
    de los dígitos que indicaban la hora, más el cuadrado de los que
    indicaban los minutos, era igual al número que veía en el reloj.

    ¿Qué hora del día era?
*/

#include <iostream>

using namespace std;

int main () {
    
    for (int h = 0; h < 24; h++) {
        for (int m = 0; m < 60; m++) {
            int numeroReloj = h * 100 + m;
            if (numeroReloj == h*h + m*m) {
                cout << "Hora: " << h << ":" << m << endl;
            }
            else {
                // No hacer nada
            }
        }
    }
}