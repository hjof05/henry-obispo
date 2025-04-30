#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Leer los tres números
    cout << "Ingrese tres números enteros: ";
    cin >> a >> b >> c;

    // Verificar si los números pueden formar un triángulo
    if (a + b > c && a + c > b && b + c > a) {
        // Determinar el tipo de triángulo
        if (a == b && b == c) {
            cout << "Los números forman un triángulo equilátero." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Los números forman un triángulo isósceles." << endl;
        } else {
            cout << "Los números forman un triángulo escaleno." << endl;
        }
    } else {
        cout << "Los números ingresados no forman un triángulo." << endl;
    }

    return 0;
}
