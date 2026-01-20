#include <iostream>
using namespace std;

class Complex {

private:
 float real, imag;

public:
 Complex(float r = 0, float i = 0) {
 real = r;
 imag = i;
 }

 friend Complex add(Complex, Complex);
 void display() {

 cout << real << " + " << imag << "i" << endl;
 }
};

Complex add(Complex c1, Complex c2) {
 Complex temp;
 temp.real = c1.real + c2.real;
 temp.imag = c1.imag + c2.imag;
 return temp;
}

int main() {
 Complex c1(4.5, 2.3), c2(3.2, 1.7);
 Complex c3 = add(c1, c2);
 cout << "Sum of Complex Numbers: ";
 c3.display();
 return 0;
}
