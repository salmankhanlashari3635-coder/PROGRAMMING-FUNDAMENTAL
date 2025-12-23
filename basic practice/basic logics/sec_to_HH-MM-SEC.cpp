#include<iostream>
using namespace std;
int main(){
int sec;

cout<<"Enter the amount in sec: ";
cin>>sec;

int h = sec / 3600;
sec = sec % 3600;
int m = sec /60;
int s = sec % 60;

cout<<"HH-MM-SEC = "<<h<<":"<<m<<":"<<s;

}