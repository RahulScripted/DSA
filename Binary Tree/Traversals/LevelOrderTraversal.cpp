// Level order traversal 




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

void nthLevel(Tree* &a,int currentLevel,int level){
    // Base Case
    if(a == NULL) return;
    if(currentLevel == level) cout<<a->val<<" ";
    nthLevel(a->left,currentLevel + 1,level);
    nthLevel(a->right,currentLevel + 1,level);
}

int levels(Tree* &a){
    if(a == NULL) return 0;
    return 1 + max(levels(a->left),levels(a->right));
}

void orderLevel(Tree* &a){
    int n = levels(a);
    for(int i = 0;i < n;i++){
        cout<<endl;
        nthLevel(a,0,i);
    }
}

int main(){
    Tree* a = new Tree(10);
    Tree* b = new Tree(20);
    Tree* c = new Tree(30);
    Tree* d = new Tree(3);
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
    cout<<"Our tree : ";
    Display(a);
    cout<<endl;
    cout<<"Nth level elements are : ";
    orderLevel(a);
}