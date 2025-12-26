#include <iostream>
using namespace std;
int main() {
  int end_n;
  int sum = 0;

  cout << "Enter ending number: ";
  cin >> end_n;

  if (end_n == 0 || end_n < 0) {
    cout << "Invalid Number!" << endl;
  } else {
    for (int i = 1; i <= end_n; i++) {
      if (i % 5 == 0 || i % 3 == 0) {
        sum += i;
      }
    }

    cout << "Sum: " << sum;
  }
}