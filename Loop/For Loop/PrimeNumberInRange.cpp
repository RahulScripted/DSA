// Write a program to determine whether a given number is prime or not in range.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"Enter the ending number : ";
    cin>>end;
    cout<<"Prime numbers will be : ";
    for(int i = start;i <= end;i++){
        int ctr = 0;
        for(int j = 2;j <= (i / 2);j++){
            if(i % j == 0){
                ctr++;
                break;
            }
        }
        if(ctr == 0 && i != 1){
            cout<<i<<" ";
        }
    }
}