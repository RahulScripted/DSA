// Generate all binary string for given length n

#include<iostream>
#include<string>
using namespace std;
void generateBinary(string s,int n){
    // Base Case
    // if(s.length() == n){
    //     cout<<s<<endl;
    //     return;
    // }
    // generateBinary(s + '0',n);
    // generateBinary(s + '1',n);

    if(n == 0){
        cout<<s<<endl;
        return;
    } 
    generateBinary(s + '0',n - 1);
    generateBinary(s + '1',n - 1);
}
int main(){
    int n = 3;
    generateBinary("",n);
}