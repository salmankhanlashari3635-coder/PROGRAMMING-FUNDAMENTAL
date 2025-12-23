// write program that input total marks obtain marks and then find percentage;
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int total,obtained;

    cout<<"Enter total marks: ";
    cin>>total;

    cout<<"obtained marks: ";
    cin>>obtained;

    double percentage = (double)obtained/(double)total*100;

    cout<<fixed<<setprecision(2);
    
    cout<<"total marks: "<<total<<endl
        <<"obtained marks: "<<obtained<<endl
        <<"percentage: "<<percentage<<endl;
    
}