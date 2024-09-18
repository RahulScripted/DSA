// Question: Write a program to convert a decimal number into octal

#include<bits/stdc++.h>
using namespace std;
int octal(int decimal){
    int m = 1,octal = 0;
    while(decimal > 0){
        int digit = (decimal % 8);
        octal = octal + (digit * m);
        m *= 10;
        decimal /= 8;
    }
    return octal;
}
int main(){
    int decimal;
    cout<<"Enter a decimal number : ";
    cin>>decimal;
    cout<<"In octal it will be : "<<octal(decimal);
}