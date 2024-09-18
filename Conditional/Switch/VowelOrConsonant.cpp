// Question: Write a Program to take the value from the user as input any alphabet and check whether it is vowel or consonant. Using the switch statement.

#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cout<<"Enter a character : ";
    cin>>ch;
    switch(ch){
    case 'a':
        cout<<"Vowel";
        break;
    case 'e':
        cout<<"Vowel";
        break;
    case 'i':
        cout<<"Vowel";
        break;
    case 'o':
        cout<<"Vowel";
        break;
    case 'u':
        cout<<"Vowel";
        break;
    case 'A':
        cout<<"Vowel";
        break;
    case 'E':
        cout<<"Vowel";
        break;
    case 'I':
        cout<<"Vowel";
        break;
    case 'O':
        cout<<"Vowel";
        break;
    case 'U':
        cout<<"Vowel";
        break;
    default:
        cout<<"Consonant";
        break;
    }
}