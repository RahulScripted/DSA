// Question: Write a program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age : ";
    cin>>age;
    (age >= 18) ? cout<<"Eligible for vote" : cout<<"Not eligible for vote";
}