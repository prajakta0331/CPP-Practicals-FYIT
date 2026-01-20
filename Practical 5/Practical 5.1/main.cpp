#include <iostream>

using namespace std;

class complex{
int real, imag;

public:
    complex(int r=0, int i=0){
    real=r;
    imag=i;
    }

    complex add (complex c) {
    return complex(real+c.real,c.imag+c.imag);
    }

    void display(){
    cout<< real<< "+"<<imag<<"i"<<endl;
    }

    };

    int main(){
    complex c1 (3,4), c2(1,2);
    complex c3 = c1. add (c2);
    cout<<"sum of complex numbers: ";
    c3.display();

    return 0;
    }
