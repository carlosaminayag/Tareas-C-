/*

PROGRAMA: La Pirámide de Bolas

DESCRIPCIÓN:
Con 10,000 bolas se forma una pirámide de base cuadrada, donde:
- Cada capa n tiene n² bolas
- Capa 1: 1² = 1 bola
- Capa 2: 2² = 4 bolas
- Capa 3: 3² = 9 bolas
- ...y así sucesivamente

El programa calcula:
1. ¿Cuántas capas se pueden hacer?
2. ¿Cuántas bolas sobran?

FÓRMULA:
Total de bolas en n capas = 1² + 2² + 3² + ... + n²

*/
#include <iostream>
using namespace std;

int main() {
    int total_bolas = 10000;
    int bolas_usadas = 0;
    int capas = 0;
    
    // Calcular cuantas capas se pueden hacer
    // Cada capa n tiene n^2 bolas
    for (int n = 1; bolas_usadas + (n * n) <= total_bolas; n++) {
        bolas_usadas = bolas_usadas + (n * n);
        capas = n;
    }
    
    int bolas_sobrantes = total_bolas - bolas_usadas;
    
    cout << "PIRAMIDE DE BOLAS" << endl;
    cout << "\n" << endl;
    cout << "Total de bolas: " << total_bolas << endl;
    cout << "Capas que se pueden hacer: " << capas << endl;
    cout << "Bolas usadas: " << bolas_usadas << endl;
    cout << "Bolas sobrantes: " << bolas_sobrantes << endl;
    
    return 0;
}