#include<bits/stdc++.h>
using namespace std;

Node* deleteAtHead(Node* head){
    if(head==NULL || head->next==NULL){
        delete head;
        return NULL;
    }
    head->val=head->next->val;
    Node* temp=head->next;
    head->next=head->next->next;
    delete temp;
    return head;
}