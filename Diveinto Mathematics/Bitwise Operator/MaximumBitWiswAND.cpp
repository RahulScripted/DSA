// Given an integer array. Find the length of longest subarray which has maximum possible bitwise AND value.



#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {2,3,5,1,5,3,1,13,2,4,13,5,7,4,8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int ans = 0,maxEle = INT_MIN,count = 0;
    for(int i = 0;i < size;i++){
        if(arr[i] > maxEle){
            maxEle = arr[i];
            count = 1;
        }
        else if(arr[i] == maxEle) count++;
    }
    ans = max(ans,count);
    cout<<"The length of longest subarray which has maximum possible bitwise AND value will be : "<<ans<<endl;
}