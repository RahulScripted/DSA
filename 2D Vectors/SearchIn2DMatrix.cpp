// Search in 2D matrix

#include<iostream>
#include<vector>
using namespace std;
bool Search(vector<vector<int>>&v,int target){
    int m = v.size(),n = v[0].size();
    int l = 0,r = (m * n);
    while(l < r){
        const int m = (l + r) / 2;
        const int i = m / n;
        const int j = m % n;
        if(v[i][j] == target){
            return true;
        }
        else if(v[i][j] < target) l = m + 1;
        else r = m;
    }
    return false;
}
int main(){
    vector<vector<int>> v = {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
    int target;
    cout<<"Enter the target : ";
    cin>>target;
    if(Search(v,target) == true) cout<<"Founded";
    else cout<<"Not founded";
}