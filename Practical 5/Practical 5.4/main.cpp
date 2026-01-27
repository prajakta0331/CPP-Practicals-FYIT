#include <iostream>
using namespace std;

class fibonacci{
int n;

public:
    fibonacci(int x) {
    n=x;
    }

    void generate() {
        int a=0,b=1,c;
    cout<<"Fibonacci series:";

    for (int i=1; i<=n; i++){
    cout<<a<<" ";
    c=a+b;
    a=b;
    b=c;
    }
      }
           };


int main() {
    fibonacci f(10);
 f.generate();

    return 0;
}
