//Hacer un programa en c++ que descomponga un entero dado en factores primos.

#include <iostream>

using namespace std;

int main() {
    system ("clear");
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;
    if (cin.fail()) {
        
        cout << "Entrada inválida. Por favor, ingrese un número entero." << endl;
        return 1;
    }
    if (n < 1) {
        cout << "Ingrese un número mayor que 0." << endl;
        return 1;
    }
    else {
    cout << "Factores primos de " << n << ": ";
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    }
    }
    cout << endl;
    return 0;
}