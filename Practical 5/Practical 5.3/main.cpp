#include <iostream>
using namespace std;

class staticDemo{
static int count;

public:
    staticDemo() {
    count++;
    }

    static void showCount() {
    cout<<"Object count:"<<count<<endl;
    }
    };

    int staticDemo::count=0;

int main(){
    staticDemo s1, s2, s3;
    staticDemo:: showCount();

    return 0;
}
