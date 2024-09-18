// Create a function to display multiplication table

#include<iostream>
using namespace std;

void mul_table(int num){
    for(int i = 1;i <= 10;i++){
        cout<<num<<" x "<<i<<" = "<<(num * i)<<endl;
    }
}
int main(){
    int num;
    cout<<"Enter first number : ";
    cin>>num;
    mul_table(num);
}