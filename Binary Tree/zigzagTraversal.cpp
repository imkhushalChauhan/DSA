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

//ZigZag Traversal => For this first we have to take a levelorder traversal as we have to print elments in level wise and then we also print the elments in revrse or using a flag by storing it in a stack or arr;
void zigZagT(Tree* root) {
    if(root==NULL) return;
    queue<Tree* > q;
    q.push(root);

    while(!q.empty()){
        int s=q.size();
        bool rev=true;
        stack<int> st;
        for(int i=0; i<s; i++){
            Tree* node = q.front();
            q.pop();
            //if we have to reverse then we will store it in a stack
            if(rev) {
                st.push(node->val);
            } else{
                cout<<node->val<<" ";
            }
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
        }
        if(rev) {
            while(!st.empty()){
                cout<<st.top()<<" ";
                st.pop();
            }
        }
        rev=!(rev);
    }
    return;
}

int main(){
    cout<<"Creating tree"<<endl;
    Tree* root=createTree();
    cout<<"Tree InOrder"<<endl;
    inorderT(root);
    cout<<endl;
    zigZagT(root);
    // bool rev=false;
    // cout<<rev;
    // rev=!rev;
    // cout<<rev;
    return 0;
}