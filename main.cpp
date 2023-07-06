
#include <iostream>
#include "Rental.h"
#include "Car.h"
#include "Client.h"
#include "CarType.h"

using namespace std;

int main()
{
CarType carType("Opel", "Asteroid");
Car car(carType, 25000);
Client client("Sebastian", "Majdan");
const int16_t price = 1232;
Rental rental(car, client, price);
rental.print();
cout << "Car type objects created " << CarType::counter << " times";
return 0;
}
