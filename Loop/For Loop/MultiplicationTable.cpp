// Question: Write a program to display the multiplication table for a given integer.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    for(int i = 1;i <= 10;i++){
        cout<<num<<" x "<<i<<" = "<<(num * i)<<endl;
    }
}