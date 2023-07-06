#ifndef CAR_H_
#define CAR_H_

#include "CarType.h"

using namespace std;

class Car : public CarType {
public:
    Car(CarType carType, int32_t mileage);
    Car();
    
    CarType getCarType();
    int32_t getMileage();
    void setCarType(CarType carType);
    void setMileage(int32_t mileage);
    void print();
private:
    CarType carType;
    int32_t mileage;
};

#endif // CAR_H_
