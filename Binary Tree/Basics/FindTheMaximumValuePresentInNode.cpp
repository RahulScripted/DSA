// Find the maximum value present in Tree



#include<iostream>
#include<algorithm>
#include <climits>
using namespace std;

class Tree{
public:
    int val;
    Tree* left;
    Tree* right;
    Tree(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void Display(Tree* &a){
    // Base Case
    if(a == NULL) return;
    cout<<a->val<<" ";
    Display(a->left);
    Display(a->right);
}

int MaxTree(Tree* &a){
    if(a == NULL) return INT_MIN;
    return max(a->val,max(MaxTree(a->left),MaxTree(a->right)));
}

int main(){
    Tree* a = new Tree(10);
    Tree* b = new Tree(20);
    Tree* c = new Tree(30);
    Tree* d = new Tree(0);
    Tree* e = new Tree(5);
    Tree* f = new Tree(7);
    Tree* g = new Tree(11);

    // Building connection
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    Display(a);
    cout<<endl<<"Maximum value of the Nodes : "<<MaxTree(a);
}