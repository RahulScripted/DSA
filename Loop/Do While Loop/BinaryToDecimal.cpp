// Question: Write a program to convert a binary number into decimal.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int decimal = 0,m = 1;
    do{
        int digit = (num % 10);
        decimal = decimal + (digit * m);
        m *= 2;
        num /= 10;
    }while(num != 0);
    cout<<"In decimal it will be : "<<decimal;
}