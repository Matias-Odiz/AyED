#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << setprecision(10);   // Cambio la precision del cout para que π sea visible
    double pi = 0.0;            // Variable π
    double target = 0.785398;   // Valor deseado de π 
    double precision = 0.0000000001; // Precision para encontrar los decimales de π deseados (6)

    double term = 1.0;
    int i = 0;

    while (abs(pi - target) >= precision) {
        if (i % 2 == 0) {
            pi += term;
        } else {
            pi -= term;
        }
        term = 1.0 / (2 * i + 3);
        i++;
    }

    cout << "Aproximación de pi: " << pi*4 << endl;
    cout << "Numero de iteraciones: " << i << endl;

    return 0;
}

