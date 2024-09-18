// Question: Write a program to convert a decimal number into binary.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int binary = 0,m = 1;
    do{
        int digit = (num % 2);
        binary = binary + (digit * m);
        m *= 10;
        num /= 2;
    }while(num != 0);
    cout<<"In binary it will be : "<<binary;
}