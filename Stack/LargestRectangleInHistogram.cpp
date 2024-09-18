// Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.



#include<bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& arr) {
    int n = arr.size();

    // for next small index
    int next[n];
    stack<int>st;

    // Fill
    next[n - 1] = n;
    st.push(n - 1);
    for(int i = (n - 2);i >= 0;i--){
        while(!st.empty() && arr[st.top()] >= arr[i]) st.pop();
        if(st.empty()) next[i] = n;
        else next[i] = st.top();
        st.push(i);
    }

    // for previous small index
    int prev[n];
    stack<int>gt;

        // Fill
    prev[0] = -1;
    gt.push(0);
    for(int i = 1;i < n;i++){
        while(!gt.empty() && arr[gt.top()] >= arr[i]) gt.pop();
        if(gt.empty()) prev[i] = -1;
        else prev[i] = gt.top();
        gt.push(i);
    }

    // Maximum area
    int maxArea = 0;
    for(int i = 0;i < n;i++){
        int area = arr[i] * (next[i] - prev[i] - 1);
        maxArea = max(maxArea,area);
    }
    return maxArea;
}


int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int>arr(n);
    cout<<"Give input : ";
    for(int i = 0;i < n;i++) cin>>arr[i];

    cout<<"The area of the largest rectangle will be : "<<largestRectangleArea(arr);
}