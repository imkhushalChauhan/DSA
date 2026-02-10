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

Node* insertAtPos(Node* head, int pos, Node* temp){
    if(pos==1){
        temp->next=head;
        return temp;
    }
    Node* curr=head;
    for(int i=1; i<=pos-2 && curr!=NULL ; i++){
        curr=curr->next;
    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;

    return head;
}


int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Original list: ";
    printList(head);

    Node* newNode = new Node(99);
    head = insertAtPos(head, 5, newNode);

    cout << "After insertion: ";
    printList(head);

    return 0;
}

