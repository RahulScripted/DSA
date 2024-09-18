// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

#include<iostream>
#include<vector>
using namespace std;
void combinationSum(vector<int>& candidates,vector<int> v, int target,int idx){
    // Base Case
    if(target == 0){
        for(int i = 0;i < v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    if(target < 0) return;
    for(int i = idx;i < candidates.size();i++){
        v.push_back(candidates[i]);
        combinationSum(candidates,v,target - candidates[i],i);
        v.pop_back();
    }
}
int main(){
    vector<int> candidates = {2,3,5};
    int target = 8;
    vector<int> v;
    cout<<"Combinations are : "<<endl;
    combinationSum(candidates,v,target,0); 
}