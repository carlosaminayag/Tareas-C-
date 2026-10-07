/*
Hacer un programa C++ que determine cuantas veces en un dia se superponen las
agujas minutera y horario, indique HH:MM:SS
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const long long secDia = 86400;

    // La minutera alcanza a la horaria cada 43200/11 segundos.
    // El k-esimo encuentro ocurre en t = k * 43200 / 11.
    // Usamos aritmetica entera (numerador sobre 11) para evitar errores de punto flotante.
    int contador = 0;

    for (long long k = 0; k * 43200 < secDia * 11; k++) {
        // Redondeo al segundo mas cercano: (k*43200 + 11/2) / 11
        long long t = (k * 43200 + 5) / 11;

        int hh = t / 3600;
        int mm = (t % 3600) / 60;
        int ss = t % 60;

        cout << setfill('0')
             << setw(2) << hh << ":"
             << setw(2) << mm << ":"
             << setw(2) << ss << endl;
        contador++;
    }

    cout << "\nSe superponen " << contador << " veces en un dia." << endl;
    return 0;
}