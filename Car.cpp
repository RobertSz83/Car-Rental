#include "Car.h"
#include <iostream>

Car::Car(CarType carType, int32_t mileage) : carType(carType), mileage(mileage) {}

Car::Car() {}

CarType Car::getCarType() {
    return carType;
}

int32_t Car::getMileage() {
    return mileage;
}

void Car::setCarType(CarType carType) {
    this->carType = carType;
}

void Car::setMileage(int32_t mileage) {
    this->mileage = mileage;
}

void Car::print() {
    carType.print();
    cout << "Mileage: " << mileage << endl;
}
