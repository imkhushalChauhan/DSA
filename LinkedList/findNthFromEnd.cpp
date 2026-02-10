//we have teo take two pointers 
//then we take a pointer and make it ahead k postion then we start the second pointer
//when the first pointer reahes null print second pointer

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

Node* findNthFromEnd(Node* head, int n){
    if(head==NULL) return NULL;

    Node* slow=head;
    Node* fast=head;

   for(int i=1; i<=n && fast!=NULL; i++){
    fast=fast->next;
   }

   if(fast!=NULL){
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next;
    }
   } else {
    return NULL;
   }
}