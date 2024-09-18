// Given an array of integers, print a sum triangle using recursion from it such that the first level has  all array elements. After that, at each level the number of elements is one less than the previous level and elements at the level will be the sum of consecutive two elements in the previous level.

#include<iostream>
#include<vector>
using namespace std;
void sumTriangle(vector<int>&arr,int n){
    if(n == 0) return;
    vector<int>temp(n - 1);
    for(int i = 0;i < n;i++){
        cout<<arr[i]<<" ";
        if(i != 0) temp[i - 1] = arr[i - 1] + arr[i];
    }
    cout<<endl;
    sumTriangle(temp,n - 1);
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    vector<int>arr;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sumTriangle(arr,size);
}