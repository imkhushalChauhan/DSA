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


int maxi=INT_MIN;
void maximum(Tree* root){
        if(root==NULL) return;
        if(maxi<root->val) maxi=root->val;
        maximum(root->left);
        maximum(root->right);
    }

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree PostOrder"<<endl;
    postorderT(root);
    cout<<endl;
    maximum(root);
    cout<<"Maximum of tree"<<maxi<<endl;
    return 0;
}