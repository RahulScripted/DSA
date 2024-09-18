// // Question: Write a program to display the 1 to n even natural numbers and sum.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending number : ";
    cin>>end;
    int sum = 0;
    int i = 1;
    while(i <= end){
        if(i % 2 == 0){
            sum += i;
        }
        i++;
    }
    cout<<"Sum will be : "<<sum;
}