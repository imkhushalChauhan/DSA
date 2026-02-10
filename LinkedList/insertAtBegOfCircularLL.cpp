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

Node* insertAtBeg(Node* head, int x){
    if(head==NULL) return head;
    Node* temp=new Node(x);
    temp->next=head->next;
    head->next=temp;
    temp->val=head->val;
    head->val=x;
    return head;

}