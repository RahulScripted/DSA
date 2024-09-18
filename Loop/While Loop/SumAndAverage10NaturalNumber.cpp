// Question: Write a program to read 10 numbers from the keyboard and find their sum and average

#include<bits/stdc++.h>
using namespace std;
int main(){
    float average = 0;
    int sum = 0;
    int i = 1;
    while(i <= 10){
        sum += i;
        i++;
    }
    average = sum / 10.0;
    cout<<"Sum will be : "<<sum<<endl;
    cout<<"Average will be : "<<average;
}