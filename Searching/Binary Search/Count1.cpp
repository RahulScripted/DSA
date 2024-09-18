// Given a sorted binary array, efficiently count the total number of 1’s in it.

#include<iostream>
#include<vector>
using namespace std;
int Count1(vector<int>&v){
    int i = 0,j = v.size() - 1;
    while(i <= j){
        int mid = i + (j - i) / 2;
        if(v[mid] == 0) i = mid + 1;
        else j = mid - 1;
    }
    return (v.size() - j - 1);
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
    cout<<"Total number of 1's are : "<<Count1(v);
}