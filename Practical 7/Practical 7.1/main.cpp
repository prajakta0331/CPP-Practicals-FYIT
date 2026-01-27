#include <iostream>
 using namespace std;

  class Base {
      public:  void show() {
          cout << "Show function of Base class" << endl;
           }
           };

    class Derived :
    public Base {
    public:
    void show() {
    cout << "Show function of Derived class" << endl;
    }
    };


     int main() {
       Derived d;
       d.show();
        return 0; }
