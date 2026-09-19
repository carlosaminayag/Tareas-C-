//Hacer un programa en C++ que genere el siguiente patron de asteriscos, imprimiendo un único asterisco a la vez, y utilizando ciclos for.
//Ejemplo:
//*
//**
//*
//hasta 7

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