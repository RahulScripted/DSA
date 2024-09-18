// // Question: Write a program to display the 1 to n even natural numbers and sum and average.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending number : ";
    cin>>end;
    int sum = 0;
    float average = 0;
    int i = 1;
    while(i <= end){
        if(i % 2 == 0){
            sum += i;
        }
        i++;
    }
    average = (float)sum / end;
    cout<<"Sum will be : "<<sum<<endl;
    cout<<"Average will be : "<<average<<endl;
}