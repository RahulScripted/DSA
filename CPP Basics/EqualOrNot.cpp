// Enter two numbers from keyboard. Write a program to check if the two numbers are equal.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    if(num1 == num2){
        cout<<"Equal";
    }
    else{
        cout<<"Not equal";
    }
}