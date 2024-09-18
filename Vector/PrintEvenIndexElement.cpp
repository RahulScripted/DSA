// Write a C++ program to print all even index element

#include<iostream>
#include<vector>
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
    cout<<"Array : ";
    for(int i = 0;i < size;i++){
        if(i % 2 == 0){
            cout<<arr[i]<<" ";
        }
    }
}