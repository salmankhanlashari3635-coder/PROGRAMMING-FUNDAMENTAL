#include <cmath>
#include <iostream>

using namespace std;
int main() {
  double num1, num2;
  int select;

  cout << "Enter 1st Number: ";
  cin >> num1;

  cout << "Enter 2nd Number: ";
  cin >> num2;

  do {
    cout << endl;
    cout << "1-Add" << endl;
    cout << "2-Subtract:" << endl;
    cout << "3-Multiply:" << endl;
    cout << "4-Division: " << endl;
    cout << "5-Reminder: " << endl;
    cout << "6-exit: " << endl;
    cin >> select;

    if (select == 1) {

      double sum = num1 + num2;
      cout << sum;
    } else if (select == 2) {

      double sub = num1 - num2;
      cout << sub;

    } else if (select == 3) {

      double Multiply = num1 * num2;
      cout << Multiply;
      
    } else if (select == 4) {
      if (num2 == 0) {
        cout << "Error: Division by zero is not allowed." << endl;

      } else {

        double Divide = num1 / num2;
        cout << Divide;
      }
    } else if (select == 5) {
      if (num2 == 0) {
        cout << "Error:  by zero is not allowed." << endl;

      } else {

        double Reminder = fmod(num1, num2);
        cout << Reminder;
      }
    } else {
      cout << "exit";
    }
  } while (select != 6);
}
