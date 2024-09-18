// Write a C++ program to print thw working of Tower of Hanoi.


#include<iostream>
using namespace std;
void printHanoi(int n,char s,char h,char d){
    // Base Case 
    if(n == 0) return;
    printHanoi(n - 1,s,d,h);
    cout<<s<<" -> "<<d<<endl;
    printHanoi(n - 1,h,s,d);
}
int main(){
    int n;
    cout<<"Enter the no. of disk : ";
    cin>>n;
    printHanoi(n,'S','H','D'); 
    // 'S' -> Source 
    // 'H' -> Helper
    // 'D' -> Destination 
}