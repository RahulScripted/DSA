// Write a program to display the n terms of a harmonic series and their sum. 
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    float sum = 0;
    int i = 1;
    do{
        sum += 1.0 / i;
        i++;
    }while(i <= num);
    cout<<"Sum of Series upto "<<num<<" terms will be : "<<sum;
}