#include <iostream>
using namespace std;

int main() {
    int edad;
    bool tieneLicencia;
    cout << "Introduce la edad: ";
    cin >> edad;
    cout << "¿Tiene licencia de conducir? (1 para sí, 0 para no): ";
    cin >> tieneLicencia;

    if (edad >= 18) {
        if (tieneLicencia) {
            cout << "Puede conducir.\n";
        } else {
            cout << "No puede conducir porque no tiene licencia.\n";
        }
    } else {
        cout << "No puede conducir porque es menor de edad.\n";
    }

    return 0;
}
