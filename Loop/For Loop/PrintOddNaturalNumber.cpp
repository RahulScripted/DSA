// Question: Write a program to display the 1 to n odd natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending number : ";
    cin>>end;
    for(int i = 1;i <= end;i++){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
    }
}