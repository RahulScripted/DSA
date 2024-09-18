// // Question: Write a program to display the 1 to n even natural numbers and sum and average.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int end;
    cout<<"Enter ending number : ";
    cin>>end;
    int sum = 0;
    float average = 0;
    for(int i = 1;i <= end;i++){
        if(i % 2 == 0){
            cout<<i<<" ";
            sum += i;
        }
    }
    average = (float)sum / end;
    cout<<endl<<"Sum will be : "<<sum<<endl;
    cout<<"Average will be : "<<average<<endl;
}