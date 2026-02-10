//we have to take oddstart and oddend and evenstart and evenend
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

Node* segerate(Node* head){
    Node* curr=head;
    Node* os;
    Node* oe;
    Node* es;
    Node* ee;

    while(curr!=NULL){
        if(curr->val%2!=0){
            
        }
    }

}