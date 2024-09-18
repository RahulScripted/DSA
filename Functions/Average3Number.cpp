// Create a C++ program that calculates the average of three numbers. 

#include<iostream>
using namespace std;
float average3(int num1,int num2,int num3){
    return (num1 + num2 + num3) / 3.0;
}
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    cout<<"Average will be : "<<average3(num1,num2,num3);
}