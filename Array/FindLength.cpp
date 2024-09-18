// Write a C++ program to find the length of the array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,7,11,18,23,56,2,5,7,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Length : "<<size;
}