// Skip a character by taking user-input 

#include<iostream>
#include<string>
using namespace std;
void removeCharacter(string ans,string original,char character,int idx){
    if(idx == original.length()){
        cout<<ans;
        return;
    }
    char ch = original[idx];
    if(ch == character) removeCharacter(ans,original,character,idx + 1);
    else removeCharacter(ans + ch,original,character,idx + 1);
}
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    char character;
    cout<<"Enter a character : ";
    cin>>character;
    removeCharacter("",str,character,0);
}