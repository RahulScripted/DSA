// Question: Write a program to compute the sum of the first 10 natural numbers.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum = 0;
    for(int i = 1;i <= 10;i++){
        sum += i;
    }
    cout<<"Sum will be : "<<sum;
}