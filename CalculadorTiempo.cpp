/*
06/10/2026
Hacer un programa C++ que determine el numero de meses y dias transcurridos
desde el 1 de enero del año dado hasta la fecha que puso el usuario.
*/

#include <iostream>

using namespace std;

int main () {
    int year, month, day;
    cout << "Ingrese el año: ";
    cin >> year;
    cout << "Ingrese el mes: ";
    cin >> month;
    cout << "Ingrese el dia: ";
    cin >> day;

    for (int m = 1; m < month; m++) {
        for (int d = 1; d <= 31; d++) {
            if (m == 2 && d > 28) {
                continue;
            }
            if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) {
                continue;
            }
        }
    }
    cout << "Han transcurrido " << month - 1 << " meses y " << day << " dias desde el 1 de enero del año " << year << "." << endl;
    
}