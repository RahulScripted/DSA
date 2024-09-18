// Write a C++ program to change a matrix from it's original to its transpose.

#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the size of rows : ";
    cin>>row;
    int arr[row][row];
    cout<<"Give input for matrix : ";
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cin>>arr[i][j];
        }
    }
    // Printing Matrix
    cout<<"Before change the matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // Change original to transpose
    for(int i = 0;i < row;i++){
        for(int j = (i + 1);j < row;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Printing Matrix
    cout<<"After change the matrix : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < row;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}