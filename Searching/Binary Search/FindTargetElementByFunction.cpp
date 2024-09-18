// Find Target element

#include<iostream>
#include<vector>
using namespace std;
int BinarySearch(vector<int>&v,int target){
    int i = 0,j = v.size() - 1;
    int result;
    while(i <= j){
        int mid = (i + j) / 2;
        if(v[mid] == target){
            return mid;
        }
        else if(v[mid] > target){
            j = mid - 1;
        }
        else{
            i = mid + 1;
        }
    }
    return -1;
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
    int target;
    cout<<"Enter a target element : ";
    cin>>target;
    cout<<"Target element found at index : "<<BinarySearch(v,target);
}