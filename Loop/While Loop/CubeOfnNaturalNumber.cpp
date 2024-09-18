// Question: Write a program to display the cube of the number up to an integer.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    int cube = 0;
    int i = 1;
    while(i <= end){
        cube = (i * i * i);
        cout<<"Cube of "<<i<<" will be : "<<cube<<endl;
        i++;
    }
}