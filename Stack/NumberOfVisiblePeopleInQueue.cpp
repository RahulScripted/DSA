// There are n people standing in a queue, and they numbered from 0 to n - 1 in left to right order. You are given an array heights of distinct integers where heights[i] represents the height of the ith person.

// A person can see another person to their right in the queue if everybody in between is shorter than both of them. More formally, the ith person can see the jth person if i < j and min(heights[i], heights[j]) > max(heights[i+1], heights[i+2], ..., heights[j-1]).

// Return an array answer of length n where answer[i] is the number of people the ith person can see to their right in the queue.



#include<bits/stdc++.h>
using namespace std;

vector<int> canSeePersonsCount(vector<int>& heights) {
    int n = heights.size();
    vector<int>ans(n,0);

    stack<int>st;
    st.push(heights[n - 1]);
    ans[n-1] = 0;
    for(int i = (n - 2);i >= 0;i--){
        int count = 0;
        while(!st.empty() && heights[i] > st.top()){
            st.pop();
            count++;
        }
        if(!st.empty()) count++;
        ans[i] = count;
        st.push(heights[i]);
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of queues : ";
    cin>>n;

    vector<int> heights(n);
    cout<<"Give input : ";
    for(int i = 0;i < n;i++) cin>>heights[i];

    vector<int>result = canSeePersonsCount(heights);
    cout<<"Our output : ";
    for(int height : result){
        cout<<height<<" ";
    }
    cout<<endl;
}