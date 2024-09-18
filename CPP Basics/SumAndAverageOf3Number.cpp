// Create a C++ program that calculates the sum & average of three numbers. 

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    cout<<"Sum will be : "<<(num1 + num2 + num3)<<endl;
    cout<<"Average will be : "<<(num1 + num2 + num3) / 3;
}