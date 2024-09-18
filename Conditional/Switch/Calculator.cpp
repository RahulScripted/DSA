// Question: Write a C++ Program to make a Simple Calculator using the switch

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    char operation;
    cout<<"Choose operation (+, - , * , /) : ";
    cin>>operation;
    switch(operation == '+'){
        case 0:
        switch(operation == '-'){
            case 0:
            switch(operation == '*'){
                case 0:
                switch(operation == '/'){
                    case 0:
                    cout<<"Wrong operation choosen";
                    break;
                    case 1:
                    cout<<"Answer will be : "<<(num1 / num2);
                    break;
                }
                break;
                case 1:
                cout<<"Answer will be : "<<(num1 * num2);
                break;
            }
            break;
            case 1:
            cout<<"Answer will be : "<<(num1 - num2);
            break;
        }
        break;
        case 1:
        cout<<"Answer will be : "<<(num1 + num2);
        break;
    }
}