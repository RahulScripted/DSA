// Create a function to display subtract of two integers

#include<iostream>
using namespace std;

int subtract(int num1,int num2){
    return (num1 - num2);
}
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Subtract Will be : "<<subtract(num1,num2);
}