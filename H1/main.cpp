#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void calcSum(int, int);
void calcDiv(int, int);
int retSum(int, int);
float retDiv(int, int);

void calcSum(int a, int b){
    cout << "Lukujen " << a << " ja " << b << " " << "summa on " << a+b << endl;
}

void calcDiv(int a, int b){
    if (b==0){
        cout << "Jakaja ei saa olla 0!" << endl;
    } else {
        cout << "Lukujen " << a << " ja " << b << " " << "osamaara on " << fixed << setprecision(2) << (float)a/b << endl;
    }
}

int retSum(int a, int b) {
    return a+b;
}

float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("Jakaminen nollalla.");
    }
    return (float) a/b;
}

int main()
{
    int a, b, sum;
    float result;
    cout << "Anna luku: " << endl;
    cin >> a;
    cout << "Anna seuraava luku: " << endl;
    cin >> b;
    calcSum(a,b);
    calcDiv(a,b);
    sum = retSum(a,b);
    cout << a << "+" <<  b << " = " << sum << endl;
    try {
        result = retDiv(a,b);
        cout << a << "/" <<  b << " = " << fixed << setprecision(2) << result << endl;
    } catch (runtime_error& e) {
        cout<<"Error: "<< e.what()<< endl;
    }
    return 0;
}
