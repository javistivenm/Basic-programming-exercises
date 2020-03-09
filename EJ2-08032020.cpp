#include <iostream>

using namespace std;

int main()
{
    float d = 0, h = 0, pi = 3.141593, r = 0, v = 0;

    cout << "Introducir el diametro, en metros: ";
    cin >> d;
    cout << "\n";

    cout << "Introduzca la altura, en metros: ";
    cin >> h;
    cout << "\n";

    r = d/2;

    v = pi * (r*r) * h;

    cout << "El volumen del cilindro es de: "<< v << "metro cubicos";
    return 0;
}
