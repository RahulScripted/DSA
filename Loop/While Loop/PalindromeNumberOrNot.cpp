// Question: Write a program to check whether the number is palindrome number or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int reverse = 0,num = number;
    while(num > 0){
        int digit = (num % 10);
        reverse = (reverse * 10) + digit;
        num /= 10;
    }
    if(number == reverse){
        cout<<"It's a palindrome number";
    }
    else{
        cout<<"It's not a palindrome number";
    }
}