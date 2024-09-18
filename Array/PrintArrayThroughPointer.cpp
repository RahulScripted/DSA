// Print array through pointer

#include<iostream>
using namespace std;
int main(){
    int arr[] = {5,8,11,15,23,37};
    int *ptr = arr;
    for(int i = 0;i < 6;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
}