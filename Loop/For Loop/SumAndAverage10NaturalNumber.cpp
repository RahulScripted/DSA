// Question: Write a program to read 10 numbers from the keyboard and find their sum and average

#include<bits/stdc++.h>
using namespace std;
int main(){
    float average = 0;
    int sum = 0;
    for(int i = 1;i <= 10;i++){
        sum += i;
    }
    average = sum / 10.0;
    cout<<"Sum will be : "<<sum<<endl;
    cout<<"Average will be : "<<average;
}