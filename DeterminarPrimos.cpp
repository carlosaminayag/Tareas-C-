#include <iostream>
using namespace std;

int main() {
    int numero;
    
    cout << "Verificar numeros primos" << endl;
    cout << "\n" << endl;
    cout << "Ingresa un numero: ";
    cin >> numero;
    
    if (numero < 2) {
        cout << numero << " NO es primo" << endl;
        return 0;
    }
    
    bool esPrimo = true;
    
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            esPrimo = false;
            break;
        }
    }
    
    if (esPrimo) {
        cout << numero << " SI es primo" << endl;
    } else {
        cout << numero << " NO es primo" << endl;
    }
    
    return 0;
}