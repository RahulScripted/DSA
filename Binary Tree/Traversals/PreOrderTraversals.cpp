// Preorder traversals in Tree




#include<iostream>
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

void Preorder(Tree* &a){
    // Base Case
    if(a == NULL) return;
    cout<<a->val<<" ";
    Preorder(a->left);
    Preorder(a->right);
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
    cout<<"Preorder traversals: ";
    Preorder(a);
}