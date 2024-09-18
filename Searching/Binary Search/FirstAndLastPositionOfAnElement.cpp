// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value. If target is not found in the array, return [-1, -1].

#include<iostream>
#include<vector>
using namespace std;
vector<int> SearchRange(vector<int>&v,int target){
    vector<int>ans(2,-1);
    int i = 0,j = v.size() - 1;
    while(i <= j){
        int mid = i + (j - i) / 2;
        if(v[mid] == target){
            ans[0] = mid;
            j = mid - 1;
        }
        else if(v[mid] < target) i = mid + 1;
        else j = mid - 1;
    }
    i = 0;j = v.size() - 1;
    while(i <= j){
        int mid = i + (j - i) / 2;
        if(v[mid] == target){
            ans[1] = mid;
            i = mid + 1;
        }
        else if(v[mid] < target) i = mid + 1;
        else j = mid - 1;
    }
    return ans;
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
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    vector<int>result = SearchRange(v,target);
    cout<<"Range : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}