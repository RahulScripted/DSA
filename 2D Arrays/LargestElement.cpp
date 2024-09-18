// Write a C++ program to find the largest element of a given 2D array of integers.

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the size of rows : ";
    cin>>row;
    cout<<"Enter the size of cols : ";
    cin>>col;
    int arr[row][col];
    cout<<"Give input : ";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin>>arr[i][j];
        }
    }
    int maximum = 0;
    cout<<"Output : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[i][j]<<" ";
            if(arr[i][j] > maximum){
                maximum = arr[i][j];
            }
        }
        cout<<endl;
    }
    cout<<"Maximum element in the matrices will be : "<<maximum<<endl;
}