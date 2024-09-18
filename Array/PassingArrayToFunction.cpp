// Passing array to function

#include<iostream>
using namespace std;
void print(int arr[],int size){
    for(int i = 0;i < size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {5,8,11,15,23,37};
    int size = sizeof(arr) / sizeof(arr[0]);
    print(arr,size);
}