// Write a program to determine whether a given number is prime or not in range.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int start,end;
    cout<<"Enter the starting number : ";
    cin>>start;
    cout<<"Enter the ending number : ";
    cin>>end;
    cout<<"Prime numbers will be : ";
    do{
        int ctr = 0;
        for(int j = 2;j <= (start / 2);j++){
            if(start % j == 0){
                ctr++;
                break;
            }
            j++;
        }
        if(ctr == 0 && start != 1){
            cout<<start<<" ";
        }
        start++;
    }while(start <= end);
}