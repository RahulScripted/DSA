// Find first negative numbers in every window size k


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout<<"Enter the size : ";
    cin>>k;

    vector<int> ans;
    for(int i = 0;i < (size - 2);i++){
        for(int j = i;j < (i + k);j++){
            if(arr[j] < 0){
                ans.push_back(arr[j]);
                break;
            }
        }
    }

    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }

    // TC = O(n * k)
}