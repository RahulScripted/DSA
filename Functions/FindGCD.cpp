// Write a C program to find GCD (HCF) of two numbers

#include<iostream>
using namespace std;

int GCD(int num1,int num2){
    int gcd = 1;
    int minimum = min(num1,num2);
    for(int i = 2;i <= minimum;i++){
        if(num1 % i == 0 && num2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
}
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"GCD will be : "<<GCD(num1,num2);
}