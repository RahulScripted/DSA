// Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

#include<iostream>
#include<vector>
using namespace std;
void FindingAnswer(vector<vector<int>>&ans,vector<int>v,vector<int>& candidates, int target,int idx){
    if(target == 0){
        ans.push_back(v);
        return;
    }
    if(target < 0) return;
    for(int i = idx;i < candidates.size();i++){
        v.push_back(candidates[i]);
        FindingAnswer(ans,v,candidates,target - candidates[i],i);
        v.pop_back();
    }
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>>ans;
    vector<int>v;
    FindingAnswer(ans,v,candidates,target,0);
    return ans;
}
int main(){
    vector<int> candidates = {2,3,5};
    int target = 8;
    vector<int> v;
    cout<<"Combinations are : "<<endl;
    vector<vector<int>>result = combinationSum(candidates,target); 
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}