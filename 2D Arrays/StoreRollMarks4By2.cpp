// Write a program to store roll number and marks obtained by students side by side in a 4 x 2 matrix.

#include<iostream>
using namespace std;
int main(){
    int student;
    cout<<"Enter the no. of students : ";
    cin>>student;
    int arr[student][student];
    cout<<"Give input : ";
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < student;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Output : "<<endl;
    for(int i = 0;i < 2;i++){
        for(int j = 0;j < student;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}