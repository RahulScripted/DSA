// Convert a binary number to its corresponding decimal number


#include<iostream>
using namespace std;

int binaryToDecimal(string& str){
    int n = str.size();

    int result = 0;
    for(int i = (n - 1);i >= 0;i--){
        char ch = str[i];
        int num = ch - '0';
        result = result + num * (1 << (n - i - 1));
    }
    return result;
}
int main(){
    string str;
    cout<<"Enter a binary number : ";
    cin>>str;
    cout<<"In decimal it will be : "<<binaryToDecimal(str);
}