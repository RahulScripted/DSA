// Question: Write a Program to convert a positive number into negative number and negative number into a positive number using switch  statement

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    switch (num > 0){
        case 0:
        cout<<"After changing "<<num<<" will be : "<<(num * (-1));
            break;
        case 1:
        cout<<"After changing "<<num<<" will be : "<<(num * (-1));
            break;
    }
}