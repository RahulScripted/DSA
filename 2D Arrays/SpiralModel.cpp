// Write a C++ program to print a matrix in spiral form

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
    cout<<"In spiral form : ";
    int minR = 0,maxR = (row - 1),minC = 0,maxC = (col - 1);
    while(minR <= maxR && minC <= maxC){
        // Left To Right
        for(int i = minC;i <= maxC;i++){
            cout<<arr[minR][i]<<" ";
        }
        minR++;
        if(minR > maxR || minC > maxC) break;
        // Up To Down
        for(int i = minR;i <= maxR;i++){
            cout<<arr[i][maxC]<<" ";
        }
        maxC--;
        if(minR > maxR || minC > maxC) break;
        // Right To Left
        for(int i = maxC;i >= minC;i--){
            cout<<arr[maxR][i]<<" ";
        }
        maxR--;
        if(minR > maxR || minC > maxC) break;
        // Down To Up
        for(int i = maxR;i >= minR;i--){
            cout<<arr[i][minC]<<" ";
        }
        minC++;
        if(minR > maxR || minC > maxC) break;
    }
}