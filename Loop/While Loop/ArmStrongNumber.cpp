// Question: Write a program to find whether a number is armstrong number or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int number = num;
    int digit = 0;
    while(number != 0){
        number /= 10;
        digit++;
    }
    number = num;
    int sum = 0;
    while(number != 0){
        int rem = (number % 10);
        sum += pow(rem,digit);
        number /= 10;
    }
    if(sum == num){
        cout<<num<<" is a armstrong number";
    }
    else{
        cout<<num<<" is not a armstrong number";
    }
}