#include <iostream>

using namespace std;

int main()
{
    int priceShop1 = 0, priceShop2 = 0, priceShop3 = 0, media = 0;

    cout << "Introduzca el precio del producto en el establecimiento número 1, en euros: ";
    cin >> priceShop1;
    cout << "\n";

    cout << "Introduzca el precio del producto en el establecimiento número 2, en euros: ";
    cin >> priceShop2;
    cout << "\n";

    cout << "Introduzca el precio del producto en el establecimiento número 3, en euros: ";
    cin >> priceShop3;
    cout << "\n";

    media = (priceShop1 + priceShop2 + priceShop3) / 3;

    cout << "El precio medio del producto es: " << media << " Euros.";

    return 0;
}
