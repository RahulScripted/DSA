// Pointer Increment

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<"The address : "<<p<<endl;
    p++;
    cout<<"The address : "<<p;
}