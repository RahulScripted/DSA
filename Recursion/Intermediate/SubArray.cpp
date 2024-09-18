// Print all the sub-array

#include<iostream>
#include<vector>
using namespace std;
void subArray(int arr[],int n,vector<int>v,int idx){
    // Base Case
    if(idx == n){
        for(int i = 0;i < v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    subArray(arr,n,v,idx + 1);
    if(v.size() == 0){
        v.push_back(arr[idx]);
        subArray(arr,n,v,idx + 1);
    }
    else if(arr[idx - 1] == v[v.size() - 1]){
        v.push_back(arr[idx]);
        subArray(arr,n,v,idx + 1);
    }
}
int main(){
    int arr[] = {1,2,3,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int>v;
    subArray(arr,n,v,0);
}