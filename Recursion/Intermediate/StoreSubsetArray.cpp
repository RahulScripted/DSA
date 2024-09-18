// Given an integer array nums of unique elements, return all possible subsets (the power set).

#include<iostream>
#include<vector>
using namespace std;
void helper(vector<int>& nums,vector<int> v,vector<vector<int>>& finalAns,int idx){
    if(idx == nums.size()){
        finalAns.push_back(v);
        return;
    }
    helper(nums,v,finalAns,idx + 1);
    v.push_back(nums[idx]);
    helper(nums,v,finalAns,idx + 1);
}
vector<vector<int>> subsets(vector<int>& nums) {
    vector<int> v;
    vector<vector<int>>finalAns;
    helper(nums,v,finalAns,0);
    return finalAns;
}
int main(){
    vector<int>nums = {1,2,3};
    vector<vector<int>>result = subsets(nums);
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}