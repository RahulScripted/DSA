// Print "Good morning" n of times where n must be take from user

#include<iostream>
using namespace std;
void greet(int n){
    if(n == 0) return; // Base Case
    cout<<"Good morning"<<endl;
    greet(n - 1);
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    greet(n);
}