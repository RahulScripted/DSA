// Write a C program to print all natural numbers in reverse (from n to 1) using do while loop

#include<iostream>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    do{
        cout<<end<<" ";
        end--;
    }while(end >= 1);
}