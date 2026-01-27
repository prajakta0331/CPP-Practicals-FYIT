#include <iostream>
using namespace std;

class Shape {
     public:
         virtual void draw() = 0;
};

       class Circle : public Shape {
        public:
        void draw() {
        cout << "Drawing Circle" << endl;
                  }
                      };

 int main (){
 Shape*s;
 Circle c;

 s= &c;
 s->draw();
 return 0;
 }
