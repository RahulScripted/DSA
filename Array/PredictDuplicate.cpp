// Given an array, predict if the array contains duplicates or not.

#include<iostream>
#include<limits.h>
using namespace std;
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
    bool flag = true;
    for(int i = 0;i < size;i++){
        for(int j = i + 1;j < size;j++){
            if(arr[i] == arr[j]){
                flag = false;
                break;
            }
        }
    }
    if(flag == true){
        cout<<"Doesn't contains duplicate";
    }
    else{
        cout<<"Contains duplicate";
    }
}