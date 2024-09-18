// Store Address of a single pointer or we can say double pointer

#include<iostream>
using namespace std;
int main(){
    int num= 90;
    int *n = &num;
    cout<<"Address : "<<n<<" and value : "<<*n<<" stored by single pointer"<<endl;
    int **ptr = &n;
    cout<<"Address : "<<ptr<<" and value : "<<*ptr<<" stored by double pointer"<<endl;
}