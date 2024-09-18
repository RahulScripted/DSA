// Question: Write a program to find the largest of three numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"Enter the third number : ";
    cin>>num3;
    if(num1 > num2 && num1 > num3){
        cout<<num1<<" is greater than "<<num2<<" and "<<num3;
    }
    else if(num2 > num1 && num2 > num3){
        cout<<num2<<" is greater than "<<num1<<" and "<<num3;
    }
    else{
        cout<<num3<<" is greater than "<<num1<<" and "<<num2;
    }
}