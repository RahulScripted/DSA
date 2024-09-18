// Given an array nums of size n, return the majority element. The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int FindMajority(vector<int>&v){
    // Time Complexity -> 0(nlogn) Can optimized more by another sorting method
    sort(v.begin(),v.end()); 
    return v[v.size() / 2];
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>v;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Majority element will be : "<<FindMajority(v);
}