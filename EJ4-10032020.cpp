#include <iostream>

using namespace std;

int main()
{
    int cant_zapato = 0;
    int precio = 80;
    float total_venta =0;
    float descuento = 0;

    cout << "Introduzca la cantidad de zapatos a comprar: ";
    cin >> cant_zapato;
    cout << "\n";

    if (cant_zapato <= 10) {
        total_venta = cant_zapato * precio;
        cout << "El valor de su venta es: " << total_venta << " su descuento es: " << descuento;
    }

    else if (cant_zapato > 10 && cant_zapato < 21){
        total_venta = (cant_zapato * precio) - ((cant_zapato * precio) * 0.10);
        descuento = ((cant_zapato * precio) * 0.10);
        cout << "El valor de su venta es: " << total_venta << " su descuento es: " << descuento;
    }

    else if (cant_zapato > 20 && cant_zapato < 31){
        total_venta = (cant_zapato * precio) - ((cant_zapato * precio) * 0.20);
        descuento = ((cant_zapato * precio) * 0.20);
        cout << "El valor de su venta es: " << total_venta << " su descuento es: " << descuento;

    }
    else if (cant_zapato > 30){
        total_venta = (cant_zapato * precio) - ((cant_zapato * precio) * 0.40);
        descuento = ((cant_zapato * precio) * 0.40);
        cout << "El valor de su venta es: " << total_venta << " su descuento es: " << descuento;

    }
    return 0;
}
