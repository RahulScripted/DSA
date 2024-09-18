// Search in 2D matrix

#include<iostream>
#include<vector>
using namespace std;
bool Search(vector<vector<int>>&v,int target){
    int left = 0,right = v[0].size();
    while(left < v.size() && right >= 0){
        if(v[left][right] == target) return true;
        else if(v[left][right] > target) --right;
        else ++left;
    }
    return false;
}
int main(){
    vector<vector<int>> v = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,23,26,30}};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    if(Search(v,target) == true) cout<<"Founded";
    else cout<<"Not founded";
}