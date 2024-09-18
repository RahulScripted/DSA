// A function countAndSay is defined as: countAndSay(1) = "1". countAndSay(n) is the way you would "say" the digit string from countAndSay(n-1), which is then converted into a different digit string.

#include<iostream>
using namespace std;
string countAndSay(int n){
    if(n == 1) return "1";
    string ans = "";
    string smallAns = countAndSay(n-1);
    for(int i = 0; i < smallAns.size();) {
        int count = 1;
        int j = i+1;
        while(j < smallAns.size() && smallAns[i] == smallAns[j]){
            j++;
            count++;
        }
        ans = ans + to_string(count) + smallAns[i];
        i = j;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"In string : "<<countAndSay(n);
}