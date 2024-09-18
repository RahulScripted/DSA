// Question: Write a program to find whether a number is armstrong number or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int digit = 0,result = 0,n1 = num;
    for(int i = n1;i > 0; i /= 10){
        digit++;
    }
    n1 = num;
    for(;n1 > 0;){
        int rem = (n1 % 10);
        result =  result + pow(rem,digit);
        n1 /= 10;
    }
    if(result == num){
        cout<<num<<" is an armstrong number";
    }
    else{
        cout<<num<<" is not an armstrong number";
    }
}