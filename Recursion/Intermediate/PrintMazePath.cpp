// You are at index (n,m) & you destination is (n,m) where n & m both are greater than 0. Then write a program in C++ to print distinct ways we can reach to the destination if we can only use right and down move strictly.

#include<iostream>
using namespace std;
void printPath(int sr,int sc,int er,int ec,string s){
    // Base Case
    if(sr > er || sc > ec) return;
    if(sr == er || sc == ec){
        cout<<s<<endl;
        return;
    }
    printPath(sr,sc + 1,er,ec,s + 'R'); // Right
    printPath(sr + 1,sc,er,ec,s + 'D'); // Down
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
   cout<<"Total no. of ways : "<<endl;
   printPath(sr,sc,er,ec,"");
}