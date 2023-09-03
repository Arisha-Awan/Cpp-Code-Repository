#include<iostream>
using namespace std;

int main(){
    int num1;
    int num2;
    int num3;
    cout<<"enter 3 numbers\n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    if(num1>num2)
    {
        if(num1>num3){   
            cout<<num1;
            cout<<"is greatest";
        }
        else{
            cout<<num3;
            cout<<"num3 is greatest";
        }
    }
    else{
        if(num2>num3){
            cout<<num2;
            cout<<"num2 is greatest";
        }
        else{
            cout<<num3;
            cout<<"is greatest";
        }
    }
    return 0;
}