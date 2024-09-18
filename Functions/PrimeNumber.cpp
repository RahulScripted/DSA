// Create a function to get prime number or not

#include<iostream>
using namespace std;

void prime_num(int num){
    bool flag = true;
    for(int i = 2;i < (num / 2);i++){
        if(num % i == 0){
            flag = false;
            break;
        }
    }
    if(flag == true){
        cout<<"Prime Number";
    }
    else{
        cout<<"Not a prime number";
    }
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    prime_num(num);
}