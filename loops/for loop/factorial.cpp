#include <iostream>
using namespace std;
int main() {
  unsigned int n;
  long long factorial = 1;
  int temp = n;

  cout << "Enter number: ";
  cin >> n;

  cout << "factorial of " << n << "! = ";

  for (int i = n; i >= 1; i--) {

    factorial *= i;
    cout << i;

    if (i != 1) {

      cout << "*";
    }
  }
  cout << " = " << factorial;
}
