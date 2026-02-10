#include<bits/stdc++.h>
using namespace std;

Node* sortedVal(Node* head, int x){
    Node* temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    if(head->val>x){
        temp->next=head;
        return temp;
    }
    Node* curr=head;
    while(curr->next->val<x && curr->next!=NULL){
        curr=curr->next;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;
}