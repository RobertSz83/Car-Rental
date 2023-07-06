#ifndef CAR_TYPE_H_
#define CAR_TYPE_H_

#include <iostream>

using namespace std;

class CarType {
public:
    static int counter;
    CarType();
    CarType(string brand, string model);
    string getBrand();
    string getModel();
    void setBrand(string brand);
    void setModel(string model);
    void print();
private:
    string brand;
    string model;
};

#endif // CAR_TYPE_H_
