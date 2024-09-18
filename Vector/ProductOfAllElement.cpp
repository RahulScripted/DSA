// Write a C++ program to print product of all elements

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
    int product = 1;
    for(int i = 0;i < size;i++){
        product *= arr[i];
    }
    cout<<"Product of all elements will be : "<<product;
}