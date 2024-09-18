// You are at index (n,m) & you destination is (n,m) where n & m both are greater than 0. Then write a program in C++ to show how many distinct ways we can reach to the destination if we can only use right and down move strictly.

#include<iostream>
using namespace std;
int mazePath(int sr,int sc,int er,int ec){
    // Base Case
    if(sr > er || sc > ec) return 0;
    if(sr == er || sc == ec) return 1;

    int rightWays = mazePath(sr,sc + 1,er,ec);
    int downWays = mazePath(sr + 1,sc,er,ec);
    return rightWays + downWays;
}
int main(){
   int sr,sc,er,ec; 
   // sr -> Starting Row & sc -> Starting Column
   // er -> Ending Row & sc -> Ending Column
   cout<<"Enter the index of starting row : ";
   cin>>sr;
   cout<<"Enter the index of starting column : ";
   cin>>sc;
   cout<<"Enter the index of ending row : ";
   cin>>er;
   cout<<"Enter the index of ending column : ";
   cin>>ec;
   cout<<"The total no. of distinct ways we can reach to the destination is : "<<mazePath(sr,sc,er,ec);
}