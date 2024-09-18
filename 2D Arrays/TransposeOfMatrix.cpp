// Write a C++ program to print transpose of the matrix entered by user

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the size of rows : ";
    cin>>row;
    cout<<"Enter the size of cols : ";
    cin>>col;
    int arr[row][col];
    cout<<"Give input for matrix : ";
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
    cout<<"Transpose of matrix will be : "<<endl;
    for(int i = 0;i < col;i++){
        for(int j = 0;j < row;j++){
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }
}