#include <iostream>

using namespace std;

class number{
int x;

public:
    number(int a) {
    x=a;
    }

    void operator -() {
    x=-x;
    }

    void display() {
    cout<<"Value:"<<x<<endl;
    }
    };
int main()
{
    number n(10);
    -n;
    n.display();

    return 0;
}
