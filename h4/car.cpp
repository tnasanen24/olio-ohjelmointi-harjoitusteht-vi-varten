#include "car.h"
#include <iostream>

void Car::setEngine()
{
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1.setSize(17);
    objWheel1.setType("kesarengas");

    objWheel2.setSize(17);
    objWheel2.setType("kesarengas");

    objWheel3.setSize(17);
    objWheel3.setType("kesarengas");

    objWheel4.setSize(17);
    objWheel4.setType("kesarengas");
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}

Car::Car() {}

Car::Car(string brand, string model)
{
    this->brand = brand;
    this->model = model;
}

void Car::printDetails()
{
    cout << "Auto : "
         << model
         << " "
         << brand
         << "\n"
         << "Moottori: "
         << objEngine.getHorsepower()
         << " hp, "
         << objEngine.getDisplacement()
         << " L"
         << "\n"
         << "Rengas 1:"
         << objWheel1.getSize()
         << " tuumaa, "
         << objWheel1.getType()
         << "\n"
         << "Rengas 2:"
         << objWheel2.getSize()
         << " tuumaa, "
         << objWheel2.getType()
         << "\n"
         << "Rengas 3:"
         << objWheel3.getSize()
         << " tuumaa, "
         << objWheel3.getType()
         << "\n"
         << "Rengas 4:"
         << objWheel4.getSize()
         << " tuumaa, "
         << objWheel4.getType()
         << endl;
}
