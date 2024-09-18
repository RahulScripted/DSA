// Question: Write a Program to calculate profit or loss. Using switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int buy,sell;
    cout<<"Enter buy amount : ";
    cin>>buy;
    cout<<"Enter sell amount : ";
    cin>>sell;
    switch (buy < sell){
        case 0:
            cout<<"Loss amount : "<<(buy - sell);
            break;
        case 1:
            cout<<"Profit amount : "<<(sell - buy);
            break;
    }
}