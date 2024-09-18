// Find sum of tree nodes




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

void Display(Tree* &a){
    // Base Case
    if(a == NULL) return;
    cout<<a->val<<" ";
    Display(a->left);
    Display(a->right);
}

int Product(Tree* &a){
    if(a == NULL) return 1;
    return a->val * Product(a->left) * Product(a->right);
}

int main(){
    Tree* a = new Tree(1);
    Tree* b = new Tree(2);
    Tree* c = new Tree(3);
    Tree* d = new Tree(1);
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
    cout<<endl<<"Product of the Nodes : "<<Product(a);
}