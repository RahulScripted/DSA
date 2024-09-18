// Print all the elements of an array in reverse order

#include<iostream>
using namespace std;
void printReverse(int arr[],int currIdx,int n){
    // Base Case
    if(currIdx == n) return;
    printReverse(arr,currIdx + 1,n);
    cout<<arr[currIdx]<<" ";
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
    cout<<"In reverse it will be : ";
    printReverse(arr,0,size);
}