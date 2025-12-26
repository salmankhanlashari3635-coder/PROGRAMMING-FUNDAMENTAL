#include <iostream>
using namespace std;
int main() {
  string setpassword, password;
  bool isloggedin;
  int attempts = 3;

  cout << "set password: ";
  cin >> setpassword;

  while (attempts > 0) {

    cout << "Enter password: ";
    cin >> password;

    if (password == setpassword) {
      isloggedin = true;
      break;
    } else {
      cout << "incorect password!" << endl;
    }
    attempts = attempts - 1;
    cout << attempts << " remain" << endl;
  }

  if (isloggedin) {
    cout << "correct password";
  } else {
    cout << "Account locked!";
  }
}