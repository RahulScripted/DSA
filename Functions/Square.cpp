// Create a function to display square of 5 .

#include<iostream>
using namespace std;

int square(int num){
    return (num * num);
}
int main(){
    int num;
    cout<<"Enter first number : ";
    cin>>num;
    cout<<"Square will be : "<<square(num);
}