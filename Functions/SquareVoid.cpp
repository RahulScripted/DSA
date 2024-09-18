// Create a function to display square of 5 without any return data to main() function.

#include<iostream>
using namespace std;

void square(int num){
    cout<<"Square Will be : "<<(num * num);
}
int main(){
    int num;
    cout<<"Enter first number : ";
    cin>>num;
    square(num);
}