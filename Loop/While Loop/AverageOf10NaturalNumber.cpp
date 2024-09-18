// Question:  Write a program to read 10 numbers from the keyboard and find their and average.

#include<bits/stdc++.h>
using namespace std;
int main(){
    float average = 0;
    int i = 1;
    while(i <= 10){
        average += i;
        i++;
    }
    average /= 10.0;
    cout<<"Average will be : "<<average;
}