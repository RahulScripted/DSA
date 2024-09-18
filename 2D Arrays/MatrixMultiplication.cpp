// Write a C++ program to multiply 2 matrices.

#include<iostream>
using namespace std;
int main(){
    int row1,col1;
    cout<<"Enter no. of rows in 1st matrix : ";
    cin>>row1;
    cout<<"Enter no. of cols in 1st matrix : ";
    cin>>col1;
    int row2,col2;
    cout<<"Enter no. of rows in 2nd matrix : ";
    cin>>row2;
    cout<<"Enter no. of cols in 2nd matrix : ";
    cin>>col2;
    if(col1 == row2){
        int arr1[row1][col1];
        cout<<"Enter input for 1st matrix : ";
        for(int i = 0;i < row1;i++){
            for(int j = 0;j < col1;j++){
                cin>>arr1[i][j];
            }
        }
        int arr2[row2][col2];
        cout<<"Enter input for 2nd matrix : ";
        for(int i = 0;i < row2;i++){
            for(int j = 0;j < col2;j++){
                cin>>arr2[i][j];
            }
        }
        cout<<"1st matrix : "<<endl;
        for(int i = 0;i < row1;i++){
            for(int j = 0;j < col1;j++){
                cout<<arr1[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<"2nd matrix : "<<endl;
        for(int i = 0;i < row2;i++){
            for(int j = 0;j < col2;j++){
                cout<<arr2[i][j]<<" ";
            }
            cout<<endl;
        }
        int result[row1][col2];
        for(int i = 0;i < row1;i++){
            for(int j = 0;j < col2;j++){
                result[i][j] = 0;
                for(int k = 0;k < row2;k++){
                    result[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        cout<<"Resultant matrix : "<<endl;
        for(int i = 0;i < row1;i++){
            for(int j = 0;j < col2;j++){
                cout<<result[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrix multiplication isn't possible";
    }
}