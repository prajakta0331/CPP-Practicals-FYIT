#include <iostream>
using namespace std;

 class Student
 {
     public:
    string name;
      int roll_no;
     void readData()
      {
           cout << "Enter Name: ";
              cin >> name;
        cout << "Enter Roll Number: ";
             cin >> roll_no;
    }
    void displayData() {
        cout << "\n--- Student Details ---" << endl;
             cout << "Name: " << name << endl;
                cout << "Roll Number: " << roll_no << endl;
    }
};
int main() {
    Student s;

    s.readData();

    s.displayData();
    return 0;
}
