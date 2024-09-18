// Create a function to display fibonacci series

#include<iostream>
using namespace std;

void fibonacci(int num){
    int a = 0,b = 1;
    cout<<"Fibonacci series : "<<a<<" "<<b<<" ";
    for(int i = 2;i <= num;i++){
        int sum = (a + b);
        cout<<sum<<" ";
        a = b;
        b = sum;
    }  
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    fibonacci(num);
}