#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    //constructor.................
    Node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
        return ;
    }
    temp->next=head;
    head=temp;
    return;
}

void print(Node* head){
    if(head==NULL){
        cout<<"List is empty";
        return;
    }
    while (head!= NULL) {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


void reverse(Node* &head,Node* &tail){
    Node* pre=NULL;
    Node* curr=head;
    Node* temp=head->next;
    tail=head;
    while(temp!=NULL){
        curr->next=pre;
        cout<<"curr= "<<pre->data<<" ";
        pre=curr;
        curr=temp;
        temp=temp->next;
    }
    head=curr;
    return;
}

int main(){
    Node* Student;
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,12);
    // print(head);
    insertAtHead(head,tail,13);
    insertAtHead(head,tail,14);
    reverse(head,tail);
    print(head);
    cout<<"head ="<<head->data<<endl;
    cout<<"Tail="<<tail->data<<endl;
    return 0;
}