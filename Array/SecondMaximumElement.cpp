// Write a C++ program to print second maximum among all elements.

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
    int maximum = INT_MIN,secondMaximum = INT_MIN;
    for(int i = 0;i < size;i++){
        if(arr[i] > maximum){
            secondMaximum = maximum;
            maximum = arr[i];
        }
    }
    cout<<"Second maximum value will be : "<<secondMaximum;
}