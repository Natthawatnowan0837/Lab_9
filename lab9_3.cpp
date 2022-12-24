#include <iostream>
using namespace  std ;
int main(){
    int age ,height ,bounty;
    string sum;
    cout <<"Enter your age: " ;
    cin >> age ;
    if(age <= 25){
        cout << "Enter your height: ";
        cin >> height ;
            if(height < 100){
                sum = "Chopper";

            }else if(height <180){
                sum ="Usopp";

            }else{
                cout<<"Enter your bounty: ";
                cin >> bounty ;
                if(bounty > 1100000000){
                    sum = "Zoro";
                }else{
                    sum= "Sanji";
                }
            }
            
    }else if(age <= 60){
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty > 500000000){
            sum= "Jinbe";
        }else{
            sum= "Franky";
        }
    }else{
        sum ="Brook" ;
    }
    cout <<"Your character = " <<sum;
}

