#include <iostream>
using namespace std;
int main() {
  int n;
  int ReverseNumber = 0;
  int digit = 0;

  cout << "Enter Number: ";
  cin >> n;

  int temp = n;
  while (temp != 0) {

    digit = temp % 10;
    ReverseNumber = ReverseNumber * 10 + digit;
    temp /= 10;
  }

  cout << "Reverse Number: " << ReverseNumber << endl;

  if (ReverseNumber == n) {

    cout << "this is palindrome number";
  }
}