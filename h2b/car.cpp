#include "car.h"
#include <iostream>

Car::Car() {

}

Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData()
{
    cout << "Brand: " << brand << endl;
    cout << "Model: " << model << endl;
    cout << "Yearmodel: "<< yearModel << endl;
}
