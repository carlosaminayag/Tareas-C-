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