#include "car.h"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<Car> carList;
    for (int i = 1; i<4; i++){
        carList.emplace_back("Auto " + to_string(i), "Model " + to_string(i), 1990+i);

    }
    cout << "Second car" << endl;
    carList[1].printData();
    cout << endl;
    cout << "Car list" << endl;
    for (Car car : carList) {
        car.printData();
    }
    return 0;
}
