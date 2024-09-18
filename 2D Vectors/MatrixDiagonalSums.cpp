// Given a square matrix mat, return the sum of the matrix diagonals.

// Search in 2D matrix

#include<iostream>
#include<vector>
using namespace std;
int Sum(vector<vector<int>>&v){
    int n = v.size();
    int ans = 0;
    for(int i = 0;i < n;i++){
        ans += v[i][i];
        ans += v[n - 1 - i][i];
    }
    return ans % 2 == 0 ? ans : ans - v[n / 2][n / 2];
}
int main(){
    vector<vector<int>> v = {{1,3,5},{10,11,16},{23,30,34}};
    cout<<"Sum will be : "<<Sum(v);
}