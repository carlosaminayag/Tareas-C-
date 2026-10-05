/*
    PROGRAMA: 29. Numeros perfectos

    DESCRIPCION:

    Numeros perfectos son aquellos enteros que tienen la curiosa propiedad
    de ser iguales a la suma de todos sus divisores (excluyendo a ellos
    mismos). Asi, el 6 y el 28 son numeros perfectos, puesto que:

        6  = 1 + 2 + 3
        28 = 1 + 2 + 4 + 7 + 14

    Estos numeros han atraido desde siempre la curiosidad de los estudiosos
    de las matematicas. A pesar de que ya en el siglo III a.C. el matematico
    griego Euclides dedujo una formula para generarlos, todavia hoy se sabe
    bastante poco acerca de ellos. Solo se conocen unos cuantos, de los
    cuales ninguno es impar.

    ¿Sabrias generar todos los numeros perfectos con menos de cuatro cifras?
*/

#include <iostream>
 using namespace std;


bool esPerfecto(int valor) {
    int acumulado = 0;
    for (int i = 1; i < valor; ++i) {
        if (valor % i == 0) {
            acumulado += i;
        }
    }
    return valor == acumulado;
}

int main () {
    
    for (int i = 1; i < 1000; ++i) {
        if (esPerfecto(i)) {
            cout << "Numero perfecto: " << i << endl;
        }
    }
}