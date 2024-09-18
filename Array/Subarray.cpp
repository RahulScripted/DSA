// Print all the sub-array

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"All sub-arrays are mentioned below : "<<endl;
    for(int i = 0;i < size;i++){
        for(int j = i;j < size;j++){
            for(int k = i;k <= j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }
}