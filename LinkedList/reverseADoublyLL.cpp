#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
        int val;
        Node* next;
        Node* prev;

        Node(int x){
            val=x;
            next=NULL;
            prev=NULL;
        }
};

Node* reverseLL(Node* root){
    if(root==NULL || root->next==NULL){
        return root;
    }

    Node* prev=NULL;
    Node* curr=root;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->next;
    }
    return prev;
}

int main(){
    Node* p=new Node(1);
    p->next=
}