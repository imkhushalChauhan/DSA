#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
    int val;
    Node* left;
    Node* right;
    Node(int x){
        val=x;
        left=right=NULL;
    }
};

Node *insertion(Node *root, int x){
    if(root==NULL){
        Node* node=new Node(x);
        return node;
    }

    if(root->val>=x){
        root->left=insertion(root->left,x);
    }
    else if(root->val<x){
        root->right=insertion(root->right,x);
    }
    return root;
}

void inorderT(Node* root){
    if(root!=NULL){
        inorderT(root->left);
        cout<<root->val<<" ";
        inorderT(root->right);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    Node* root=new Node(arr[0]);
    Node* temp=root;
    for(int i=1; i<n; i++){
        temp=insertion(temp,arr[i]);
    }

    inorderT(root);

      return 0;
}