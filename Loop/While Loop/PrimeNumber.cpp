// Write a program to determine whether a given number is prime or not.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    bool flag = true;
    int i = 2;
    while(i <= (num / 2)){
        if(num % i == 0){
            flag = false;
            break;
        }
        i++;
    }
    if(flag == true){
        cout<<num<<" is a prime number";
    }
    else{
        cout<<num<<" is not a prime number";
    }
}