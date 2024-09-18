// You are given the customer visit log of a shop represented by a 0-indexed string customers consisting only of characters 'N' and 'Y': If the ith character is 'Y', it means that customers come at the ith hour whereas 'N' indicates that no customers come at the ith hour. If the shop closes at the jth hour (0 <= j <= n), the penalty is calculated as follows: For every hour when the shop is open and no customers come, the penalty increases by 1. For every hour when the shop is closed and customers come, the penalty increases by 1. Return the earliest hour at which the shop must be closed to incur a minimum penalty.

#include<iostream>
#include<string>
using namespace std;
int bestClosingTime(string customers){
    int n = customers.length();
    // Prefix array
    int pre[n + 1];
    pre[0] = 0;
    // Filling Prefix array
    for(int i = 0;i < n;i++){
        pre[i + 1] = pre[i] + (customers[i] == 'N' ? 1 : 0);
    }
    // Suffix array
    int suf[n + 1];
    suf[n] = 0;
    // Filling Suffix array
    for(int i = n - 1;i >= 0;i--){
        suf[i] = suf[i + 1] + (customers[i] == 'Y' ? 1 : 0);
    }
    // Add & find minimum element
    int minPenalty = n;
    for(int i = 0;i <= n;i++){
        pre[i] += suf[i];
        int penalty = pre[i];
        minPenalty = min(minPenalty,penalty);
    }
    // Returning index
    for(int i = 0;i <= n;i++){
        if(pre[i] == minPenalty) return i;
    }
    return n;
}
int main(){
    string customer;
    cout<<"Enter the string containing 'Y' or 'N' : ";
    cin>>customer;
    cout<<"Minimum penalty at "<<bestClosingTime(customer)<<" hour";
}