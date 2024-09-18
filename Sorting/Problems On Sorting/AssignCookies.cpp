// Assume you are an awesome parent and want to give your children some cookies. But, you should give each child at most one cookie. Each child i has a greed factor g[i], which is the minimum size of a cookie that the child will be content with; and each cookie j has a size s[j]. If s[j] >= g[i], we can assign the cookie j to the child i, and the child i will be content. Your goal is to maximize the number of your content children and output the maximum number.


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int AssignCookies(vector<int>&g,vector<int>&s){
    sort(g.begin(),g.end());
    sort(s.begin(),s.end());
    int i = 0,j = 0,count = 0;
    while(i < g.size() && j < s.size()){
        if(g[j] >= s[i]){
            count++;
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return count;
}
int main(){
    int size_greed,size_child;
    cout<<"Enter the size of cookies : ";
    cin>>size_greed;
    cout<<"Enter no. of child : ";
    cin>>size_child;
    cout<<"Enter cookies : ";
    vector<int>g;
    for(int i = 0;i < size_greed;i++){
        int x;
        cin>>x;
        g.push_back(x);
    }
    cout<<"Enter the child's greed factor : ";
    vector<int>s;
    for(int i = 0;i < size_child;i++){
        int x;
        cin>>x;
        s.push_back(x);
    }
    cout<<"The maximum number will be : "<<AssignCookies(g,s);
}