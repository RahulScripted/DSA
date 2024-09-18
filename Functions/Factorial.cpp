// Create a function to display factorial value

#include<iostream>
using namespace std;

int fact(int num){
    int fact = 1;
    for(int i = 2;i <= num;i++){
        fact *= i;
    }
    return fact;
}
int main(){
    float num;
    cout<<"Enter first number : ";
    cin>>num;
    cout<<"Factorial Will be : "<<fact(num);
}