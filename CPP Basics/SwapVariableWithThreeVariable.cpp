// Write a C++ program that swaps the values of two variables with third variable

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Before Swap : "<<num1<<" "<<num2<<endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout<<"After Swap : "<<num1<<" "<<num2<<endl;
}