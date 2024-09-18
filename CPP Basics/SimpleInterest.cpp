// Develop a C++ program that calculates the simple interest. Prompt the user to input principal amount, rate of interest, and time in years. Display the computed simple interest.

#include<iostream>
using namespace std;
int main(){
    float principal,time,rate;
    cout<<"Enter the amount of principle : ";
    cin>>principal;
    cout<<"Enter the time duration : ";
    cin>>time;
    cout<<"Enter the rate of interest : ";
    cin>>rate;
    cout<<"Simple interest will be : "<<(principal * time * rate) / 100;
}