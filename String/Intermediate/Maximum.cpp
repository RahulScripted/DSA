// Given n strings vector consisting of digits from 0 to 9. Return the index of string which has maximum value


#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    vector<string> v;
    for(int i = 0;i < size;i++){
        string temp;
        cin>>temp;
        v.push_back(temp);
    }
    int maximum = 0;
    for(int i = 0;i < v.size();i++){
        int x = stoi(v[i]);
        maximum = max(maximum,x);
    }
    for(int i = 0;i < v.size();i++){
        int x = stoi(v[i]);
        if(maximum == x) cout<<"Maximum value : "<<maximum;
    }
}