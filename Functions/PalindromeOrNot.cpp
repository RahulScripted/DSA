// Write a program to check whether a number is palindrome or not

#include<iostream>
#include<cmath>
using namespace std;

void palindromeOrNot(int num){
    int n = num,sum = 0;
    while(n != 0){
        int digits = (n % 10);
        sum = (sum * 10) + digits;
        n /= 10;
    } 
    if(sum == num){
        cout<<num<<" is a Palindrome number";
    }
    else{
        cout<<num<<" isn't a palindrome number";
    } 
}
int main(){
    int num,pow;
    cout<<"Enter number : ";
    cin>>num;
    palindromeOrNot(num);
}