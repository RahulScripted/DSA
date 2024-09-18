// Print all the elements of an array

#include<iostream>
using namespace std;
void print(int arr[],int currIdx, int n){
    // Base Case
    if(currIdx == n) return;
    cout<<arr[currIdx]<<" ";
    print(arr,currIdx + 1,n);
}
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
    cout<<"Entered array : ";
    print(arr,0,size);
}