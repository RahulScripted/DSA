// Write a C++ Program to input a string and return the number of times the neighboring characters are different from each other

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    int count = 0,n = str.length();
    for(int i = 0;i < n;i++){
        if(n == 1) break; // If Single Character is given then neighbour will be 0
        if(n == 2 && str[0] != str[1]){ // If 2 Character is given then neighbour will be 1
            count++;
            break;
        } 
        if(i == 0){ 
            if(str[i] != str[i + 1]) count++;
        } 
        else if(i == n - 1){
            if(str[i] != str[i - 1]) count++;
        } 
        else if(str[i] != str[i - 1] && str[i] != str[i + 1]){
            count++;
        }
    }
    cout<<"The number of times the neighboring characters are different from each other are : "<<count;
}