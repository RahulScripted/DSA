// Print 2D array by user input

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
    cout<<"Output : "<<endl;
    for(int i = 0;i < row;i++){
        for(int j = 0;j < col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}