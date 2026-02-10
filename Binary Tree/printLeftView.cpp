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

void printLeftView(Tree* root, int level, int &maxi){
    if(root==NULL) return;
    if(level>maxi){
        cout<<root->val<<" ";
        maxi=level;
    }
    printLeftView(root->left,level+1,maxi);
    printLeftView(root->right,level+1,maxi);
}

int main(){
    int m=0;
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree PostOrder"<<endl;
    postorderT(root);
    cout<<endl;
    printLeftView(root,1,m);
    
    return 0;
}