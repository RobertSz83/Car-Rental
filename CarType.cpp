#include "CarType.h"
#include <iostream>

int CarType::counter = 0;

CarType::CarType(string brand, string model) : brand(brand), model(model) {
    counter++;
}

CarType::CarType() {
    counter++;
}

string CarType::getBrand() {
    return brand;
}

string CarType::getModel() {
    return model;
}

void CarType::setBrand(string brand) {
    this->brand = brand;
}

void CarType::setModel(string model) {
    this->model = model;
}

void CarType::print() {
    cout << "Brand: " << brand << ", Model: " << model << endl;
}
