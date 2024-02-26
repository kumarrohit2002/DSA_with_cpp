#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=this->prev=NULL;
    }
};

void insertAtHead(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=tail=temp;
        return;
    }
    temp->next=head;
    head->prev=temp;
    head=temp;
    return;
}

void print(Node* head){
    if(head==NULL){
        cout<<"List is empty\n";
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void printp(Node* tail){
    if(tail==NULL){
        cout<<"List is empty\n";
        return;
    }
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

void deleteNodeAtposition(Node* &head,Node* &tail,int p){
    if(p==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        free(temp);
        return;
    }
    Node* curr=head;
    int c=1;
    while(c<p){
        curr=curr->next;
        c++;
    }
    if(curr->next==NULL){
        tail=curr->prev;
        tail->next=NULL;
        free(curr);
        return;
        
    }
    else{
        Node* temp=curr;
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        free(temp);
        return;
    }
    cout<<curr->data<<endl;

}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50);
    print(head);
    // deleteNodeAtposition(head,tail,3);
    printp(tail);
    cout<<head->data<<" < - > "<<tail->data<<endl;
    return 0;
}