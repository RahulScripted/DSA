// Write a C++ program to print an array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,7,11,18,23};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Array : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
}