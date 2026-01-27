#include <iostream>
using namespace std;

class Employee {
     private:
    string name;
     int account_no;
    float balance;

public:
     void readData() {
        cout << "Enter Employee Name: ";
               cin >> name;
        cout << "Enter Account Number: ";
             cin >> account_no;
        cout << "Enter Ini al Balance: ";
          cin >> balance;
    }

         void displayData() {
        cout << "\n---- Employee Details ----\n";
               cout << "Name: " << name << endl;
                 cout << "Account No: " << account_no << endl;
                          cout << "Balance: " << balance << endl;
    }


     void deposit(float amt) {
            balance += amt;
        cout << "Amount Deposited: " << amt << endl;
             cout << "Updated Balance: " << balance << endl;
    }

        void withdraw(float amt) {
                if (amt > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
               balance -= amt;
            cout << "Amount Withdrawn: " << amt << endl;
                 cout << "Updated Balance: " << balance << endl;
        }
    }
};

int main() {
    Employee e;

    e.readData();
    e.displayData();

    float amount;

    cout << "\nEnter amount to Deposit: ";
      cin >> amount;
    e.deposit(amount);

    cout << "\nEnter amount to Withdraw: ";
      cin >> amount;
    e.withdraw(amount);

    return 0;
}
