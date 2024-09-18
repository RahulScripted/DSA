// Given an array of marks of students, if the mark of any students is less than 35 print its roll number. Here roll number refers to the index of the array

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
    cout<<"Roll number who got less than 35 marks : ";
    for(int i = 1;i <= size;i++){
        if(arr[i] < 35){
            cout<<i<<" ";
        }
    }
}