// Question: Write a function to convert a decimal number into binary.

#include<bits/stdc++.h>
using namespace std;
int binary(int num){
    int binary_num = 0,m = 1;
    while(num != 0){
        int digits = (num % 2);
        binary_num += (digits * m);
        m *= 10;
        num /= 2;
    }
    return binary_num;
}
int main(){
    int num;
    cout<<"Enter a decimal number : ";
    cin>>num;
    cout<<"In binary it will be : "<<binary(num);
}