#include<iostream>
using namespace std;
int main(){
   int a = 32;
   int b = 45;
    //swap the value

     a = a + b;
     b = a - b;
     a = a - b;
    
   cout<<"a: "<<a<<endl<<"b: "<<b;
}