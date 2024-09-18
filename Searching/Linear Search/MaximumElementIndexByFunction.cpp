// Find maximum element

#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maximum(vector<int>&v){
    int maxi = INT_MIN;
    int idx = -1;
    for(int i = 0;i < v.size();i++){
        if(v[i] > maxi){
            maxi = v[i];
            idx = i;
        }
    }
    return idx;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>v;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Maximum element index will be : "<<maximum(v);
}