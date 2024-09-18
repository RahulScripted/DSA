// BFS




#include<iostream>
#include<queue>
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

void BFS(Tree* a){
    queue<Tree*>q;
    q.push(a);
    while(!q.empty()){
        Tree* temp = q.front();
        q.pop();
        cout<<temp->val<<" ";
        if(temp->left != NULL) q.push(temp->left);
        if(temp->right != NULL) q.push(temp->right);
    }
    cout<<endl;
}

int main(){
    Tree* a = new Tree(10);
    Tree* b = new Tree(20);
    Tree* c = new Tree(30);
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
    cout<<"Tree : ";
    Display(a);
    cout<<endl<<"Preorder traversal : ";
    BFS(a);
}