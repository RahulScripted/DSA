// Size operator v/s Capacity operator 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(9);
    v.push_back(7);
    v.push_back(5);
    v.push_back(3);
    cout<<"Size of the vector will be : "<<v.size()<<endl;
    cout<<"Size of the vector will be : "<<v.capacity();
}