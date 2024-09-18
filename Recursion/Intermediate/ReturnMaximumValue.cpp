// Write a C++ program to print the maximum value in the array.

#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int maximum(vector<int>&v,int currIdx){
    if(currIdx == v.size()) return INT_MIN;
    return max(v[currIdx],maximum(v,currIdx + 1));
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
    cout<<"Maximum value : "<<maximum(v,0);
}