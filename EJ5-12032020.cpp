#include <iostream>

using namespace std;

/* Hacer un programa en C++ para ayudar a un trabajador a saber cuál será su sueldo semanal,
se sabe que si trabaja 40 horas o menos, se le pagará $20 por hora,
pero si trabaja más de 40 horas entonces
las horas extras se le pagarán a $25 por hora.
*/

float pagarSemana (float horasTrabajadas, float precioHora)
{
    return horasTrabajadas * precioHora;
}

float pagarHorasExtras (float horasTrabajadas, float precioHoraExtra, float precioHora)
{
    return (horasTrabajadas - 40) * (precioHoraExtra - precioHora);
}

int main()
{
    float horasTrabajadas = 0, pagoSemanal = 0, horasExtras = 0, pagoTotal = 0;
    float precioHora = 20, precioHoraExtra = 25;
    cout << "Ingrese la cantidad de horas trabajadas: ";
    cin >> horasTrabajadas;
    cout << "\n";

    if (horasTrabajadas <= 40)
    {
        pagoSemanal = pagarSemana(horasTrabajadas, precioHora);
        cout << "Su pago de la semana es: " << pagoSemanal;
        cout << "\n";
    }

    if (horasTrabajadas > 40)
    {
        pagoSemanal = pagarSemana(horasTrabajadas, precioHora);
        horasExtras = pagarHorasExtras(horasTrabajadas, precioHoraExtra, precioHora);
        pagoTotal = pagoSemanal + horasExtras;
        cout << "Su pago de la semana es: " << pagoSemanal;
        cout << "\n";
        cout << "Sus horas extras son: " << horasExtras;
        cout << "\n";
        cout << "Su pago total es: " << pagoTotal;
        cout << "\n";
    }


    return 0;
}
