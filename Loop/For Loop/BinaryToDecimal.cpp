// Question: Write a program to convert a binary number into decimal.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    int decimal = 0,m = 1;
    for(int i = num;i > 0;){
        int digit = (i % 10);
        decimal += (digit * m);
        m *= 2;
        i /= 10;
    }
    cout<<"In decimal it will be : "<<decimal;
}