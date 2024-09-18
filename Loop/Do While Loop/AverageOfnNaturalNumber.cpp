// Question:  Write a program to read n numbers from the keyboard and find their and average.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    float average = 0;
    int i = 1;
    do{
        average += i;
        i++;
    }while(i <= end);
    average /= end;
    cout<<"Average will be : "<<average;
}