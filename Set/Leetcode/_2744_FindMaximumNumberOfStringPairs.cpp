// You are given a 0-indexed array words consisting of distinct strings. The string words[i] can be paired with the string words[j] if: The string words[i] is equal to the reversed string of words[j]. 0 <= i < j < words.length. Return the maximum number of pairs that can be formed from the array words.





#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        unordered_set<string>s;
        int count = 0;

        for(int i = 0;i < n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev) != s.end()) count++;
            else s.insert(words[i]);
        }
        return count;
    }
};

int main(){
    Solution solve;

    // 1st Example
    vector<string>words = {"cd","ac","dc","ca","zz"};
    cout<<"The maximum number of pairs that can be formed will be : "<<solve.maximumNumberOfStringPairs(words)<<endl;

    // 2nd Example
    words = {"ab","ba","cc"};
    cout<<"The maximum number of pairs that can be formed will be : "<<solve.maximumNumberOfStringPairs(words)<<endl;
}