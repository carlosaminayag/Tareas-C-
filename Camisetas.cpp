#include <iostream>
using namespace std;

int main() {
    cout << "Camisetas de futbol" << endl;
    cout << "\n" << endl;
    cout << "Encuentra dos numeros dorsales donde:" << endl;
    cout << "- Su suma al cuadrado es un numero de 4 cifras" << endl;
    cout << "- Ese numero de 4 cifras es igual al que se ve cuando estan uno junto al otro" << endl << endl;
    
    int soluciones = 0;
    
    for (int a = 1; a <= 99; a++) {
        for (int b = 1; b <= 99; b++) {
            if (a == b) continue;
            
            // Calcular suma al cuadrado
            int suma = a + b;
            int suma_cuadrado = suma * suma;
            
            // Verificar que sea de 4 cifras
            if (suma_cuadrado < 1000 || suma_cuadrado > 9999) continue;
            
            // Concatenar los numeros (uno junto al otro)
            int concatenado;
            if (b < 10) {
                concatenado = a * 100 + b;
            } else {
                concatenado = a * 100 + b;
            }
            
            // Verificar si coinciden
            if (suma_cuadrado == concatenado) {
                cout << "Encontrado: " << a << " y " << b << endl;
                cout << "  " << a << " + " << b << " = " << suma << endl;
                cout << "  " << suma << "^2 = " << suma_cuadrado << endl;
                cout << "  Concatenado: " << concatenado << endl << endl;
                soluciones++;
            }
        }
    }
    
    cout << "Total de soluciones: " << soluciones << endl;
    
    return 0;
}