#include<iostream>
using namespace std;
int main(){
 double amount,rate,time,intreset;

 cout<<"Enter the amount: ";
 cin>>amount;
 
 cout<<"Enter the rate: ";
 cin>>rate;

 cout<<"Enter the duration(years): ";
 cin>>time;
//find interest rate
  intreset = (amount*rate*time)/100;

 cout<<endl;
  cout<<"Amount: "<<amount<<"Rs"<<endl
      <<"Rate: "<<rate<<"%"<<endl
      <<"Duration: "<<time<<"years"<<endl
      <<"Intreset rate: "<<intreset<<"Rs";
}