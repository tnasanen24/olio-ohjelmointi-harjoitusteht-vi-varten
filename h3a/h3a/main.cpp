#include "chef.h"
#include "italianchef.h"

#include <iostream>

using namespace std;

int main()
{
    Chef objChef("Gordon Ramsay");
    objChef.makeSalad();
    objChef.makeSoup();

    ItalianChef objChef2("Anthony Bourdain");
    objChef2.makeSoup();
    objChef2.makeSalad();
    objChef2.makePasta();
    cout <<
        "Name of the Italian Chef is " <<
        objChef2.getName() << endl;
    return 0;
}
