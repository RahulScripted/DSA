// Does Pointer change if we update the value of our variable.

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<"Address : "<<p<<" and value : "<<*p<<endl;
    x = 50;
    cout<<"Address : "<<p<<" and value : "<<*p;
}