// Question: Write a program to read n numbers from the keyboard and find their sum and average

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    float average = 0;
    int sum = 0;
    for(int i = 1;i <= end;i++){
        sum += i;
    }
    average = (float)sum / end;
    cout<<"Sum will be : "<<sum<<endl;
    cout<<"Average will be : "<<average;
}