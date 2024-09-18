// Print of 2D array

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {{2,5,7},{4,6,8},{1,8,3}};
    for(int i = 0;i < 3;i++){
        for(int j = 0;j < 3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}