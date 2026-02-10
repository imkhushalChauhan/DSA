#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int data){
        val=data;
        next=NULL;
    }
};

void printList(Node* head) {
    Node* curr = head;
    while (curr != NULL) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    cout << endl;
}

bool detectCycle(Node* head){
    if(head==NULL || head->next==NULL) return false;

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

        if(fast==slow) return  false;
    }
    return true;
}