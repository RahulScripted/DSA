#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findKthLargest(vector<int>& nums, int k) {
    sort(nums.begin(),nums.end());
    return nums[nums.size() - k];
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>nums;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    int k;
    cout<<"Enter kth index : ";
    cin>>k;
    cout<<k<<" th largest element : "<<findKthLargest(nums,k);
}