// Question: Write a program to calculate profit and loss on a transaction.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int buy,sell;
    cout<<"Enter the cost of buying : ";
    cin>>buy;
    cout<<"Enter the cost of selling : ";
    cin>>sell;
    buy > sell ? cout<<"Loss amount : "<<(buy - sell) : cout<<"Profit amount : "<<(sell - buy); 
}