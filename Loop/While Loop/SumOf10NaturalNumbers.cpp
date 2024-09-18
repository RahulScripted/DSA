// Question: Write a program to compute the sum of the first 10 natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    int num = 1;
    while(num <= 10){
        sum += num;
        num++;
    }
    cout<<"Sum will be : "<<sum;
}