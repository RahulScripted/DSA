// Question: Write a program to convert a decimal number into binary.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int octal = 0,m = 1;
    do{
        int digit = (num % 8);
        octal = octal + (digit * m);
        m *= 10;
        num /= 8;
    }while(num != 0);
    cout<<"In octal it will be : "<<octal;
}