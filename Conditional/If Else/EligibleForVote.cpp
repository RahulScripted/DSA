// Question: Write a program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    if(age >= 18){
        cout<<"Congratulation! You are eligible for casting your vote";
    }
    else{
        cout<<"Sorry! You are not eligible for casting your vote";
    }
}