#include <iostream>
 using namespace std;

class Demo {
     private:
         int num;
    void readNo() {
        cout << "Enter a number: ";
               cin >> num;
    }

public:
      void factorial() {
        readNo();
         int fact = 1;
          for (int i = 1; i <= num; i++)
                    fact *= i;

        cout << "Factorial of " << num << " = " << fact << endl;
    }

      void reverseNo() {
          readNo();
           int n = num, rev = 0;
             while (n > 0) {
                    rev = rev * 10 + (n % 10);
             n /= 10;
        }
        cout << "Reverse of " << num << " = " << rev << endl;
    }

void isPalindrome() {
        readNo();
     int n = num, rev = 0;
         while (n > 0) {
                    rev = rev * 10 + (n % 10);
         n /= 10;
        }

        if (rev == num)
            cout << num << " is Palindrome." << endl;
                else
            cout << num << " is NOT Palindrome." << endl;
    }


      void isArmstrong() {
        readNo();
        int n = num, sum = 0, digit;

        while (n > 0) {
                    digit = n % 10;
            sum += digit * digit * digit;
                     n /= 10;
        }

        if (sum == num)
            cout << num << " is an Armstrong Number." << endl;
                  else
            cout << num << " is NOT an Armstrong Number." << endl;
    }
};


int main() {
    Demo d;
    d.factorial();
    d.reverseNo();
    d.isPalindrome();
    d.isArmstrong();

    return 0;
}

