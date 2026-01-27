#include <iostream>
using namespace std;

class Distance2;
class Distance1 {

private:
 int feet, inches;

public:
 Distance1(int f, int i)
 {
feet = f;
inches = i;
 }

 friend void addDistance(Distance1, Distance2);
};
class Distance2 {
private:
 int feet, inches;
public:
 Distance2(int f, int i)
 {
 feet = f;
inches = i;
 }
 friend void addDistance(Distance1, Distance2);
};
void addDistance(Distance1 d1, Distance2 d2) {

 int f = d1.feet + d2.feet;
 int i = d1.inches + d2.inches;
 if (i >= 12) {
 f += i / 12;
 i = i % 12;
 }

 cout << "Total Distance = " << f << " feet " << i << " inches" << endl;
}

int main() {
 Distance1 d1(5, 8);
 Distance2 d2(3, 10);
 addDistance(d1, d2);
 return 0;
}
