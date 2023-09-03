#include<iostream>
using namespace std;
int main(){
//this program is write to print all prime number till N
int n;
int num;
num=2;
cout<<"Enter a number";
cin>>n;
while(num<=n){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0)
        {
            break;
        }
    }
    if(i==num)
    {   
        cout<<num;
        cout<<" is prime\n";
    }
    num=num+1;
}


 return 0;
}