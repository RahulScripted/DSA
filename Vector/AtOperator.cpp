// Vector at operator

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the vector : ";
    cin>>size;
    vector<int> v;
    cout<<"Enter input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"Output : ";
    for(int i = 0;i < size;i++){
        cout<<v.at(i)<<" ";
    }
}