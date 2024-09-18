// Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3 steps at each level.

#include<iostream>
using namespace std;
int totalWays(int n){
    if(n < 0) return 0;
    if(n == 0) return 1;
    return totalWays(n - 1) + totalWays(n - 2) + totalWays(n - 3);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Total no. of ways : "<<totalWays(n);
}