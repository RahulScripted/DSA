// Create a function to display absolute value

#include<iostream>
using namespace std;

int absolute(int num){
    return abs(num);
}
int main(){
    float num;
    cout<<"Enter first number : ";
    cin>>num;
    cout<<"Absolute Will be : "<<absolute(num);
}