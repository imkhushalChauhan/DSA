#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
        Node(int x){
            data=x;
            next=NULL;
        }
};

class myStack{
    Node* head;
    int sz;
    public:
        myStack(){
            head=NULL;
            sz=0;
        }

        void push(int x){
            Node* temp=new Node(x);
            temp->next=head;
            head=temp;
            sz++;
        }

        int pop(){
            if(sz==0) return INT_MAX;
            int rs=head->data;
            Node* temp=head;
            head=head->next;
            sz--;
            delete(temp);
            return rs;
        }

        void peek(){
            if(sz==0) cout<<INT_MAX<<endl;
            else{
                cout<<head->data<<endl;
            }
        }

        bool isEmpty(){
            return sz==0;
        }

        int size(){
            return sz;
        }

};

int main(){
    
    myStack s;
    s.push(1);
    s.push(2);
    s.peek();
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(3);

    while(!s.isEmpty()){
        s.peek();
        s.pop();
    }

    s.peek();

    return 0;
}