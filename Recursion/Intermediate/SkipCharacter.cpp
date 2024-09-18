// Skip a character by taking user-input 

#include<iostream>
#include<string>
using namespace std;
void removeCharacter(string ans,string original,char character){
    if(original.length() == 0){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch == character) removeCharacter(ans,original.substr(1),character);
    else removeCharacter(ans + ch,original.substr(1),character);
}
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    char character;
    cout<<"Enter a character : ";
    cin>>character;
    removeCharacter("",str,character);
}