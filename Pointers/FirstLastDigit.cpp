// Write a program to print first and last digit

#include<iostream>
using namespace std;
void FirstLast(int num,int *first,int *last){
    *last = num % 10;
    while(num != 0){
        *first = (num % 10);
        num /= 10;
    }
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    int *first = &num;
    int *last = &num;
    FirstLast(num,first,last);
    cout<<"First : "<<*first<<" and last : "<<*last;
}