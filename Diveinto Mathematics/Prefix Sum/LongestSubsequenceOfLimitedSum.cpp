// You are given an integer array nums of length n, and an integer array queries of length m. Return an array answer of length m where answer[i] is the maximum size of a subsequence that you can take from nums such that the sum of its elements is less than or equal to queries[i]. A subsequence is an array that can be derived from another array by deleting some or no elements without changing the order of the remaining elements.



#include<bits/stdc++.h>
using namespace std;

vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
    int n = nums.size();
    int m = queries.size();

    sort(nums.begin(),nums.end());

    for(int i = 1;i < n;i++) nums[i] += nums[i - 1];

    vector<int>ans;
    int maxLen = 0;
    for(int i = 0;i < m;i++){
        maxLen = 0;
        int lo = 0,hi = (n - 1);
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            if(nums[mid] > queries[i]) hi = mid - 1;
            else{
                maxLen = mid + 1;
                if(nums[mid] <= queries[i]) lo = mid + 1;
            }
        }
        ans.push_back(maxLen);
    }
    return ans;
}


int main(){
    int size1;
    cout<<"Enter the first size of the array : ";
    cin>>size1;

    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size1;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    
    int size2;
    cout<<"Enter the second size of the array : ";
    cin>>size2;
    
    vector<int>queries;
    cout<<"Give input : ";
    for(int i = 0;i < size2;i++){
        int x;
        cin>>x;
        queries.push_back(x);
    }

    vector<int>result = answerQueries(nums,queries);
    cout<<"The maximum size of a subsequence will be : ";
    for(int i = 0;i < result.size();i++){
        cout<<result[i]<<" ";
    }
}