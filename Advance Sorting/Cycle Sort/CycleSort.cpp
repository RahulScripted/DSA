// Sort an array using cycle sort

#include<iostream>
using namespace std;
void cycleSort(int arr[],int size){
    int i = 0;
    while(i < size){
        int currIdx = arr[i];
        if(i == currIdx) i++;
        else swap(arr[i],arr[currIdx]);
    }
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
    cout<<"Before Sorting : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
    cycleSort(arr,size);
    cout<<endl<<"After Sorting : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
}