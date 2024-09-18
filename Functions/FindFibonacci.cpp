// Create a function to get fibonacci number

#include<iostream>
using namespace std;

int fibonacci(int num){
    int a = 0,b = 1,fibo = 0;
    for(int i = 2;i <= num;i++){
        fibo = (a + b);
        a = b;
        b = fibo;
    }
    return fibo;  
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<num<<"th term will be : "<<fibonacci(num);
}