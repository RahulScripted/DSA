// Write a C++ program to print product of all elements of a given 2D array of integers.

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
    long long product = 1;
    cout<<"Output matrices : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[i][j]<<" ";
            product *= arr[i][j];
        }
        cout<<endl;
    }
    cout<<"Product of all element in the matrix will be : "<<product<<endl;
}