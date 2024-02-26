#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class stack{
    Node* head;
    int capacity;
    int currsize;
    public:
    stack(int c){
        this->head=NULL;
        this->capacity=c;
        this->currsize=0;
    }

    int top(){
        return head->data;
    }
    bool isEmpty(){
        return head==NULL;
    }
    void push(int d){
        if(currsize>=capacity){
            cout<<"Stack Overflow";
            return;
        }
        Node* temp=new Node(d);
        if(head==NULL){
            head=temp;
            return;
        }
        temp->next=head;
        head=temp;
        currsize++;
    }
    void pop(){
        if(isEmpty()){
            cout<<"stack underflow";
            return;
        }
        if(head->next==NULL){
            free(head);
            return;
        }
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        free(temp);
        currsize--;
    }
};

int main(){
    stack s(5);
    s.push(4);
    s.push(6);
    s.pop();
    cout<<s.top();
    return 0;
}