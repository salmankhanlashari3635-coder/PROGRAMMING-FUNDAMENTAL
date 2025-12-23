#include<iostream>
using namespace std;

int main()
{
    int year;
     
    cout<<"Enter year: ";
    cin>>year;

    if(year % 4 == 0 && year % 1000 != 0 || year % 400 == 0){
        
        cout<<"leap year"<<endl;
    }
    else{
        
        cout<<"not a leap year"<<endl;

    }
}