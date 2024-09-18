// Write a program to determine whether a given number is prime or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    bool flag = true;
    for(int i = 2;i <= (num / 2);i++){
        if(num % i == 0){
            flag = false;
        }
    }
    if(flag == true){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}