// Given an integer array where every element occurs twice except one occurs only once. Find that unique element.


#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,3,5,1,5,3,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    for(int i = 0;i < size;i++){
        result ^= arr[i];
    }

    cout<<"Unique element is : "<<result<<endl;
}