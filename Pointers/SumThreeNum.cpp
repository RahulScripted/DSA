// Write a program to calculate sum of 3 numbers by using pointers.

#include<iostream>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter second number : ";
    cin>>num3;
    int *n1 = &num1;
    int *n2 = &num2;
    int *n3 = &num3;
    cout<<"Sum will be : "<<(*n1 + *n2 + *n3);
}