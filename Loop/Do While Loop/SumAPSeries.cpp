// Write a program to find the A.P. series & sum of A.P. series.

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
    int sum = 0;
    cout<<"A.P series will be : ";
    do{
        cout<<start<<" ";
        sum += start;
        start += diff;
    }while(start <= end);
    cout<<endl<<"Sum will be : "<<sum;
}