#include<iostream>
using namespace std;

int main(){
    int number;

    cout<<"Enter number(5 digit): ";
    cin>>number;

// reverse digit upto 5

    int a = number /  10000;
    int e = number % 10;
    number /= 10;
    int d = number % 10;
    number /= 10;
    int  c = number % 10;
    number /= 10;
    int b = number % 10;

    cout<<"reverse = "<<e<<d<<c<<b<<a;

}