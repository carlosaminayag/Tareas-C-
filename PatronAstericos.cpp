/*
PROGRAMA: Patrón de Asteriscos

DESCRIPCIÓN:
El programa imprime un patrón de asteriscos en forma de triángulo, donde cada fila contiene un número creciente de asteriscos, comenzando con 1 asterisco en la primera fila y aumentando hasta 7 asteriscos en la séptima fila.

*/

#include <iostream>

int main() 
{
    const int filas = 7;

    for (int i = 1; i <= filas; ++i) 
    {
        for (int j = 1; j <= i; ++j) 
        {
            std::cout << '*';
        }
        std::cout << '\n';
    }

    return 0;
}