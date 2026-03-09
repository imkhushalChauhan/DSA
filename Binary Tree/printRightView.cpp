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

void printRightView(Tree* root){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL) return;
    if(root->right!=NULL) printRightView(root->right);
    else if(root->left!= NULL) printRightView(root->left);
    cout<<root->val<< " ";
}

void printRightView1(Tree* root, int level, int &maxi){
    if(root==NULL) return;
    if(level>maxi){
        cout<<root->val<<" ";
        maxi=level;
    }
    printRightView1(root->right,level+1,maxi);
    printRightView1(root->left,level+1,maxi);
}

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree InOrder"<<endl;
    inorderT(root);
    cout<<endl;
    printRightView(root);
    return 0;
}
