#include <iostream>
 using namespace std;
  bool isPrime(int number) {
         if (number < 2) return false;
         for (int i = 2; i <= number / 2; i++) {
                        if (number % i == 0)
                        return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter a natural number n: ";
       cin >> n;
    cout << "Prime numbers between 1 and " << n << " are: ";
      for (int i = 1; i <= n; i++) {
          if (isPrime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;     return 0;
}
