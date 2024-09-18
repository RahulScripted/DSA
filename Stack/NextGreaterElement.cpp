// Next greater element



#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void print(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i < n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

vector<int> nextGreaterElement(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;

    ans[n - 1] = -1;
    st.push(arr[n - 1]);
    for(int i = (n - 2);i >= 0;i--){
        while(!st.empty() && st.top() <= arr[i]) st.pop(); // Pop
        // Add
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]); // Push
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Give inputs : ";
    for(int i = 0;i < n;i++) cin>>arr[i];
    print(arr);

    vector<int>result = nextGreaterElement(arr);
    print(result);
}