#include "simple_atm_system.h"
#include <iostream>

using namespace std;

int main() {

  do {
    cout << "Enter PIN: ";
    cin >> pin;

    attempts -= 1;

    if (pin == setpin) {
      isloggedin = true;
      break;
    } else {
      cout << "Wrong PIN!" << endl;
      cout << attempts << " attempts remaining"
           << endl; // RED: added endl for readability
    }

  } while (attempts != 0);

  if (!isloggedin) {
    cout << "   Account locked!    " << endl;
    cout << "Contact helpline: 03444294692" << endl;
    return 0;
  }

  if (isloggedin) {
    do {
      cout << "---------------- ATM Simulation -------------------\n";
      cout
          << "1-Withdrawal\n2-Deposit\n3-Check Balance\n4-Change PIN\n5-Exit\n";
      cin >> select;

      switch (select) {
      case 1:
        cout << "Enter withdrawal amount: ";
        cin >> withdrawl;
        if (withdrawl > balance || withdrawl <= 0) {
          cout << "Invalid amount!" << endl;
        } else {
          balance -= withdrawl;
          cout << "Withdrawal successful. Current balance: " << balance
               << endl; // RED: show balance
        }
        break;

      case 2:
        cout << "Enter deposit amount: ";
        cin >> deposit;
        if (deposit <= 0) {
          cout << "Invalid deposit amount!" << endl;
        } else {
          balance += deposit;
          cout << "Deposit successful. Current balance: " << balance
               << endl; // RED: show balance
        }
        break;

      case 3:
        cout << "Current balance: " << balance << endl;
        break;

      case 4:
        cout << "Enter old PIN: ";
        cin >> old_pin;
        if (old_pin != setpin) {
          cout << "Incorrect old PIN!" << endl;
        } else {
          do {
            cout << "Enter new PIN: ";
            cin >> new_pin;
            cout << "Confirm new PIN: ";
            cin >> confirm_pin;
            if (new_pin == confirm_pin) {
              setpin = new_pin;
              cout << "PIN changed successfully."
                   << endl; // RED: success message
              break;
            } else {
              cout << "PINs do not match. Try again."
                   << endl; // RED: retry message
            }
          } while (true);
        }
        break;

      case 5:
        cout << "Thanks for using ATM" << endl;
        break;

      default:
        cout << "Invalid choice" << endl;
      }

    } while (select != 5);
  }
}
