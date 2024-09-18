// No. of passes in reversely sorted

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {5,4,3,2,1};
    int count = 0;
    // Insertion Sort
    for(int i = 1;i < v.size();i++){
        int j = i;
        while(j >= 1 && v[j] < v[j - 1]){
            swap(v[j],v[j - 1]);
            j--;
            count++;
        }
    }
    cout<<"After sorting : ";
    for(int i = 0;i < v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl<<"No. of swaps : "<<count;
}