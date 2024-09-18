// // Question: Write a program to get factorial of a number from user-input.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int fact = 1;
    for(int i = 1;i <= num;i++){
        fact *= i;
    }
    cout<<"Factorial of "<<num<<" will be : "<<fact;
}