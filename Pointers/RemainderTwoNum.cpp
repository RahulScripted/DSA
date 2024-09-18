// Write a program to calculate remainder of 2 numbers by using pointers.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int *n1 = &num1;
    int *n2 = &num2;
    cout<<"Remainder will be : "<<(*n1 % *n2);
}