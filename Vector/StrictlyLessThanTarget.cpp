// Print the number of elements in given array strictly lesser than a target element.

#include<iostream>
#include<vector>
using namespace std;
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
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    cout<<"Numbers that are strictly lesser than "<<target<<" are : ";
    for(int i = 0;i < size;i++){
        if(arr[i] < target){
            cout<<arr[i]<<" ";
        }
    }
}