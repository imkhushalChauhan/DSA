//you have to calculate the no. of nodes in the last level
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

void solve1(Tree* root, int& ans){
    if(root==NULL) return;
    if(root->left!=NULL || root->right!=NULL){
        if(root->left!=NULL){
        ans++;
        cout<<ans<<endl;
        solve1(root->left,ans);
    }else if(root->right!=NULL){
        ans--;
        cout<<ans<<endl;
        solve1(root->right,ans);
    }
    } 

   
}

void solve2(Tree* root, int& ans){
    if(root==NULL) return;
    if(root->left!=NULL || root->right!=NULL){
        if(root->right!=NULL){
        ans++;
        cout<<ans<<endl;
        solve2(root->right,ans);
    }else if(root->left!=NULL){
        ans--;
        cout<<ans<<endl;
        solve2(root->left,ans);
    }
    }
    
}

void preorderT(Tree* root){
    if(root!=NULL){
        cout<<root->val<<" ";
        preorderT(root->left);
        preorderT(root->right);
    }
}

int main(){
    cout<<"Create tree"<<endl;
    Tree* root=createTree();
    int ans1=0;
    int ans2=0;
    solve1(root,ans1);
    int lh=ans1;
    solve2(root,ans2);
    int rh=ans2;
    cout<<ans1<<endl;
    cout<<ans2<<endl;
    cout<<ans1+ans2+1<<endl;

    return 0;
}