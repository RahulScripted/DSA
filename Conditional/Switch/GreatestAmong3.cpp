// Question: Write a Program to find the maximum between three numbers. Using the switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    cout<<"Enter third number : ";
    cin>>num3;
    switch (num1 > num2 && num1 > num3){
        case 0:
            switch (num2 > num3){
                case 0:
                    cout<<num3<<" is greater than "<<num1<<" and "<<num2;
                    break;
                case 1:
                    cout<<num2<<" is greater than "<<num1<<" and "<<num3;
                    break;
            }
            break;
        case 1:
            cout<<num1<<" is greater than "<<num2<<" and "<<num3;
            break;
    }
}