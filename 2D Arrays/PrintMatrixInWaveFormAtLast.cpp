// Write a C++ program to print a matrix in wave form from last

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the no. of rows : ";
    cin>>row;
    cout<<"Enter the no. of cols : ";
    cin>>col;
    int arr[row][col];
    cout<<"Give input : ";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"In wave form : ";
    for(int i = row - 1;i >= 0;i--){
        if(i % 2 == 0){
            for(int j = 0;j < col;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j = col - 1;j >= 0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}