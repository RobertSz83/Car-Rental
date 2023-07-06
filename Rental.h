#ifndef RENTAL_H_
#define RENTAL_H_

#include "Car.h"
#include "Client.h"

class Rental : public Car, public Client {
public:
    Rental(Car car, Client client, int16_t price);

    Car getCar();
    Client getClient();
    int16_t getPrice();
    void setCar(Car car);
    void setClient(Client client);
    void setPrice(int16_t price);
    void print();
private:
    Car car;
    Client client;
    int16_t price;
};

#endif // RENTAL_H_
