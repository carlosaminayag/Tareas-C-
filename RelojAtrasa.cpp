/*

PROGRAMA: El Reloj que Atrasa

DESCRIPCIÓN:
Un reloj se atrasa un tiempo distinto cada hora, según la serie de Fibonacci.
El atraso en la hora n es: f(n) / 2ⁿ minutos

Donde f(n) es el n-ésimo término de Fibonacci:
f(1)=1, f(2)=1, f(3)=2, f(4)=3, f(5)=5, f(6)=8, f(7)=13...

El programa calcula el atraso total acumulado en 24 horas.

EJEMPLO:
Hora 1: 1/2 = 0.5 minutos
Hora 2: 1/4 = 0.25 minutos
Hora 3: 2/8 = 0.25 minutos
Hora 4: 3/16 = 0.1875 minutos
...

*/
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