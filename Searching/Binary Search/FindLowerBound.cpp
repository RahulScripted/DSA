// Find lower bound

#include<iostream>
#include<vector>
using namespace std;
int LowerBound(vector<int>&v,int target){
    int i = 0,j = v.size() - 1;
    while(i < j){
        int mid = (i + j) / 2;
        if(v[mid] >= target){
            j = mid;
        }
        else{
            i = mid + 1;
        }
    }
    return v[i - 1];
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
    cout<<"Lower bound will be : "<<LowerBound(v,target);
}