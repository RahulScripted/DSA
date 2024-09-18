// Write a C++ program to print minimum among all elements.

#include<iostream>
#include<vector>
#include<limits.h>
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
    int minimum = INT_MAX;
    for(int i = 0;i < size;i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    cout<<"Minimum value will be : "<<minimum;
}