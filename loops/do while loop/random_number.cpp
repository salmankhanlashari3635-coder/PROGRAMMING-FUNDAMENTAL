#include<iostream>
#include<random>
#include<chrono>
using namespace std;
int main()
{   
    int num;
     unsigned seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(seed);                    // Seed from current time
    uniform_int_distribution<> dist(1, 10);
   
    int random_number;
    
    do{
         random_number = dist(gen);
        cout<<"enter number(guess number): ";
        cin>>num;
        if(num == random_number){
            cout<<"correct guess(you win)";
        }else if(num > random_number){
            cout<<"high: try again "<<endl;
        }else{
            cout<<"low: try again"<<endl;
        }
        
    }while(num != random_number);
}
