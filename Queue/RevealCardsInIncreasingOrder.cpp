// You are given an integer array deck. There is a deck of cards where every card has a unique integer. The integer on the ith card is deck[i].

// You can order the deck in any order you want. Initially, all the cards start face down (unrevealed) in one deck.

// You will do the following steps repeatedly until all cards are revealed:

// Take the top card of the deck, reveal it, and take it out of the deck.
// If there are still cards in the deck then put the next top card of the deck at the bottom of the deck.
// If there are still unrevealed cards, go back to step 1. Otherwise, stop.
// Return an ordering of the deck that would reveal the cards in increasing order.




#include<bits/stdc++.h>
using namespace std;

vector<int> deckRevealedIncreasing(vector<int>& deck) {
    int n = deck.size();
    sort(deck.begin(),deck.end());
    queue<int> q;
    for(int i = 0;i < n;i++) q.push(i);
    vector<int>res(n);
    for(int i = 0;i < n;i++){
        int idx = q.front();
        q.pop();
        q.push(q.front());
        q.pop();
        res[idx] = deck[i];
    }
    return res;
}

int main(){
    vector<int> deck = {17,13,11,2,3,5,7};
    cout<<"Our cards : ";
    for(int i = 0;i < deck.size();i++){
        cout<<deck[i]<<" ";
    }
    cout<<endl;
    vector<int>res = deckRevealedIncreasing(deck);
    cout<<"Cards should be design in : ";
    for(int i = 0;i < res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<"a way"<<endl;
}