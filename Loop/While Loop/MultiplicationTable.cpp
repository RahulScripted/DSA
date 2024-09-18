// Question: Write a program to display the multiplication table for a given integer.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int i = 1;
    while(i <= 10){
        cout<<num<<" x "<<i<<" = "<<(num * i)<<endl;
        i++;
    }
}