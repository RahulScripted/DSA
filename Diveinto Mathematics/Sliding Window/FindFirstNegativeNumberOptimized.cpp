// Find first negative numbers in every window size k


#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int k;
    cout<<"Enter the size : ";
    cin>>k;

    int ans[size - k + 1];
    int previousIndex = -1;
    for(int i = 0;i < k;i++){
        if(arr[i] < 0){
            previousIndex = i;
            break;
        }
    }
    if(previousIndex != -1) ans[0] = arr[previousIndex];
    else ans[0] = 1;

    int i = 1;
    int j = k;
    while(j < size){
        if(previousIndex >= i) ans[i] = arr[previousIndex];
        else{
            previousIndex = -1;
            for(int x = i;x <= j;x++){
                if(arr[x] < 0){
                    previousIndex = x;
                    break;
                }
            }
            if(previousIndex != -1) ans[i] = (arr[previousIndex]);
            else ans[i] = 1;
        }
        i++;
        j++;
    }
    for(int i = 0;i < (size - k + 1);i++){
        cout<<ans[i]<<" ";
    }
}