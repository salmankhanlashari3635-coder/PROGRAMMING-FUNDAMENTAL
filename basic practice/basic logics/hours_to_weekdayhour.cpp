#include<iostream>
using namespace std;

int main(){
    int hr;
    cout<<"Enter hours: ";
    cin>>hr;
    int w = hr /168;
    hr = hr % 168;
    int d = hr / 24;
     hr = hr % 24;

    cout<<"week: "<<w<<endl
        <<"day: "<<d<<endl
        <<"hour: "<<hr;

}