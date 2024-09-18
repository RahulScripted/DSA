// Write a program in C to perform division operation.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    if(num1 > num2){
        cout<<"Division will be : "<<(num1 / num2);
    }
    else{
        cout<<"Division will be : "<<(num2 / num1);
    }
}