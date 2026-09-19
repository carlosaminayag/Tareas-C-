#include <iostream>
using namespace std;
 
int main() {
    
    cout << "Ingresa 20 valores:" << endl;
    
    int valores[20];
    for (int i = 0; i < 20; i++) {
        cout << "Valor " << (i + 1) << ": ";
        cin >> valores[i];
    }
    
    // Mayor
    int mayor = valores[0];
    for (int i = 1; i < 20; i++) {
        if (valores[i] > mayor) {
            mayor = valores[i];
        }
    }
    cout << "\nMayor: " << mayor << endl;
    
    // Menor
    int menor = valores[0];
    for (int i = 1; i < 20; i++) {
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }
    cout << "Menor: " << menor << endl;
    
    // Moda (valor más repetido)
    int moda = valores[0];
    int maxCuenta = 0;
    
    for (int i = 0; i < 20; i++) {
        int cuenta = 0;
        for (int j = 0; j < 20; j++) {
            if (valores[i] == valores[j]) {
                cuenta++;
            }
        }
        if (cuenta > maxCuenta) {
            maxCuenta = cuenta;
            moda = valores[i];
        }
    }
    cout << "Moda: " << moda << endl;
    
    return 0;
}