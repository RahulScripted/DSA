// Question: Write a program to calculate profit and loss on a transaction.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int buy,sell;
    cout<<"Enter the cost of buying : ";
    cin>>buy;
    cout<<"Enter the cost of selling : ";
    cin>>sell;
    if(buy > sell){
        cout<<"Loss amount : "<<(buy - sell);
    }
    else{
        cout<<"Profit amount : "<<(sell - buy);
    }
}