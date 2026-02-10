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
//Given arr is sorted
Node* removeDup(Node* head){
    if(head==NULL) return NULL;

    Node* curr=head;
    Node* nt=head->next;

    while(nt!=NULL){
        if(curr->val==nt->val){
            Node* temp=nt;
            curr->next=nt->next;
            delete temp;
            nt=curr->next;
        }
        else{
            curr=curr->next;
            nt=nt->next;
        }
    }
    return head;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node(value);

    if (head == nullptr) {
        head = newNode;
        return;
    }

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

int main(){
    Node* head = nullptr;
    int n, value;

    cout << "Enter number of inputs: ";
    cin >> n;

    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> value;
        insertAtEnd(head, value);
    }

    cout << "Linked List: ";
    printList(head);

    removeDup(head);

    cout << "Linked List: ";
    printList(head);

    return 0;
}