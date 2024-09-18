// Write a C++ program to sort an array using quick sort by taking first element as a starting index

#include<iostream>
#include<algorithm>
using namespace std;
int partition(int arr[],int startIdx,int endIdx){
    int pivotElement = arr[startIdx];
    int count = 0;
    for(int i = startIdx + 1;i <= endIdx;i++){
        if(arr[i] <= pivotElement) count++;
    }
    int pivotIdx = count + startIdx;
    swap(arr[startIdx],arr[pivotIdx]);
    int i = startIdx,j = endIdx;
    while(i < pivotIdx && j > pivotIdx){
        if(arr[i] <= pivotElement) i++;
        if(arr[j] > pivotElement) j--;
        else if(arr[i] > pivotElement && arr[j] <= pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quickSort(int arr[],int startIdx,int endIdx){
    if(startIdx >= endIdx) return; // Base Case
    int pivotIdx = partition(arr,startIdx,endIdx);
    quickSort(arr,startIdx,pivotIdx - 1);
    quickSort(arr,pivotIdx + 1,endIdx);
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
    quickSort(arr,0,(size - 1));
    cout<<endl<<"After Sorting : ";
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
}