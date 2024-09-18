// Given an integer array nums that may contain duplicates, return all possible subsets (the power set).


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void helper(vector<vector<int>>& ans,vector<int>& nums,vector<int>& temp,int idx){
    int n = nums.size();
    // Base Case
    if(idx == n){
        ans.push_back(temp);
        return;
    }
    int i = idx + 1;
    while(i < nums.size() && nums[i] == nums[i-1])++i;
    // Leave it
    helper(ans,nums,temp,i);
    // Take it
    temp.push_back(nums[idx]);
    helper(ans,nums,temp,idx + 1);
    temp.pop_back();
}
vector<vector<int>>subsetsWithDup(vector<int>& nums){
    vector<vector<int>>ans;
    vector<int>temp;
    sort(nums.begin(),nums.end());
    helper(ans,nums,temp,0);
    return ans;
}
int main(){
    vector<int>nums = {1,2,4,1};
    cout<<"All possible subsets are :"<<endl;
    vector<vector<int>>result = subsetsWithDup(nums);
    for(int i = 0;i < result.size();i++){
        for(int j = 0;j < result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}