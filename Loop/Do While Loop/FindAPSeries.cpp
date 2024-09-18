// Write a program to find A.P. series.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end,diff;
    cout<<"Enter the starting point : ";
    cin>>start;
    cout<<"Enter the ending point : ";
    cin>>end;
    cout<<"Enter the difference : ";
    cin>>diff;
    cout<<"A.P series will be : ";
    do{
        cout<<start<<" ";
        start += diff;
    }while(start <= end);
}