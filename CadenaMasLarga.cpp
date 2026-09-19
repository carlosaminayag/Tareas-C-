/*

PROGRAMA: La Cadena Más Larga

DESCRIPCIÓN:
En una fiesta hay 99 personas, cada una con un número (1-99).
Cada persona debe seguir estas reglas hasta obtener 4:

a. Si el número es PAR: divídelo entre 2
b. Si el número es IMPAR: multiplícalo por 3 y suma 1
c. Repite hasta llegar a 4

El programa encuentra quién genera la cadena más larga.

EJEMPLO (número 3):
3 → 10 → 5 → 16 → 8 → 4 (longitud: 6)

*/

#include <iostream>
using namespace std;

int main() {
    int maxLongitud = 0;    //Creamos una variable para almacenar la longitud maxima
    int invitadoMax = 0;    //Luego creamos otra para el numero maximo de invitados

    for (int invitado = 1; invitado <= 99; invitado++) {    //Este bucle recorre todos los invitados
        int numero = invitado;
        int longitud = 0;

        while (numero != 4) {       //Mientras el numero no sea 4, el bucle se ejecutara
            if (numero % 2 == 0) {  //Si el numero es par, se divide entre 2
                numero /= 2;
            } else {                //Si no lo es, significa que es impar y se multiplica por 3 y se le suma 1
                numero = numero * 3 + 1;
            }
            longitud++;
        }

        if (longitud > maxLongitud) {   //Si la longitud es mayor que la longitud maxima, se actualizan las variables
            maxLongitud = longitud;
            invitadoMax = invitado;
        }
    }
    cout << "Camisetas con la cadena mas larga: " << maxLongitud << endl;
    cout << "El invitado con la cadena mas larga es el numero " << invitadoMax << " con una longitud de " << maxLongitud << endl;
}