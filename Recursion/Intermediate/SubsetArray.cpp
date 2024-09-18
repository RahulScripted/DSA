// Print all the subset of the array

#include<iostream>
#include<vector>
using namespace std;
void printSubset(int arr[],int n,int idx,vector<int> an{ 
// Passing vector<int> ans because we are creating new vector every time 
    // Base Case
    if(idx == n){
        for(int i = 0;i < ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        return;
    }
    printSubset(arr,n,idx + 1,ans);
    ans.push_back(arr[idx]);
    printSubset(arr,n,idx + 1,ans);
}
int main(){
    int arr[] = {1,2,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> v;
    printSubset(arr,size,0,v);
}