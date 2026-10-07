// Revertir una cadena de caracteres dada de la manera mas eficiente

#include <iostream>

using namespace std;

int main () {
    
    int n = 0;
    string cadena;
    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;
    string final = cadena;
    
    for (int i = cadena.length() - 1; i >= 0; i--) {
        
        final[n] = cadena[i];
        n++;
    }
    cadena = final;
    cout << cadena << endl;

}