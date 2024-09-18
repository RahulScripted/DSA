// Write a C program to find sum of all even numbers between 1 to n.

#include<iostream>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    int i = 1,sum = 0;
    do{
        if(i % 2 == 0){
            sum += i;
        }
        i++;
    }while(i <= end);
    cout<<"Sum will be : "<<sum;
}