// Write a C++ program to print sum of all elements

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
    int sum = 0;
    for(int i = 0;i < size;i++){
        sum += arr[i];
    }
    cout<<"sum of all elements will be : "<<sum;
}