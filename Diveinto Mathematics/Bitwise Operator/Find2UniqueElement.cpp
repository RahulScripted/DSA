// Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once



#include<iostream>
using namespace std;

void findUnique(int arr[],int size){
    int result = 0;
    for(int i = 0;i < size;i++) result ^= arr[i];

    int temp = result;
    int idx = 0;
    while(true){
        if((temp & 1) == 1) break;
        temp = temp >> 1;
        idx++;
    }

    int retrieval = 0;
    for(int i = 0;i < size;i++){
        int num = arr[i];
        if(((num >> idx) & 1) == 1) retrieval ^= arr[i];
    }

    cout<<retrieval<<" "<<(retrieval ^ result)<<endl;
}

int main(){
    int arr[] = {2,3,5,1,5,3,1,7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"Unique elements are : ";
    findUnique(arr,size);
}