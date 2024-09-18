// You are climbing a staircase. It takes n steps to reach the top. Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

#include<iostream>
using namespace std;
int climbStairs(int n){
    if(n == 0 || n == 1) return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}
int main(){
    int n;
    cout<<"Enter the no. of steps : ";
    cin>>n;
    cout<<"The no. of distinct ways to climb to the top is : "<<climbStairs(n);
}