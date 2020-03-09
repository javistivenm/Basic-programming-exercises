#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    /*
    cout << "Enter price: ";
    getline(cin, mystr);
    stringstream(mystr) >> price;*/

    int PassengerCar = 32;
    int OffRoad = 11;
    int CapPassengerCar = 40;
    int CapOffRoad = 65;
    int RequiredFuel = 0;
    string mystr;

    cout << "Este ejemplo es estatico. \n\n";

    cout << "La necesidad de combustible calculada estaticamente es: ";
    RequiredFuel = (PassengerCar * CapPassengerCar) + (OffRoad * CapOffRoad);
    cout << RequiredFuel;

    cout << "\n\nAhora vamos a pedir por pantalla las necesidades de combustible.\n\n";

    cout << "Introducir la necesidad de combustible de Turismo: ";
    getline(cin, mystr);
    stringstream(mystr) >> PassengerCar;

    cout << "\nIntroducir la capacidad de combustible de Turismo: ";
    getline(cin, mystr);
    stringstream(mystr) >> CapPassengerCar;

    cout << "\nIntroducir la necesidad de combustible de Todo Terreno: ";
    getline(cin, mystr);
    stringstream(mystr) >> OffRoad;

    cout << "\nIntroducir la capacidad de combustible de Todo Terreno: ";
    getline(cin, mystr);
    stringstream(mystr) >> CapOffRoad;

    cout << "\nLa necesidad de combustible ingresada es: ";
    RequiredFuel = (PassengerCar * CapPassengerCar) + (OffRoad * CapOffRoad);
    cout << RequiredFuel;


    return 0;
}
