// Print the number of elements in given array lesser than a target element.

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
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    cout<<"Numbers that are lesser than "<<target<<" are : ";
    for(int i = 0;i < size;i++){
        if(arr[i] <= target){
            cout<<arr[i]<<" ";
        }
    }
}