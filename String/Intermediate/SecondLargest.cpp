// Find the second largest digit in the string consisting of digits from 0 to 9.

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int maxDigit = -1,secondMaxDigit = -1;
    for(char ch : str) {
        if(isdigit(ch)) {
            int digit = ch - '0';
            if(digit > maxDigit){
                secondMaxDigit = maxDigit;
                maxDigit = digit;
            }
            else if(secondMaxDigit < digit && digit != maxDigit) secondMaxDigit = digit;
        }
    }
    if(secondMaxDigit == -1) cout<<"There is no second largest digit in the string.";
    else cout<<"Second largest element: "<<secondMaxDigit;
}