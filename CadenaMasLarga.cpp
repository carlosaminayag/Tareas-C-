// En una fiesta hay 99 personas. A cada una de ellas se les ha dado un
// numero entero comprendido entre 1 y 99 acompanado de unas instrucciones.
// Las instrucciones dicen:
//a. Si su numero es par, dividelo por 2.
//b. Si su numero es impar, multiplicalo por 3 y sumale 1.
//c. Repita las instrucciones anteriores con el numero que resulte hasta
//que este sea igual a 4

//Por tanto, cada invitado obtendra una cadena de numeros enteros que
//terminara con el numero 4. Por ejemplo, el invitado con el numero 3 formara 
//la siguiente cadena: 3 -> 10 -> 5 -> 16 -> 8 -> 4
//Que invitado tendra la cadena mas larga?

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

    cout << "El invitado con la cadena mas larga es el numero " << invitadoMax << " con una longitud de " << maxLongitud << endl;
}