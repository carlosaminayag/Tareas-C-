/*

PROGRAMA: Números Persistentes

DESCRIPCIÓN:
La persistencia de un número es cuántas veces debes multiplicar sus dígitos
hasta obtener un número de un solo dígito.

EJEMPLO:
715: 7×1×5 = 35 → 3×5 = 15 → 1×5 = 5 (persistencia: 3)
88:  8×8 = 64 → 6×4 = 24 → 2×4 = 8 (persistencia: 3)
27:  2×7 = 14 → 1×4 = 4 (persistencia: 2)

El programa encuentra el único número de 2 dígitos cuya persistencia
es mayor que 3.

*/

#include <iostream>
#include <cstdlib>  // Para system("cls") o system("clear")
using namespace std;

int calcularPersistencia(int n) {
    int persistencia = 0;
    
    while (n >= 10) {  // Mientras tenga más de 1 dígito
        int producto = 1;

        // Multiplicar todos los dígitos
        while (n > 0) {
            producto *= n % 10;  // Multiplicar por el último dígito
            n /= 10;              // Quitar el último dígito
        }
        
        n = producto;  // Actualizar n con el producto
        persistencia++;
    }
    
    return persistencia;
}

int main() {

    #ifdef _WIN32
        system("cls");  // Windows
    #else
        system("clear");  // Linux, macOS, Unix
    #endif

    // Buscar números de 2 dígitos con persistencia > 3
    for (int i = 10; i <= 99; i++) {
        int p = calcularPersistencia(i);
        if (p > 3) {
            cout << "Numero: " << i << " - Persistencia: " << p << endl;
        }
    }
    
    return 0;
}