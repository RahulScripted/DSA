// Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid.


#include<iostream>
#include<vector>
using namespace std;
int CountNegative(vector<vector<int>>&v){
    const int m = v.size();
    const int n = v[0].size();
    int ans = 0;
    int i = m - 1;
    int j = 0;
    while(i >= 0 && j < n){
        if(v[i][j] < 0){
            ans += n - j;
            --i;
        }
        else{
            ++j;
        }
    }
    return ans;
}
int main(){
    vector<vector<int>> v = {{4,3,2,-1},{3,2,-1,-2},{1,-1,-2,-3},{-1,-2,-3,-4}};
    cout<<"Total negative numbers are : "<<CountNegative(v);
}