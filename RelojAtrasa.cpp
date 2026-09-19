#include <iostream>
using namespace std;

int main() {
    // Calcular Fibonacci hasta hora 24
    long long fib[25];
    fib[1] = 1;
    fib[2] = 1;
    
    for (int i = 3; i <= 24; i++) {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    // Calcular atraso total en minutos
    double atraso_total = 0;
    
    for (int i = 1; i <= 24; i++) {
        double atraso = (double)fib[i] / (1LL << i);
        atraso_total += atraso;
    }
    
    cout << "ATRASO DEL RELOJ EN 24 HORAS" << endl;
    cout << "\n" << endl;
    cout << "Atraso total: " << atraso_total << " minutos" << endl;
    
    return 0;
}