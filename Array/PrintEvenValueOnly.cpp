// Write a C++ program to print all even value only

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
        if(arr[i] % 2 == 0){
            cout<<arr[i]<<" ";
        }
    }
}