#include<bits/stdc++.h>
using namespace std;

class Tree{
public:
    int val;
    Tree* left;
    Tree* right;
    Tree(int data){
        val=data;
        left=right=NULL;
    }
};

Tree* createTree(){
    int x;
    cout<<"Enter the value(where -1 defines null)"<<endl;
    cin>>x;

    if(x==-1){
        return NULL;
    }
    else{
        Tree* root=new Tree(x);
        root->left=createTree();
        root->right=createTree();
        return root;
    }
}

void preorderT(Tree* root){
    if(root!=NULL){
        cout<<root->val<<" ";
        preorderT(root->left);
        preorderT(root->right);
    }
}

void postorderT(Tree* root){
    if(root!=NULL){
        postorderT(root->left);
        postorderT(root->right);
        cout<<root->val<<" ";
    }
}

void inorderT(Tree* root){
    if(root!=NULL){
        inorderT(root->left);
        cout<<root->val<<" ";
        inorderT(root->right);
    }
}

void levelOrderTraversal(Tree* root){
    if(root==NULL) return;
    queue<Tree*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Tree* node = q.front();
        q.pop();
        if(node==NULL){
            cout<<endl;
            q.push(NULL);
            continue;
        }
        cout<<node->val<<" ";
        if(node->left!=NULL) q.push(node->left);
        if(node->right!=NULL) q.push(node->right);
    }
}

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree PostOrder"<<endl;
    postorderT(root);
    cout<<endl;
    levelOrderTraversal(root);
    return 0;
}