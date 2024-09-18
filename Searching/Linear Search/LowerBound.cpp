// Find lower bound

#include<iostream>
#include<vector>
using namespace std;
int LinearSearch(vector<int>&v,int target){
    int idx = -1;
    for(int i = 0;i < v.size();i++){
        if(v[i] == target) idx = v[i];
        else if(v[i] > target){
            idx = v[i - 1];
            break;
        }
    }
    return idx;
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
    cout<<"Enter a target element : ";
    cin>>target;
    cout<<"Lower bound will be : "<<LinearSearch(v,target);
}