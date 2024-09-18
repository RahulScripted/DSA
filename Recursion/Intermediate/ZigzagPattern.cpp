// Print zigzag pattern for n

#include<iostream>
using namespace std;
void zigzag(int n){
    // Base Case
    if(n == 0) return;
    cout<<n;
    zigzag(n - 1);
    cout<<n;
    zigzag(n - 1);
    cout<<n;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    zigzag(n);
}