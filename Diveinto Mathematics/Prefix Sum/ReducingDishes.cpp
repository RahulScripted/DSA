// A chef has collected data on the satisfaction level of his n dishes. Chef can cook any dish in 1 unit of time. Like-time coefficient of a dish is defined as the time taken to cook that dish including previous dishes multiplied by its satisfaction level i.e. time[i] * satisfaction[i]. Return the maximum sum of like-time coefficient that the chef can obtain after preparing some amount of dishes. Dishes can be prepared in any order and the chef can discard some dishes to get this maximum value.



#include<bits/stdc++.h>
using namespace std;

int maxSatisfaction(vector<int>& satisfaction) {
    int n = satisfaction.size();
    sort(satisfaction.begin(),satisfaction.end());
    int suffix[n];
    suffix[n - 1] = satisfaction[n - 1];
        
    for(int i = (n - 2);i >= 0;i--){
        suffix[i] = suffix[i + 1] + satisfaction[i];
    }

    int idx = -1;
    for(int i = 0;i < n;i++){
        if(suffix[i] >= 0){
            idx = i;
            break;
        }
    }

    if(idx == -1) return 0;

    int ans = 0,x = 1;
    for(int i = idx;i < n;i++){
        ans += satisfaction[i] * x;
        x++;
    }

    return ans;
}


int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    vector<int>satisfaction;
    cout<<"Give input : ";
    for(int i = 0;i < size;i++){
        int x;
        cin>>x;
        satisfaction.push_back(x);
    }
    
    cout<<"The maximum sum of like-time coefficient that the chef can obtain after preparing some amount of dishes will be : "<<maxSatisfaction(satisfaction);
}