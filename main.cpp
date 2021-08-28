#include <iostream>
#include <cmath>
#include "baslik.h"
// overloading


using namespace std;

class testSinif {
public:
    int a, b;

    testSinif() {
        a = b = 0;
    }

    testSinif(int x, int y) {
        a = x, b = y;
    }

    testSinif operator+(testSinif param) {
        testSinif gecici;
        cout << "param.x : " << param.a << "\n";
        cout << "param.y : " << param.b << "\n";
        cout<<"x : "<<a<<"\n";
        cout<<"y : "<<b<<"\n";
        gecici.a = a + param.a;
        gecici.b = b + param.b;
        return  gecici;
    }
};


int main() {

    testSinif a(5, 7);
    testSinif b(9, 3);
    testSinif c;
    c = a + b;
    cout<<"******************"<<"\n";
    cout<<"c nin a : "<<c.a<<"\n";
    cout<<"c nin b : "<<c.b<<"\n";
    return 0;
}





