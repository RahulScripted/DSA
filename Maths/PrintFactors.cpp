// Print factors of n



#include<bits/stdc++.h>
using namespace std;
void factors(int nums) {
    for(int i = 1;i < sqrt(nums);i++){
        if(nums % i == 0) cout<<i<<" ";
    }
    for(int i = sqrt(nums);i >= 1;i--){
        if(nums % i == 0) cout<<(nums / i)<<" ";
    }
    cout<<endl;
}
int main(){
    factors(60);
    factors(49);
}