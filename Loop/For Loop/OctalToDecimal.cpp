// Question: Write a program to convert a octal number into decimal

#include<bits/stdc++.h>
using namespace std;
int main(){
    int octal,m = 1,decimal = 0;
    cout<<"Enter a octal number : ";
    cin>>octal;
    for(int i = octal;i > 0;){
        int digit = (i % 10);
        decimal += (digit * m);
        m *= 8;
        i /= 10;
    }
    cout<<"In decimal it will be : "<<decimal;
}