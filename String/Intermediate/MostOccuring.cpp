// Take a sentence str, return the word that is occurring most no. of times in the string


#include<iostream>
#include<string>
#include<vector>
#include<sstream>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector<string>v;
    while(ss >> temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end()); // Sort the vector so that we need 1 loop 
    int maxCount = 1,count = 1;
    for(int i = 0;i< v.size() - 1;i++){
        if(v[i + 1] == v[i]) count++;
        else count = 1;
        maxCount = max(maxCount,count);
    }
    count = 1;
    for(int i = 0;i< v.size() - 1;i++){
        if(v[i + 1] == v[i]) count++;
        else count = 1;
        if(count == maxCount){
            cout<<v[i]<<" -> "<<maxCount<<endl;
        }
    }
}