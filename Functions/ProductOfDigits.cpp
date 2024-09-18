// Create a function to display the product of digits

#include<iostream>
using namespace std;

int productOfDigits(int num){
    int sum = 1;
    while(num != 0){
        int digit = (num % 10);
        sum *= digit;
        num /= 10; 
    }
    return sum;
}
int main(){
    float num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Product Will be : "<<productOfDigits(num);
}