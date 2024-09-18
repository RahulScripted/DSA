// Create a function to display absolute value

#include<iostream>
using namespace std;

int absolute(int num){
    if(num < 0){
        return (num * -1);
    }
    else{
        return num;
    }
}
int main(){
    float num;
    cout<<"Enter first number : ";
    cin>>num;
    cout<<"Absolute Will be : "<<absolute(num);
}