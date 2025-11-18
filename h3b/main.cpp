#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    Animal objAnimal;
    Dog objDog1;

    objAnimal.callOut();
    objDog1.callOut();
    return 0;
}
