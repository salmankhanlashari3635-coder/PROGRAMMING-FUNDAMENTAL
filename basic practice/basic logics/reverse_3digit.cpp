#include<iostream>
using namespace std;
int main(){
    int num;

    cout<<"Enter number(3 digit): ";
    cin>>num;

//find reverse upto 3 digit

    int r = num / 100;
    int n = num %100;
    n /= 10;
    int a = num % 10;


    cout<<"reverse: "<<a<<n<<r;

}