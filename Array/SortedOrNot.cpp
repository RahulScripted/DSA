// Check whether the array is sorted or not

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
    bool flag = true;
    for(int i = 1;i < size;i++){
        if(arr[i] <  arr[i - 1]){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"Sorted array";
    }
    else{
        cout<<"Not sorted array";
    }
}