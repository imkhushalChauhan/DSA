// Floyds detecting cycle (can be done with hashmap)

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

bool detectLoop(Node* head){
    Node* slow=head;
    Node* fast=head;
    bool loop=false;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
         if(slow==fast){
            slow=head;
            loop=true;
         }
    }
    if(loop){
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;
        }
        return slow;
    }
    return 0;
    
}