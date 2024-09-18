//  Write a program to perform addition, subtraction, multiplication and division of two numbers

#include<iostream>
using namespace std;
int main(){
    float num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Addition will be : "<<(num1 + num2)<<endl;
    cout<<"Subtraction will be : "<<(num1 - num2)<<endl;
    cout<<"Multiplication will be : "<<(num1 * num2)<<endl;
    if(num1 > num2){
        cout<<"Division will be : "<<(num1 / num2);
    }
    else{
        cout<<"Division will be : "<<(num2 / num1);
    }
}