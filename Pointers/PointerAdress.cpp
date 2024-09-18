// Pointer's address

#include<iostream>
using namespace std;
int main(){
    int num = 7;
    int *ptr = &num;
    cout<<"Variable address : "<<ptr<<" and value : "<<num<<endl;
    cout<<"Pointer Address : "<<&ptr<<" and value : "<<*ptr;
}