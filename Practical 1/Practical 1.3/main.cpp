#include <iostream>
 using namespace std;

const double PI = 3.14159;

double volumeCube(double side) {
        return side * side * side;
}

double volumeCone(double radius, double height) {
      return (PI * radius * radius * height) / 3;
}

double volumeRectPrism(double length, double width, double height) {
       return length * width * height;
}




int main() {
       double side;
   cout << "Enter the side length of the cube: ";
cin >> side;     cout << "Volume of the cube: " << volumeCube(side) << endl;

    double radius, height;
      cout << "Enter the radius and height of the cone: ";
      cin >> radius >> height;
       cout << "Volume of the cone: " << volumeCone(radius, height) << endl;

    double length, width, heightRect;
         cout << "Enter the length, width, and height of the rectangular prism: ";
    cin >> length >> width >> heightRect;
    cout << "Volume of the rectangular prism: " << volumeRectPrism(length, width, heightRect) << endl;

    return 0;
}
