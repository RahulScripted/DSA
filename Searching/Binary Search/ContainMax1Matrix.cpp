// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the maximum number of 1’s.

#include<iostream>
#include<vector>
using namespace std;
int MaxOne(vector<vector<int>>&v){
    int rows = v.size();
    int cols = v[0].size();
    int maxOnes = 0;
    int maxOnesIndex = -1;
    for(int i = 0;i < rows;i++){
        int left = 0;
        int right = cols - 1;
        while(left <= right){
            int mid = left + (right - left) / 2; 
            if(v[i][mid] == 1) right = mid - 1;
            else left = mid + 1;
        }
        int countOne = cols - left;
        if(countOne > maxOnes){
            maxOnes = countOne;
            maxOnesIndex = i;
        }
    }
    return maxOnesIndex;
}
int main(){
    vector<vector<int>>v = {{1,0,0,0},{0,0,1,1},{1,1,1,1},{1,1,1,0}};
    cout<<"Row with the maximum number of 1's index is : "<<MaxOne(v);
}