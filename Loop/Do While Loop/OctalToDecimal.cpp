// Question: Write a program to convert a octal number into decimal.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a octal number : ";
    cin>>num;
    int decimal = 0,m = 1;
    do{
        int digit = (num % 10);
        decimal = decimal + (digit * m);
        m *= 8;
        num /= 10;
    }while(num != 0);
    cout<<"In decimal it will be : "<<decimal;
}