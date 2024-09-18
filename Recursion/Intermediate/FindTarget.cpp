// Print index of a given element in an array. If not present, print -1

#include<iostream>
using namespace std;
int findTarget(int arr[],int currIdx,int n,int target){
    if(currIdx == n) return 0;
    if(arr[currIdx] == target) return currIdx;
    findTarget(arr,currIdx + 1,n,target);
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
    int target;
    cout<<"Enter the target element : ";
    cin>>target;
    cout<<"Index of "<<target<<" is : "<<findTarget(arr,0,size,target);
}