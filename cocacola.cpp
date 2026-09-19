/*
PROGRAMA: COCACOLA

DESCRIPCIÓN:
El programa imprime los números del 0 al 100, pero con las siguientes condiciones:
- Si el número es múltiplo de 3, imprime "COCA"
- Si el número es múltiplo de 5, imprime "COLA"
- Si el número es múltiplo de 3 y 5, imprime "COCACOLA"

EJEMPLO:
3 → COCA
5 → COLA
15 → COCACOLA

*/

#include <iostream>
#include <math.h>
using namespace std;

int num = 0;

int main() {
    system("cslear");
    while (num <= 100) {
        
        if (num % 3 == 0 && num % 5 == 0)
        {
        cout << "COCACOLA"<< endl;
        }
        else if (num % 5 == 0)
        {
        cout << "COLA"<< endl;
        }
        else if (num % 3 == 0)
        {
        cout << "COCA"<< endl;
        }
        else
        {
        cout << num << endl;
        }
        num++;
    }
    return 0;
}