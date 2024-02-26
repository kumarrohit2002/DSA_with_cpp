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
    ~Node(){
        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Deleted node with value "<<val<<endl;
    }
};

void insertAtHead(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if(head==NULL){
        head=tail=temp;
        return;
    }
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int d,int p){
    if(p==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* curr=head;
    int c=1;
    while(c<p-1){
        curr=curr->next;
        c++;
    }
    if(curr->next==NULL){
        insertAtTail(head,tail,d);
        return ;
    }
    Node* nodetoinsert=new Node(d);
    nodetoinsert->next=curr->next;
    curr->next->prev=nodetoinsert;
    curr->next=nodetoinsert;
    nodetoinsert->prev=curr;
    return;
}

void deleteAtPosition(Node* &head,Node* &tail,int p){
    if(p==1){
        Node* temp=head;
        head=head->next;
        temp->next->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    Node* prev=NULL;
    Node* curr=head;
    int c=1;
    while(c<p){
        prev=curr;
        curr = curr -> next;
        c++;
    }
    if(curr->next==NULL){
        curr->prev=NULL;
        prev->next=NULL;
        tail=prev;
        delete curr;
        return;
    }
    curr->next->prev=prev;
    prev->next=curr->next;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
}

void print(Node* head){
    if(head==NULL){
        cout<<"Linked list is empty!!";
        return;
    }
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

void printreverse(Node* tail){
    while(tail!=NULL){
        cout<<tail->data<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,2);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    insertAtHead(head,tail,4);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    insertAtTail(head,tail,6);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    insertAtPosition(head,tail,100,4);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    cout<<"print reverse order: ";
    printreverse(tail);              //print reverse order............
    deleteAtPosition(head,tail,1);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    deleteAtPosition(head,tail,2);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;
    deleteAtPosition(head,tail,2);
    print(head);
    cout<<"HEAD: "<<head->data<<endl;
    cout<<"TAIL: "<<tail->data<<endl;

    return 0;
}

//this code is correct..........