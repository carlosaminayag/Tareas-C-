/*
Hacer un programa C++ que genere la tabla de amortizacion de un prestamo dados el monto prestado, la
tasa anual y el tiempo en años que durara el prestamo. El programa debe mostrar la tabla como sigue:
TABLA DE AMORTIZACION
Monto:  $ 1,000.00
Tasa:  18%
Tiempo (meses):  24
Cuota:  $ 49.92
Interes total: $ 198.18
*/

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main () {
    cout << "Ingrese el monto prestado: ";
    double monto;
    cin >> monto;
    cout << "Ingrese la tasa anual (en %): ";
    double tasa;
    cin >> tasa;
    cout << "Ingrese el tiempo en años: ";
    int tiempo;
    cin >> tiempo;
    int meses = tiempo * 12;        //Convertimos los años a meses
    double i = tasa / 100 / 12;     //Convertimos la tasa anual a tasa mensual
    double cuota = (monto * (i * pow(1 + i, meses))) / (pow(1 + i, meses) - 1);     //Calculamos la cuota mensual usando la formula de amortizacion
    double interesTotal = cuota * meses - monto;        //Calculamos el interes total pagado durante el tiempo del prestamo
    

    cout << "---TABLA DE AMORTIZACION---" << endl;
    cout << "Monto:  $" << fixed << setprecision(2) << monto << endl;       //Mostramos el monto prestado con 2 decimales usando setprecision
    cout << "Tasa:  " << fixed << setprecision(2) << tasa << "%" << endl;  //Mostramos la tasa anual con 2 decimales
    cout << "Tiempo (meses):  " << meses << endl;                          //Mostramos el tiempo en meses
    cout << "Cuota:  $" << fixed << setprecision(2) << cuota << endl;     //Mostramos la cuota mensual con 2 decimales
    cout << "Interes total: $" << fixed << setprecision(2) << interesTotal << endl;  //Mostramos el interes total con 2 decimales

}