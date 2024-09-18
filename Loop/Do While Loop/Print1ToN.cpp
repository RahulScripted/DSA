// Write a C program to print all natural numbers from 1 to n using do while loop

#include<iostream>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    int i = 1;
    do{
        cout<<i<<" ";
        i++;
    }while(i <= end);
}