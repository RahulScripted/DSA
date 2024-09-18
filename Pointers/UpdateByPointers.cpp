// Update the variable's value by pointers.

#include<iostream>
using namespace std;
int main(){
    int x = 10;
    int *p = &x;
    cout<<"value : "<<x<<endl;
    *p = 20;
    cout<<"value : "<<x<<endl;
}