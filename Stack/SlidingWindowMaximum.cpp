// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.




#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    // Solution using stack

    int n = arr.size();
    stack<int>st;
    vector<int>nextGreatestIndex(n);
    nextGreatestIndex[n - 1] = n;
    st.push(n - 1);
    for(int i = (n - 2);i >= 0;i--){
        while(!st.empty() && arr[st.top()] <= arr[i]) st.pop();
        if(st.empty()) nextGreatestIndex[i] = n;
        else nextGreatestIndex[i] = st.top();
        st.push(i);
    }

    vector<int>ans;
    int j = 0;
    for(int i = 0;i < (n - k + 1);i++){
        if(j < i) j = i;
        int mx = arr[j];
        while(j < (i + k)){
            mx = arr[j];
            if(nextGreatestIndex[j] >= (i + k)) break;
            j = nextGreatestIndex[j];
        }
        ans.push_back(mx);
    }
    return ans;

    // Brute-force Solution

    // int n = nums.size();
    // vector<int> ans;
    // for(int i = 0;i < (n - k + 1);i++){
    //     int max = INT_MIN;
    //     for(int j = i;j < (i + k);j++){
    //         if(nums[j] > max) max = nums[j];
    //     }
    //     ans.push_back(max);
    // }
    // return ans;
}


int main(){
    int n;
    cout<<"Enter the size of queues : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Give input : ";
    for(int i = 0;i < n;i++) cin>>arr[i];

    int k;
    cout<<"Enter the size of the window : ";
    cin>>k;

    vector<int>result = maxSlidingWindow(arr,k);
    for(int ans : result){
        cout<<ans<<" ";
    }
    cout<<endl;
}