// Write a C++ program to rotate a matrix by 90 degree

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
    // Transpose
    for(int i = 0;i < row;i++){
        for(int j = (i + 1);j < row;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Reverse
    for(int k = 0;k < row;k++){
        int i = 0,j = (row - 1);
        while(i <= j){
            int temp = arr[k][i];
            arr[k][i] = arr[k][j];
            arr[k][j] = temp;
            i++;
            j--;
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