#include <iostream>

using namespace std;

float subtotalizar (float precio, float cantidad)
{
    float subtotal;
    subtotal = cantidad * precio;
    return subtotal;
}

float descontar (float baseDescuento, float porcentajeDescuento)
{
    float descuento;
    descuento = baseDescuento * porcentajeDescuento;
    return descuento;

}

float totalizar (float valorSubtotal, float descuentoAplicado)
{
    float total;
    total = valorSubtotal - descuentoAplicado;
    return total;
}


int main()
{
    float subtotal = 0, descuento = 0, total = 0;
    float precioZapatos, cantidadCompra;
    float descuentoHasta10 = 0.00, descuentoHasta20 = 0.10, descuentoHasta30 = 0.20, descuentoMayor30 = 0.40;

    cout << "Ingrese el precio de los zapatos: " << endl;
    cin >> precioZapatos;
    cout << "\n";
    cout << "Ingrese cantidad de zapatos a comprar: " << endl;
    cin >> cantidadCompra;
    cout << "\n";

    if (cantidadCompra < 11)
    {
        subtotal = subtotalizar(precioZapatos, cantidadCompra);
        descuento = descontar(subtotal, descuentoHasta10);
        total = totalizar(subtotal, descuento);
        cout << "El valor sin descuento de su compra es: " << subtotal << endl;
        cout << "Su descuento aplicado es: " << descuento << endl;
        cout << "Su total a pagar es: " << total << endl;
    }

    else if (cantidadCompra > 10 && cantidadCompra < 21)
    {
        subtotal = subtotalizar(precioZapatos, cantidadCompra);
        descuento = descontar(subtotal, descuentoHasta20);
        total = totalizar(subtotal, descuento);
        cout << "El valor sin descuento de su compra es: " << subtotal << endl;
        cout << "Su descuento aplicado es: " << descuento << endl;
        cout << "Su total a pagar es: " << total << endl;
    }

    else if (cantidadCompra > 20 && cantidadCompra < 31)
    {
        subtotal = subtotalizar(precioZapatos, cantidadCompra);
        descuento = descontar(subtotal, descuentoHasta30);
        total = totalizar(subtotal, descuento);
        cout << "El valor sin descuento de su compra es: " << subtotal << endl;
        cout << "Su descuento aplicado es: " << descuento << endl;
        cout << "Su total a pagar es: " << total << endl;
    }
    else if (cantidadCompra > 30)
    {
        subtotal = subtotalizar(precioZapatos, cantidadCompra);
        descuento = descontar(subtotal, descuentoMayor30);
        total = totalizar(subtotal, descuento);
        cout << "El valor sin descuento de su compra es: " << subtotal << endl;
        cout << "Su descuento aplicado es: " << descuento << endl;
        cout << "Su total a pagar es: " << total << endl;
    }

    return 0;
}
