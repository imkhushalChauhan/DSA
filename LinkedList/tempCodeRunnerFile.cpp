#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int x){
        val=x;
        next=nullptr;      
    }
};

void printList(Node *root){
    Node* temp = root;
    while(temp!=nullptr){
        cout<<temp->val<< " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* p = new Node(1);
    Node* q = new Node(2);
    Node* r = new Node(3);
    p->next=q;
    q->next=r;
    printList(p);
    return 0;
}