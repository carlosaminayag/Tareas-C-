#include <iostream>
#include <string>

using namespace std;

// ---------- Pila implementada a mano con un arreglo ----------
struct Pila {
    char* datos;   // arreglo que guarda los elementos
    int tope;      // indice del ultimo elemento (-1 = pila vacia)
    int capacidad;
};

void iniciar(Pila& p, int capacidad) {
    p.datos = new char[capacidad];
    p.capacidad = capacidad;
    p.tope = -1;
}

bool estaVacia(const Pila& p) {
    return p.tope == -1;
}

void apilar(Pila& p, char c) {
    p.tope++;
    p.datos[p.tope] = c;
}

char desapilar(Pila& p) {
    char c = p.datos[p.tope];
    p.tope--;
    return c;
}

void liberar(Pila& p) {
    delete[] p.datos;
}

// ---------- "Diccionario": cierre -> apertura ----------
// Devuelve la apertura que le corresponde a un signo de cierre,
// o '\0' si el caracter no es un signo de cierre.
char aperturaDe(char cierre) {
    switch (cierre) {
        case ')': return '(';
        case ']': return '[';
        case '}': return '{';
        default:  return '\0';
    }
}

bool esApertura(char c) {
    return c == '(' || c == '[' || c == '{';
}

// ---------- Validacion ----------
bool esExpresionValida(const string& expresion) {
    Pila pila;
    // Como maximo se apilan tantos signos como caracteres tenga la expresion
    iniciar(pila, expresion.length() + 1);

    bool valida = true;

    for (size_t i = 0; i < expresion.length() && valida; i++) {
        char c = expresion[i];

        if (esApertura(c)) {
            apilar(pila, c);
        }
        else if (aperturaDe(c) != '\0') {   // es un signo de cierre
            if (estaVacia(pila) || desapilar(pila) != aperturaDe(c)) {
                valida = false;  // cierre sin apertura o de tipo incorrecto
            }
        }
        // Otros caracteres (numeros, operadores) se ignoran
    }

    // Valida solo si nunca fallo y la pila quedo vacia
    if (valida && !estaVacia(pila)) {
        valida = false;
    }

    liberar(pila);
    return valida;
}

int main() {
    string expresion;

    cout << "Validador de signos de agrupacion ( ) [ ] { }\n";
    cout << "Escribe una expresion (o 'salir' para terminar).\n\n";

    while (true) {
        cout << "Expresion: ";
        if (!getline(cin, expresion) || expresion == "salir") break;

        if (esExpresionValida(expresion))
            cout << "  -> VALIDA\n\n";
        else
            cout << "  -> INVALIDA\n\n";
    }

    return 0;
}