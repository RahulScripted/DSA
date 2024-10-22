// Print




#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int>mp; 
    mp[10] = 1;
    mp[20] = 2;
    mp[30] = 1;

    for(auto m : mp){
        cout<<m.first<<" -> "<<m.second<<endl;
    }
}