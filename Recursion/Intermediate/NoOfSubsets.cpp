//  No. of subsets for every unique character

#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int noOfSubsets(string s){
    int length = s.size();
    return pow(2,length);
}
int main(){
    string str;
    cout<<"Enter a string : ";
    cin>>str;
    cout<<"No. of subsets : "<<noOfSubsets(str);
}