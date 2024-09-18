// Sort an string lexigraphically

#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a String : ";
    getline(cin,str);
    cout<<"Before updating String : "<<str<<endl;
    sort(str.begin(),str.end()); // Sort on ASCII value
    cout<<"After updating String : "<<str;
}