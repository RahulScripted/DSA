// You are given an array of integers nums, there is a sliding window of size k which is moving from the very left of the array to the very right. You can only see the k numbers in the window. Each time the sliding window moves right by one position. Return the max sliding window.




#include<iostream>
#include<deque>
#include<vector>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {

    deque<int>dq;
    vector<int>ans;
    int n = arr.size();
    for(int i = 0;i < n;i++){
        while(!dq.empty() && arr[i] > arr[dq.back()]) dq.pop_back();
        dq.push_back(i);
        int j = (i - k + 1);
        while(dq.front() < j) dq.pop_front();
        if(i >= (k - 1)) ans.push_back(arr[dq.front()]);
    }
    return ans;
}

int main(){
    vector<int>arr = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    cout<<"Our array : ";
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Size of window : "<<k<<endl;
    vector<int>res = maxSlidingWindow(arr,k);
    cout<<"Resultant array : ";
    for(int i = 0;i < res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}