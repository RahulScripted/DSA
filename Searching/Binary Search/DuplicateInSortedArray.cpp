// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]inclusive in sorted order.

#include<iostream>
#include<vector>
using namespace std;
int GuessDuplicate(vector<int>&v){
    int i = 0,j = v.size() - 1;
    while(i < j){
        int mid = i + (j - i) / 2;
        if(v[mid] == mid + 1) return v[mid];
        else if(v[mid] < v.size() && v[mid] == mid + 1) i = mid + 1;
        else j = mid;
    }
    return -1;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>v;
    cout<<"Give input : ";
    for(int i = 1;i <= size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Duplicate number is : "<<GuessDuplicate(v);
}