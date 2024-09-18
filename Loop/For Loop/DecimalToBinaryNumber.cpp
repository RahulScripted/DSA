// Question: Write a program to convert a decimal number into binary.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    int binary = 0,m = 1;
    for(int i = num;i > 0;){
        int digit = (i % 2);
        binary += (digit * m);
        m *= 10;
        i /= 2;
    }
    cout<<"In binary it will be : "<<binary;
}