// Question: Write a program to display n terms of natural numbers and their sum.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    int i = 1;
    while(i <= end){
        sum += i;
        i++;
    }
    cout<<"Sum will be : "<<sum;
}