// Question:  Write a program to read 10 numbers from the keyboard and find their and average.

#include<bits/stdc++.h>
using namespace std;
int main(){
    float average = 0;
    for(int i = 1;i <= 10;i++){
        average += i;
    }
    average /= 10.0;
    cout<<"Average will be : "<<average;
}