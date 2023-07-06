#include "Rental.h"

Rental::Rental(Car car, Client client, int16_t price) : car(car), client(client), price(price) {};

Car Rental::getCar() {
    return car;
}
Client Rental::getClient() {
    return client;
}
int16_t Rental::getPrice() {
    return price;
}
void Rental::setCar(Car car) {
    this->car = car;
}
void Rental::setClient(Client client) {
    this->client = client;
}
void Rental::setPrice(int16_t price) {
    this->price = price;
}
void Rental::print() {
    cout << "Welcome to the rental class, Car: " << endl;
    car.print();
    client.print();
    cout << "Price: " << price << endl;
}





