// Every minute, some number of customers enter the store. You are given an integer array customers of length n where customers[i] is the number of the customer that enters the store at the start of the ith minute and all those customers leave after the end of that minute. On some minutes, the bookstore owner is grumpy. You are given a binary array grumpy where grumpy[i] is 1 if the bookstore owner is grumpy during the ith minute, and is 0 otherwise. When the bookstore owner is grumpy, the customers of that minute are not satisfied, otherwise, they are satisfied. The bookstore owner knows a secret technique to keep themselves not grumpy for minutes consecutive minutes, but can only use it once. Return the maximum number of customers that can be satisfied throughout the day.




#include<bits/stdc++.h>
using namespace std;
int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
    int n = customers.size();
    int prevLoss = 0;
    for(int i = 0;i < minutes;i++){
        if(grumpy[i] == 1) prevLoss += customers[i];
    }
    int maxLoss = prevLoss;

    // Sliding Window
    int i = 1,j = minutes;
    int maxIdx = 0;
    while(j < n){
        int currLoss = prevLoss;
        if(grumpy[j] == 1) currLoss += customers[j];
        if(grumpy[i - 1] == 1) currLoss -= customers[i - 1];
        if(maxLoss < currLoss){
            maxLoss = currLoss;
            maxIdx = i;
        }
        prevLoss = currLoss;
        i++;
        j++;
    }

    // Fill up 0's
    for(int i = maxIdx;i < (maxIdx + minutes);i++) grumpy[i] = 0;

    // Let's calculate ans
    int ans = 0;
    for(int i = 0;i < n;i++){
        if(grumpy[i] == 0) ans += customers[i];
    }

    // return ans
    return ans;
}
int main(){
    vector<int> customers = {1,0,1,2,1,1,7,5};
    vector<int> grumpy = {0,1,0,1,0,1,0,1};
    int minutes = 3;

    cout<<"The maximum number of customers that can be satisfied throughout the day will be : "<<maxSatisfied(customers,grumpy,minutes);
}