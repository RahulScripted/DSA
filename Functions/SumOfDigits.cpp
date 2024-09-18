// Create a function to display the sum of digits

#include<iostream>
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    while(num != 0){
        int digit = (num % 10);
        sum += digit;
        num /= 10; 
    }
    return sum;
}
int main(){
    float num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Sum Will be : "<<sumOfDigits(num);
}