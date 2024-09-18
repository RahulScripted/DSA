// Question: Write a program to convert a octal number into decimal

#include<bits/stdc++.h>
using namespace std;
int decimal(int octal){
    int m = 1,decimal = 0;
    while(octal > 0){
        int digit = (octal % 10);
        decimal = octal + (digit * m);
        m *= 8;
        octal /= 10;
    }
    return decimal;
}
int main(){
    int octal;
    cout<<"Enter a octal number : ";
    cin>>octal;
    cout<<"In decimal it will be : "<<decimal(octal);
}