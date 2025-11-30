#include "classa1.h"
#include "classa2.h"
#include "classb.h"

#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 6;
    int* pointerA = &a;
    int &refA = a;

    //&refA = b;  // ei toimi
    //pointerA = &b;

    cout << "Muuttujan a osoite: " << &a << endl;
    cout << "Muuttujan a arvo: " << a << endl;

    cout << "Pointerin pointerA osoittama osoite: " << pointerA << endl;
    cout << "Pointerin *pointerA osoittaman muistipaikan arvo: " << *pointerA << endl;

    cout << "Referenssin &refA osoittama osoite: " << &refA << endl;
    cout << "Referenssin refA osoittaman muistipaikan arvo: " << refA << endl;


    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA1: "<<objA1.getBinfo()<<endl;


    ClassB &refB=objB;
    ClassA2 objA2(refB);
    objA2.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objA2 "<<objA2.getBinfo()<<endl;
    cout<<endl;
    return 0;
}
