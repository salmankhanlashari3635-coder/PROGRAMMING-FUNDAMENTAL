#include<iostream>
using namespace std;
int main(){
    int age,credit_score;
    double income;

    cout<<"Enter age: ";
    cin>>age;

    cout<<"Enter credit score: ";
    cin>>credit_score;

    cout<<"Enter income: ";
    cin>>income;
    if(age < 21 || age> 60){
    
        cout<<"not eligible: Age critarea failed"<<endl;

    }
    else if (credit_score < 650){

       

        cout<<"not eligible: due to low credit score";

        

    }else{
        if(income >= 2000000.0){

            cout<<"intereset rate 5%";

        }else if(income >= 1000000.0 && income <1999999.0 ){
            
             cout<<"interest rate 7%";
        }
        else {
          
            cout<<"Not eligible: low income";
        
        }
    }
}