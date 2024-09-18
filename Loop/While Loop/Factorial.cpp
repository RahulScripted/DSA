// // Question: Write a program to get factorial of a number from user-input.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int fact = 1;
    while(num > 1){
        fact *= num;
        num--;
    }
    cout<<"Factorial of "<<num<<" will be : "<<fact;
}