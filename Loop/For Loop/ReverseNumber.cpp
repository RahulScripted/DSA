// Question: Write a program to display the number in reverse order.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    int reverse = 0;
    for(int i = number;i > 0;){
        int digit = i % 10;
        reverse = (reverse * 10) + digit;
        i /= 10;
    }
    cout<<"Reverse number will be : "<<reverse;
}