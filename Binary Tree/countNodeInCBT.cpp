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
int treeSize(Tree* root) {
    if(root==NULL) return 0;
    int lh=0;
    int rh=0;
    Tree* temp1=root;
    Tree* temp2=root;
    while(!temp1){
        lh++;
        temp1=temp1->left;
    }
    while(!temp2){
        rh++;
        temp2=temp2->left;
    }
    int sum=0;
    if(rh==lh){
       return sum+=pow(2,lh)-1;
    } else{
       return  treeSize(root->left)+
        treeSize(root->right);
    }
}

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree InOrder"<<endl;
    inorderT(root);
    cout<<endl;
    treeSize(root);
    cout<<sum;
    return 0;
}