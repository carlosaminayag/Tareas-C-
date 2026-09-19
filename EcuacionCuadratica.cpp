/*
PROGRAMA: Ecuación Cuadrática

DESCRIPCIÓN:
El programa resuelve una ecuación cuadrática de la forma ax² + bx + c = 0, mostrando las soluciones reales o complejas según el valor del discriminante.

*/

#include <iostream>
#include <cmath>
#include <string>
#include <sstream>
#include <cctype>

using namespace std;

// Función para validar si una cadena es un número válido
bool esNumeroValido(string entrada) {
    if (entrada.empty()) return false;
    
    int puntos = 0;
    int signos = 0;
    
    for (int i = 0; i < entrada.length(); i++) {
        // Verificar signo al inicio
        if (i == 0 && (entrada[i] == '+' || entrada[i] == '-')) {
            signos++;
            continue;
        }
        
        // Contar puntos decimales
        if (entrada[i] == '.') {
            puntos++;
            if (puntos > 1) return false; // Solo un punto decimal
            continue;
        }
        
        // Verificar si es un dígito
        if (!isdigit(entrada[i])) {
            return false;
        }
    }
    
    // Verificar que no sea solo un signo o punto
    if (entrada.length() == 1 && (entrada[0] == '+' || entrada[0] == '-' || entrada[0] == '.')) {
        return false;
    }
    
    return true;
}

// Función para obtener un número validado del usuario
double obtenerNumero(string mensaje) {
    string entrada;
    double numero;
    bool valido = true;
    
    while (valido) {
        cout << mensaje;
        
        if (!getline(cin, entrada)) {
            cout << "Error de entrada. Intente de nuevo.\n";
            continue;
        }
        
        // Eliminar espacios en blanco al inicio y final
        size_t inicio = entrada.find_first_not_of(" \t");
        size_t fin = entrada.find_last_not_of(" \t");
        
        if (inicio != string::npos) {
            entrada = entrada.substr(inicio, fin - inicio + 1);
        } else {
            entrada = "";
        }
        
        // Validar que sea un número
        if (!esNumeroValido(entrada)) {
            cout << "Error: Solo se permiten números. Intente de nuevo.\n";
            continue;
        }
        
        // Convertir a número
        stringstream ss(entrada);
        if (!(ss >> numero)) {
            cout << "Error: No se pudo convertir el valor. Intente de nuevo.\n";
            continue;
        }
        valido = false;
        return numero;
    }
}

int main() {
   
    cout << "Ecuaciones Cuadráticas (ax² + bx + c)\n";
  
    // Obtener los coeficientes
    double a = obtenerNumero("Ingrese el valor de A (coeficiente de x²): ");
    
    // Validar que A no sea cero
    while (a == 0) {
        cout << "Error: A no puede ser cero (no sería una ecuación cuadrática).\n";
        a = obtenerNumero("Ingrese el valor de A (coeficiente de x²): ");
    }
    
    double b = obtenerNumero("Ingrese el valor de B (coeficiente de x): ");
    double c = obtenerNumero("Ingrese el valor de C (término independiente): ");
    
    cout << "\n";
    cout << "Ecuación: " << a << "x² + " << b << "x + " << c << " = 0\n";
    cout << "\n\n";
    
    // Calcular el discriminante
    double discriminante = (b * b) - (4 * a * c);
    
    cout << "Discriminante (Δ = b² - 4ac): " << discriminante << "\n\n";
    
    // Analizar soluciones según el discriminante
    if (discriminante > 0) {
        // Dos soluciones reales distintas
        double x1 = (-b + sqrt(discriminante)) / (2 * a);
        double x2 = (-b - sqrt(discriminante)) / (2 * a);
        
        cout << "✓ La ecuación tiene DOS SOLUCIONES REALES DISTINTAS:\n\n";
        cout << "x₁ = " << x1 << "\n";
        cout << "x₂ = " << x2 << "\n";
        
    } else if (discriminante == 0) {
        // Una solución real (raíz doble)
        double x = -b / (2 * a);
        
        cout << "✓ La ecuación tiene UNA SOLUCIÓN REAL (raíz doble):\n\n";
        cout << "x = " << x << "\n";
        
    } else {
        // Soluciones complejas
        double parteReal = -b / (2 * a);
        double parteImaginaria = sqrt(-discriminante) / (2 * a);
        
        cout << "✓ La ecuación tiene DOS SOLUCIONES COMPLEJAS CONJUGADAS:\n\n";
        cout << "x₁ = " << parteReal << " + " << parteImaginaria << "i\n";
        cout << "x₂ = " << parteReal << " - " << parteImaginaria << "i\n";
    }
    
    return 0;
}