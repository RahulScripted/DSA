// Create a function to display greatest among 3 numbers

#include<iostream>
using namespace std;

int greatestAmong2(int num1,int num2,int num3){
    if(num1 > num2 && num1 > num3){
        cout<<"Greatest number is : "<<num1;
    }
    else{
        if(num2 > num3){
            cout<<"Greatest number is : "<<num2;
        }
        else{
            cout<<"Greatest number is : "<<num3;
        }
    }
}
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    greatestAmong2(num1,num2,num3);
}