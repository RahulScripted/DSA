// Previous greater element



#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void print(vector<int>&arr){
    int n = arr.size();
    for(int i = 0;i < n;i++) cout<<arr[i]<<" ";
    cout<<endl;
}

vector<int> prevGreaterElement(vector<int>&arr){
    int n = arr.size();
    vector<int>ans(n);
    stack<int>st;

    ans[0] = -1;
    st.push(arr[0]);
    for(int i = 1;i < n;i++){
        while(!st.empty() && st.top() <= arr[i]) st.pop();
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        st.push(arr[i]);
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

    vector<int>result = prevGreaterElement(arr);
    print(result);
}