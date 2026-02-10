#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
    int val;
    Node *next;
    Node(int x){
        val=x;
        next=NULL;
    }
};

int search(Node *head, int x){
    if(head==NULL) return -1;
    if(head->val==x) return 1;
    int res=search(head->next,x);
    if(res==-1) return -1;
    return (res);

}

void printList(Node *root){
    Node* temp = root;
    while(temp!=nullptr){
        cout<<temp->val<< " ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);

    cout << "Original list: ";
    printList(head);

    int ans=-1;
    ans=search(head,3);
    cout<<"It is at pos "<<ans<<endl;
    return 0;
}