// Question: Write a program to display the square of the number up to an integer.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending point : ";
    cin>>end;
    int square = 0;
    int i = 1;
    do{
        square = (i * i);
        cout<<"Cube of "<<i<<" will be : "<<square<<endl;
        i++;
    }while(i <= end);
}