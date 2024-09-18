// Write a program that reads two integers and checks whether they are multiplied or not.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    if(num2 % num1 == 0){
        cout<<"Multiplied";
    }
    else{
        cout<<"Not multiplied";
    }
}