// Create a function to display sum of two integers

#include<iostream>
using namespace std;

int sum(int num1,int num2,int num3){
    return (num1 + num2 + num3);
}
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    cout<<"Sum will be : "<<sum(num1,num2,num3);
}