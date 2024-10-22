// Searching in map




#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int>mp; 
    mp[10] = 1;
    mp[20] = 2;
    mp[30] = 1;
    mp[40] = 3;

    int target = 30;
    if(mp.find(target) != mp.end()) cout<<"Found it"<<endl;
    else cout<<"Not found"<<endl; 

    target = 50;
    if(mp.find(target) != mp.end()) cout<<"Found it"<<endl;
    else cout<<"Not found"<<endl; 
}