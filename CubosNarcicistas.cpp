#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    cout << "Cubos narcisistas:\n" << endl;
    cout << "Este programa encuentra todos los cubos narcisistas (excluyendo el 1)" << endl << endl;
    
    int cubos_encontrados = 0;
    
    for (int numero = 2; numero <= 10000; numero++) {
        // Obtener los digitos del numero
        int temp = numero;
        int suma = 0;
        
        // Sumar cada digito elevado al cubo
        while (temp > 0) {
            int digito = temp % 10;
            suma = suma + (digito * digito * digito);
            temp = temp / 10;
        }
        
        // Si la suma es igual al numero, es cubo narcisista
        if (suma == numero) {
            cout << numero << " = ";
            
            // Mostrar la descomposicion
            temp = numero;
            int primero = 1;
            while (temp > 0) {
                int digito = temp % 10;
                if (!primero) {
                    cout << " + ";
                }
                cout << digito << "^3";
                primero = 0;
                temp = temp / 10;
            }
            cout << endl;
            cubos_encontrados++;
        }
    }
    
    cout << "\nTotal de cubos narcisistas encontrados: " << cubos_encontrados << endl;
    
    return 0;
}