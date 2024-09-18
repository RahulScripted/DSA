// Create a function to display division

#include<iostream>
using namespace std;

float division(float num1,float num2){
    return (num1 / num2);
}
int main(){
    float num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Division Will be : "<<division(num1,num2);
}