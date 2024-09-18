// Calculate the maximum size Of subarray of size k


#include<iostream>
using namespace std;
int main(){
    int arr[] = {4,6,2,5,3,9,1,4,3,2,7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int maximumSum = 0,startingIndex = 0;

    int k;
    cout<<"Enter the size : ";
    cin>>k;

    int sum = 0;
    for(int i = 0;i < k;i++) sum += arr[i];
    maximumSum = sum;

    int i = 1,j = k;
    while(j < size){
        sum = sum + arr[j] - arr[i - 1];
        if(maximumSum < sum){
            maximumSum = sum;
            startingIndex = i;
        }
        i++;
        j++;
    }

    cout<<"Maximum Sum of subarray will be : "<<maximumSum<<endl;
    cout<<"Starting & ending index will be : "<<startingIndex<<" & "<<(startingIndex + k)<<endl;
}