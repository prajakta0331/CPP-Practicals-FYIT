#include <iostream>
 using namespace std;

 int main() {
    double num1, num2, num3;
     cout << "Enter three numbers: ";
     cin >> num1 >> num2 >> num3;

    double greatest;
    if (num1 >= num2 && num1 >= num3) {
                greatest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
               greatest = num2;
    } else {
          greatest = num3;
    }
    cout << "The greatest number is: " << greatest << endl;
    return 0;
}
