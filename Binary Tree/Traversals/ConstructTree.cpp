// Construct Tree from Level order traversal



#include<iostream>
#include<queue>
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

Tree* constructTree(int arr[],int size){
    queue<Tree*>q;
    Tree* root = new Tree(arr[0]);
    q.push(root);
    int i = 1,j = 2;

    // Insertion
    while(!q.empty() && i < size){
        Tree* temp = q.front();
        q.pop();

        // Push into queue
        Tree* l;
        Tree* r;
        if(arr[i] != INT_MIN) l = new Tree(arr[i]);
        else l = NULL;
        if(j < size && arr[j] != INT_MIN) r = new Tree(arr[j]);
        else r = NULL;

        // Pushing queue if not null
        if(l != NULL) q.push(l);
        if(r != NULL)q.push(r);

        // Pushing left right
        temp->left = l;
        temp->right = r;

        i += 2;
        j += 2;
    }
    return root;
}

void BFS(Tree* root){
    queue<Tree*>q;
    q.push(root);
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
    int arr[] = {1,2,3,4,5,6,INT_MIN,2,9,INT_MIN,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    Tree* root = constructTree(arr,size);
    cout<<endl<<"order traversal : ";
    BFS(root);
}