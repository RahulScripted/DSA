// Find first negative number where window size is k



#include<iostream>
#include<queue>
using namespace std;

int main(){
    vector<int>arr = {1,-1,2,-3,4,-1,0,-7,-4,3,5,6};
    int n = arr.size();
    int k = 3;
    queue<int>q;
    for(int i = 0;i < arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // Pushing negative value's indexes into queue
    for(int i = 0;i < n;i++){
        if(arr[i] < 0) q.push(i);
    }

    // Pushing if negative value index meets in the range of i to (i + k - 1) otherwise 0 into our ans vector
    vector<int>ans;
    int i = 0;
    while(i + k <= n){
        while(!q.empty() && q.front() < i) q.pop();
        if(q.empty() || q.front() >= (i + k)) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }

    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}