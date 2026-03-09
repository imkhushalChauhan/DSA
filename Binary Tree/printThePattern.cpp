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

//Left View except leaf nodes
void printLeftView(Tree* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    cout<<root->val<< " ";
    if(root->left!=NULL) printLeftView(root->left);
    else if(root->right!= NULL) printLeftView(root->right);
}

// Right View in reverse order and removing leaf nodes
void printRightView(Tree* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right!=NULL) printRightView(root->right);
    else if(root->left!= NULL) printRightView(root->left);
    cout<<root->val<< " ";
}


//Print the leaf nodes
void leafNode(Tree* root) {
    if(root==NULL) return;

    if(root->left==NULL && root->right==NULL) {
        cout<<root->val<<" ";
        return;
    }
    leafNode(root->left);
    leafNode(root->right);
}

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree PostOrder"<<endl;
    postorderT(root);
    cout<<endl;

    //Left View
    printLeftView(root);

    //Leaf Nodes
    leafNode(root);

    //Right View
    printRightView(root->right);
     
    return 0;
}