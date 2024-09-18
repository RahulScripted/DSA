// Write a program to calculate the integral quotient and remainder of a division.

#include<iostream>
using namespace std;
int main(){
    int numerator,denominator;
    cout<<"Enter numerator : ";
    cin>>numerator;
    cout<<"Enter denominator : ";
    cin>>denominator;
    cout<<"Quotient will be : "<<(numerator / denominator)<<endl;
    cout<<"Remainder will be : "<<(numerator % denominator);
}