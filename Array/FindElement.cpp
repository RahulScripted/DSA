// Write a C++ program to find element of an array if it's found otherwise print -1

#include<iostream>
using namespace std;
int Linear(int arr[],int size,int target){
    int idx = -1;
    for(int i = 0;i < size;i++){ // Linear Search
        if(arr[i] == target){
            idx = i;
        }
    }
    return idx;
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        arr[i] = x;
    }
    int target;
    cout<<"Enter target element : ";
    cin>>target;
    cout<<"Found at index : "<<Linear(arr,size,target);
}