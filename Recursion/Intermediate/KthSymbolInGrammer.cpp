// We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10. Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.

#include<iostream>
using namespace std;
int kthGrammar(int n, int k) {
    if(n == 1) return 0;
    if(k % 2 == 0){
        int ans = kthGrammar(n - 1,k / 2);
        return ans == 0 ? 1 : 0;
    }
    else return kthGrammar(n - 1,k / 2 + 1);
}
int main(){
    int n = 4,k = 6;
    cout<<k<<"th symbol is : "<<kthGrammar(n,k)<<endl;

    n = 3,k = 3;
    cout<<k<<"th symbol is : "<<kthGrammar(n,k)<<endl;

    n = 4,k = 7;
    cout<<k<<"th symbol is : "<<kthGrammar(n,k)<<endl;
}