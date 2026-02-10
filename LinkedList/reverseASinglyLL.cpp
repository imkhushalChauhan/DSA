#include<bits/stdc++.h>
using namespace std;
//todo: do it with recursion as well
class Node{
public: 
    int val;
    Node* next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

Node* reverseLL(Node *head){
    if(head==NULL || head->next==NULL) return head;

    Node* front;
    Node* curr = head;
    Node* prev = NULL;

    while(curr!=NULL){
        front=curr->next;
        curr->next=prev;
        prev=curr;
        curr=front;
    }
    return prev;
}

int main(){
    
    return 0;
}