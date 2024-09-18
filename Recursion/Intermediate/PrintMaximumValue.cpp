// Write a C++ program to print the maximum value in the array.

#include<iostream>
#include<climits>
#include<vector>
using namespace std;
void maximum(vector<int>&v,int currIdx,int minimum){
    if(currIdx == v.size()){
        cout<<minimum;
        return;
    }
    if(v[currIdx] > minimum) minimum = v[currIdx];
    maximum(v,currIdx + 1,minimum);
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
    cout<<"Maximum value : ";
    maximum(v,0,INT_MIN);
}