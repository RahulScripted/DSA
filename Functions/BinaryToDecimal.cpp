// Question: Write a function to convert a binary number into decimal.

#include<bits/stdc++.h>
using namespace std;
int decimal(int num){
    int decimal_num = 0,m = 1;
    while(num != 0){
        int digits = (num % 10);
        decimal_num += (digits * m);
        m *= 2;
        num /= 10;
    }
    return decimal_num;
}
int main(){
    int num;
    cout<<"Enter a binary number : ";
    cin>>num;
    cout<<"In decimal it will be : "<<decimal(num);
}