/*
    PROGRAMA: 17. La flota de camiones

    DESCRIPCION:

    El propietario de la compañía de transportes "La Tortuga" es un
    matemático amateur. Después de comprar una flota nueva de camiones,
    decidió identificar a cada vehículo, pintando sobre su cabina un número
    menor que 500. Sólo para ser diferente, escogió todos aquellos números
    cuyos cuadrados terminaran en el número en cuestión. Así, uno de los
    camiones se marcó con el número 25, ya que 25^2 = 625.

    ¿Cuántos camiones formaban la flota de la compañía de transportes
    "La Tortuga"? ¿Cuáles eran sus números?
*/

#include <iostream>
using namespace std;


int main() {
    int n;
    int contador = 0;
    for (n = 1; n < 500; n++) {
        if (n < 10) {
            if ((n * n) % 10 == n) {
                cout << "Camion numero: " << n << endl;
                n++;
                contador++;
            }
        }
        if (n < 100) {
            if ((n * n) % 100 == n) {
                cout << "Camion numero: " << n << endl;
                n++;
                contador++;
            }
        }
        if (n < 1000) {
            if ((n * n) % 1000 == n) {
                cout << "Camion numero: " << n << endl;
                n++;
                contador++;
            }
        }
    }
    cout << "La flota tenia " << contador << " camiones." << endl;
}