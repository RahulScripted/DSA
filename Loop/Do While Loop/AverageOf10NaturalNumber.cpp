// Question:  Write a program to read 10 numbers from the keyboard and find their and average.

#include<bits/stdc++.h>
using namespace std;
int main(){
    float average = 0;
    int i = 1;
    do{
        average += i;
        i++;
    }while(i <= 10);
    average /= 10.0;
    cout<<"Average will be : "<<average;
}