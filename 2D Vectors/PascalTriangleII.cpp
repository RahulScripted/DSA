// Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle. In Pascal's triangle, each number is the sum of the two numbers.

#include<iostream>
#include<vector>
using namespace std;
vector<int> Pascal(int rowIndex){
    vector<int>ans(rowIndex + 1,1);
    for(int i = 2;i < (rowIndex + 1);++i){
        for(int j = 1;j < i;++j){
            ans[i - j] += ans[i - j - 1];
        }
    }
    return ans;
}
int main(){
    int rowIndex;
    cout<<"Enter row index : ";
    cin>>rowIndex;
    vector<int>ans = Pascal(rowIndex);
    cout<<"Row of the Pascal's triangle : ";
    for(int i = 0;i < ans.size();i++){
        cout<<ans[i]<<" ";
    }    
}