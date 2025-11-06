#include "car.h"
#include "rectangle.h"
#include "student.h"

#include <iostream>

#include <memory>

using namespace std;

int main()
{
    Car objCar1;
    objCar1.setBrand("Toyota");
    objCar1.setModel("Carina 2");
    objCar1.setYearModel(1998);
    objCar1.printData();


    Rectangle *objRectangle1 = new Rectangle;
    objRectangle1->setWidth(2);
    objRectangle1->setHeight(4);
    cout <<
        "Rectangles area: " <<
        objRectangle1->getArea() <<
        "\nRectangles circumference: " <<
        objRectangle1->getCircum() <<
        endl;
    delete objRectangle1;
    objRectangle1 = nullptr;


    unique_ptr<Student> objStudent1 = make_unique<Student>();
    objStudent1->setName("Heikki");
    objStudent1->setStudentNumber(1);
    objStudent1->setAverage(3.7);

    cout <<
        "Student: " <<
        objStudent1->getName() <<
        "\nStudent number: " <<
        objStudent1->getStudentNumber() <<
        "\nStudents average: " <<
        objStudent1->getAverage() <<
        endl;

    return 0;
}
