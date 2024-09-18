// Write a C++ program to print maximum among all elements.

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
    int maximum = INT_MIN;
    for(int i = 0;i < size;i++){
        if(arr[i] > maximum){
            maximum = arr[i];
        }
    }
    cout<<"Maximum value will be : "<<maximum;
}