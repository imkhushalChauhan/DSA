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

Tree* prev = NULL;
Tree* convertToDDL(Tree* root){
    if(root==NULL) return root;
Tree* head = convertToDDL(root->left);
    if(prev==NULL){
        head=root;
    } else {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    convertToDDL(root->right);
    return head;
}

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree PostOrder"<<endl;
    postorderT(root);
    cout<<"Tree PreOrder"<<endl;
    preorderT(root);
    cout<<"Tree InOrder"<<endl;
    inorderT(root);
    return 0;
}