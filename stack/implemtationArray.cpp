#include<bits/stdc++.h>
using namespace std;

class MyStack{
    int cap;
    int top;
    int *arr;
    public:
        MyStack(int c){
            cap=c;
            arr=new int[c];
            top=-1;
        }

        void push(int x){
            if(top==cap-1){
                cout<<"Capaity FULL"<<endl;
            }else{
                top++;
                arr[top]=x;
            }
        }

        int pop(){
            if(top==-1){
                cout<<"Stack is EMPTY"<<endl;
            }else{
                int x=arr[top];
                top--;
                return x;
            }
        }

        int size(){
            return top+1;
        }

        bool isEmpty(){
            return (top==-1);
        }

        int peek(){
            if(top==-1){
                cout<<"Stack is EMPTY"<<endl;
            }else{
                cout<<arr[top]<<endl;
            }
        }
};

int main(){

    MyStack s(5);
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

    return 0;
}