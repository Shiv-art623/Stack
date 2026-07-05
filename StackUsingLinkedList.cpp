#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node* next;

Node(int value){
    data = value;
    next = NULL;
}
};

class Stack{
    Node *top;
    int size;

    public:
    Stack(){
        top = NULL;
        size = 0;
    }

    void push(int value){
        Node* temp = new Node(value);
        if(temp == NULL){
            cout<<"stack Overflow"<<endl;
            return;
        }
        else{
            temp->next = top;
            top = temp;
            size++;
        }
    }

    void pop(){
        if(top == NULL){
            cout<<"stack underflow"<<endl;
            return;
        }
        else{
            Node* temp = top;
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else return top->data;
    }

    bool isEmpty(){
        return top == NULL;
    }

    int isSize(){
        return size;
    }
};
int main(){
    Stack s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(8);
    s.push(10);
    cout<<s.peek()<<endl;
    cout<<s.isSize()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty();
    return 0;
}