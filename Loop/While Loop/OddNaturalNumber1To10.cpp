// Question: Write a program to display the 1 to 10 odd natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int i = 1;
    while(i <= 10){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
        i++;
    }
}