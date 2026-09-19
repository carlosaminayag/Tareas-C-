/*
PROGRAMA: Serie de Fibonacci

DESCRIPCIÓN:
El programa imprime los primeros n términos de la serie de Fibonacci.

*/

#include <iostream>
using namespace std;

int main() {
    cout << "SERIE DE FIBONACCI" << endl;
   
    system("clear");
    int n = 20;
    int a = 0;
    int b = 1;
    
    cout << "\nSerie de Fibonacci:" << endl;
    
    for (int i = 0; i < n; i++) {
        if (a == 0) {
            break;
        }
        else {
        cout << a << " ";
        
        int temp = a + b;
        a = b;
        b = temp;
        }
    }
    
    cout << endl;
    
    return 0;
}