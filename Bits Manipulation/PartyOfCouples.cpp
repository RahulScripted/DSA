// You are given an integer array arr[] of size n, representing n number of people in a party, each person is denoted by an integer. Couples are represented by the same number ie: two people have the same integer value, it means they are a couple. Find out the only single person in the party of couples.

#include<bits/stdc++.h>
using namespace std;
int findSingle(int n, int arr[]){
    int x = 0;
    for(int i = 0;i < n;i++){
        x ^= arr[i];
    }
    return x;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    cout<<"The only single person in the party of couples is : "<<findSingle(size,arr);
}