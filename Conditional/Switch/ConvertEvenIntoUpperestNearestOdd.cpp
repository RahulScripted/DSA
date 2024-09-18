// Program to Convert even number into its upper nearest odd number Switch Statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cout<<"Enter an even number : ";
    cin>>num;
    switch(num){
    default:
        cout<<"Upper nearest odd number will be : "<<(num + 1);
        break;
    }
}