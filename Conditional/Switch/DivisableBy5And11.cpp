// Question: Write a Program to check whether a number is divisible by 5 and 11 or not. Using the switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    switch (num % 5 == 0 && num % 11 == 0){
        case 0:
            cout<<num<<" is not divisible by 5 and 11";
            break;
        case 1:
            cout<<num<<" is divisible by 5 and 11";
            break;
    }
}