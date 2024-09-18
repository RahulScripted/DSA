// Question: Write a program to find the number and sum of all integers between start and end which are divisible by 9.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter starting point : ";
    cin>>start;
    cout<<"Enter ending point : ";
    cin>>end;
    cout<<"Number that is divisible by 9 are : ";
    while(start <= end){
        if(start % 9 == 0){
            cout<<start<<" ";
        }
        start++;
    }
}