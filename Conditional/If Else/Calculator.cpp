// Question: Write a program in which is a Menu-Driven Program to perform a simple calculation.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"Enter second number : ";
    cin>>num2;
    int op;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cout<<"Enter your option : ";
    cin>>op;
    if(op == 1){
        cout<<"Addition of "<<num1<<" and "<<num2<<" will be : "<<(num1 + num2);
    }
    else if(op == 2){
        if(num1 > num2){
            cout<<"Subtraction of "<<num1<<" and "<<num2<<" will be : "<<(num1 - num2);
        }
        else{
            cout<<"Subtraction of "<<num2<<" and "<<num1<<" will be : "<<(num2 - num1);
        }
    }
    else if(op == 3){
        cout<<"Multiplication of "<<num1<<" and "<<num2<<" will be : "<<(num1 * num2);
    }
    else if(op == 4){
        if(num1 > num2){
            if(num2 != 0){
                cout<<"Division : "<<(num1 / num2);
            }
            else{
                cout<<"Can't divide";
            }
        }
        else if(num2 > num1){
             if(num1 != 0){
                cout<<"Division : "<<(num2 / num1);
            }
            else{
                cout<<"Can't divide";
            }
        }

    }
    else{
        cout<<"Wrong operation choosen";
    }
}