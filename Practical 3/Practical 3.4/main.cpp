#include <iostream>

using namespace std;

class Sample {
 int x;
public:
 void getData();
 void showData();
};

void Sample::getData() {
 cout << "Enter a number: ";
 cin >> x;
}
void Sample::showData() {
 cout << "Number = " << x;
}
int main() {
 Sample obj;
 obj.getData();
 obj.showData();
 return 0;
}
