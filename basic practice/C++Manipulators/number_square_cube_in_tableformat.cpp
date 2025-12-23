

//    number    square      cube
    //      1         1         1
    //      2         4         8
    //      3         9        27
    //      4        16        64
    //      5        25       125


#include<iostream>
#include<iomanip>
using namespace std;
int main(){
// use setw for adjust the width 
cout<<setw(10)<<"number"<<setw(10)<<"square"<<setw(10)<<"cube"<<endl;

cout<<setw(10)<<1<<setw(10)<<1*1<<setw(10)<<1*1*1<<endl;

cout<<setw(10)<<2<<setw(10)<<2*2<<setw(10)<<2*2*2<<endl;

cout<<setw(10)<<3<<setw(10)<<3*3<<setw(10)<<3*3*3<<endl;

cout<<setw(10)<<4<<setw(10)<<4*4<<setw(10)<<4*4*4<<endl;

cout<<setw(10)<<5<<setw(10)<<5*5<<setw(10)<<5*5*5<<endl;

return 0;

}
