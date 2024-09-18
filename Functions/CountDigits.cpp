// Create a function to display the count of digits

#include<iostream>
using namespace std;

int countOfDigits(int num){
    int count = 0;
    while(num != 0){
        int digit = (num % 10);
        count++;
        num /= 10; 
    }
    return count;
}
int main(){
    float num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"count Will be : "<<countOfDigits(num);
}