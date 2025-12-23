#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    // MENU line
    cout << setfill('-') << setw(13) << "MENU" << endl;

    // reset fill
    cout << setfill(' ');

    // header
    cout << "ID" << setw(12) << "ITEM" << setw(10) << "PRICE" << endl;

    // rows using proper padding
    cout << setfill('0') << setw(3) << 1 << setfill(' ') 
         << setw(12) << "Burger" << setw(10) << 450 << endl;

    cout << setfill('0') << setw(3) << 15 << setfill(' ') 
         << setw(12) << "Zinger" << setw(10) << 620 << endl;

    cout << setfill('0') << setw(3) << 120 << setfill(' ') 
         << setw(12) << "Fries" << setw(10) << 150 << endl;

    return 0;
}
