// Write a program to store roll number and marks obtained by students side by side in a 2 x 4 matrix.

#include<iostream>
using namespace std;
int main(){
    int student;
    cout<<"Enter the no. of students : ";
    cin>>student;
    int arr[student][student];
    cout<<"Give input : ";
    for(int i = 0;i < student;i++){
        for(int j = 0;j < 2;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Output : "<<endl;
    for(int i = 0;i < student;i++){
        for(int j = 0;j < 2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}