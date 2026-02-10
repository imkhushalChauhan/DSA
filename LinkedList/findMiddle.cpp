#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

Node* findMiddle(Node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    //making two pointers
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}