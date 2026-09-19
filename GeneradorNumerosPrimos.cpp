//Hacer un programa C++ que genere n numeros primos.
//Comprbar generando: 
//A) 10,000
//B) 100,000
//C) 1,000,000
//D) 5,000,000
//E) 10,000,000
//Que determinar el tiempo de ejecucion de cada uno de los casos y mostrarlo en pantalla.

#include <iostream>
#include <chrono>
using namespace std;

bool esPrimo(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

void generarPrimos(int n) {
    int cantidad = 0;
    int num = 2;
    
    while (cantidad < n) {
        if (esPrimo(num)) {
            cantidad++;
        }
        num++;
    }
}

int main() {
    int n;
    
    cout << "GENERADOR DE NUMEROS PRIMOS" << endl;
    cout << "\n" << endl;
    cout << "Ingresa la cantidad de primos que deseas: ";
    cin >> n;
    
    cout << "\nGenerando " << n << " numeros primos..." << endl;
    
    auto inicio = chrono::high_resolution_clock::now();
    generarPrimos(n);
    auto fin = chrono::high_resolution_clock::now();
    
    auto duracion = chrono::duration_cast<chrono::microseconds>(fin - inicio);
    double segundos = duracion.count() / 1000000.0;
    
    cout << "Tiempo: " << segundos << " segundos" << endl;
    
    return 0;
}