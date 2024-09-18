// Write a C++ program to add 2 matrices.

#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter the size of rows : ";
    cin>>row;
    cout<<"Enter the size of cols : ";
    cin>>col;
    int arr1[row][col];
    cout<<"Give input for 1st matrix : ";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin>>arr1[i][j];
        }
    }
    int arr2[row][col];
    cout<<"Give input for 2nd matrix : ";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"1st Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"2nd Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"After adding 2 matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<(arr1[i][j] + arr2[i][j])<<" ";
        }
        cout<<endl;
    }
}