// Write a program to print the elements of both the diagonals in a square matrix.

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the no. of rows / cols : ";
    cin>>row;
    int arr[row][row];
    cout<<"Given input : ";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Diagonal Matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            if(i == j || (i + j) == (row - 1)){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}