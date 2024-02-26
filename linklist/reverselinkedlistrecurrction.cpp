#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next=NULL;
    //constroctor...........
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    //distroctor........
    ~Node(){
        int val=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"Deleted value: "<<val<<endl;

    }
};

void insertAtHead(Node* &head,Node* &tail,int d){
    Node* temp=new Node(d);
    if (head==NULL) {
        head=temp;
        tail=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
}

void insertAtTail(Node* &head,Node* &tail,int d){
    Node* tamp=new Node(d);
    if(head==NULL){
        head=tamp;
        tail=tamp;
    }
    else{
        tail->next=tamp;
        tail=tamp;
    }
}

void print(Node* head){
    if(head==NULL){
    cout<<"List is empty";
    }
    else{
        while(head!=NULL){
            cout<<head->data<<"->";
            head=head->next;
        }
    }
    cout<<"NULL"<<endl;
}

Node* reverse(Node* &head,Node* &tail){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node* new_node=reverse(head->next,tail);
    head->next->next=head;
    head->next=NULL;
    return new_node;
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    //    insert at the end of list.........
    int n,ele;
    cout<<"Enter the size of list: ";
    cin>>n;
    cout<<"Enter the element in list-> ";
    for(int i=0;i<n;i++){
        cin>>ele;
        insertAtTail(head,tail,ele);
    }
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    tail=head;
    head=reverse(head,tail);
    print(head);
    cout<<"head: "<<head->data<<endl;
    cout<<"Tail: "<<tail->data<<endl;
    return 0;
}