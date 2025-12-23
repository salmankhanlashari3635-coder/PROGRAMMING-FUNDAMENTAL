#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double e,g,p;
    cout<<"Enter the rate of electricity: ";
    cin>>e;
    cout<<"Enter the rate of gas: ";
    cin>>g;
    cout<<"Enter the rate of petrol: ";
    cin>>p;
    e += e * 0.10;
    g += g *0.10;
    p += p*0.10;
    cout<<fixed<<setprecision(2);
    cout<<"New price of electricity: "<<e<<endl
        <<"New price of gas: "<<g<<endl
        <<"New price of petrol: "<<p<<endl;;

}