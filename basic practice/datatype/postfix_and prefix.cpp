#include<iostream>
using namespace std;
int main(){
  int a = 5;
  int b = 10;
  // postfix
  b++;
  a = b;
  cout<<"a: "<<a<<"b: "<<b<<endl;
  //prefix
  ++b;
  cout<<"a: "<<a<<"b: "<<b<<endl;
  a = b;
  
}