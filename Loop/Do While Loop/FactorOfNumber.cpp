// Write a program to find all factors of a number.

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    int factor = 2;
    do{
       if(num % factor == 0){
            cout<<factor<<" "; 
       }
       factor++;
    }while(factor < num);
}