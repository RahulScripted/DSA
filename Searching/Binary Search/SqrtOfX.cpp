// Find the square root of X

#include<iostream>
using namespace std;
int squareRoot(int x){
    unsigned l = 1,r = (x + 1u);
    while(l < r){
        unsigned m = (l + r) / 2;
        if(m > (x / m)) r = m;
        else l = m + 1;
    }
    return (l - 1);
}
int main(){
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    cout<<"Square root of "<<x<<" will be : "<<squareRoot(x);
}