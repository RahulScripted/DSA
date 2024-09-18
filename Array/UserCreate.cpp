// Write a C++ program to create an array

#include<iostream>
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
    cout<<"Array : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
}