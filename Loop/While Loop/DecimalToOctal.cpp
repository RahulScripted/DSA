// Question: Write a program to convert a decimal number into octal

#include<bits/stdc++.h>
using namespace std;
int main(){
    int decimal,m = 1,octal = 0;
    cout<<"Enter a decimal number : ";
    cin>>decimal;
    while(decimal > 0){
        int digit = (decimal % 8);
        octal = octal + (digit * m);
        m *= 10;
        decimal /= 8;
    }
    cout<<"In octal it will be : "<<octal;
}