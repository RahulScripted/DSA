// Question: Write a program to display the 1 to n even natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending number : ";
    cin>>end;
    int i = 1;
    cout<<"Even numbers are : ";
    while(i <= end){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
        i++;
    }
}