#include <iostream>

using namespace std;

class geometry{
public:
    double area(double r){
    return 3.14*r*r;
    }

    int area (int l, int b){
    return l*b;
    }

double area (double base, double height) {
    return 0.5 * base * height;
    }


    int volume (int  side){
    return side*side*side;
    }

    int volume (int l, int b, int h){
        return l*b*h;
    }
        };

        int main(){
        geometry g;

    cout << "Area of circle:" <<g.area(5.0)<< endl;

    cout << "Area of  reactangle:" <<g.area(4,6)<< endl;

    cout << "Area of triangle:" <<g.area(5.0,3.0)<< endl;

    cout << "Volume of cube:" <<g.volume(3)<< endl;

    cout << "Volume of cuboid:" <<g.volume(4,5,6)<< endl;

    return 0;
}
