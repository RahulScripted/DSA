// Print in reverse order without array

#include<iostream>
#include<vector>
using namespace std;
void Reverse(vector<int> &v){
    int i = 0,j = v.size() - 1;
    while(i <= j){
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
        i++;
        j--; 
    }
}
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
    Reverse(v);
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
}