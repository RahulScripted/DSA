// Create a function to display cube

#include<iostream>
using namespace std;

int cube(int num){
    return (num * num * num);
}
int main(){
    float num;
    cout<<"Enter first number : ";
    cin>>num;
    cout<<"Cube Will be : "<<cube(num);
}