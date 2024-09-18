// Convert a binary number to its corresponding decimal number


#include<iostream>
using namespace std;

string decimalToBinary(int num){
    string result = "";
    while(num > 0){
        if(num % 2 == 0) result = "0" + result;
        else result = "1" + result;

        num = num >> 1;
    }
    return result;
}
int main(){
    int num;
    cout<<"Enter a number : ";
    cin>>num;
    cout<<"In binary it will be : "<<decimalToBinary(num);
}