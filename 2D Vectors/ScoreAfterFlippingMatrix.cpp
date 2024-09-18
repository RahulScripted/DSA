// You are given an m x n binary matrix grid. A move consists of choosing any row or column and toggling each value in that row or column (i.e., changing all 0's to 1's, and all 1's to 0's). Every row of the matrix is interpreted as a binary number, and the score of the matrix is the sum of these numbers. Return the highest possible score after making any number of moves (including zero moves).

#include<iostream>
#include<vector>
using namespace std;
int sum(vector<vector<int>>&v){
    int m = v.size();
    int n = v[0].size();
    // 0th row
    for(int i = 0;i < m;i++){
        if(v[i][0] == 0){
            for(int j = 0;j < n;j++){
                if(v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
            }
        }
    }
    //  Flip when No. of Zeros > No. of Ones
    for(int j = 0;j < n;j++){
        int noOnes = 0,noZeros = 0;
        for(int i = 0;i < m;i++){
            if(v[i][j] == 0) noZeros++;
            else noOnes++;
        }
        if(noZeros > noOnes){
            for(int i = 0;i < m;i++){
                if(v[i][j] == 0) v[i][j] = 1;
                else v[i][j] = 0;
            }
        }
    }
    // Calculating Sum
    int sum = 0;
    for(int i = 0;i < m;i++){
        int x = 1;
        for(int j = (n - 1);j >= 0;j--){
            sum += v[i][j] * x;
            x *= 2;
        }
    }
    return sum;
}
int main(){
    vector<vector<int>>v = {{1,0,0},{0,0,1},{1,0,1}};
    cout<<"The highest possible score after making any number of moves will be :"<<sum(v);
}