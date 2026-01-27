#include <iostream>
using namespace std;

class Compare {
private:
 int a, b;
public:
 Compare(){
 a=1;
 b=2;
 }

Compare(int x, int y)
{ a = x;
 b = y; }

 void setData()
 {
 cout<<"enter 1st number:";
 cin>>a;
 cout<<"enter 2nd number:";
 cin>>b;
 }
 friend int findMax(Compare);
};

int findMax(Compare c) {
 return (c.a > c.b) ? c.a : c.b;
}

int main() {
 Compare c;
 c.setData();

 cout << "Maximum Number = " << findMax(c)<<endl;
 cout<<endl;
 cout<<"checking max between 56 and 89:"<<endl;
 Compare c1(89,56);
 cout << "Maximum Number = " << findMax(c1);
 return 0;
}
