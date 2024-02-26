#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node* prev;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
            this->prev=NULL;
        }
        cout << "deleted value: " << val << endl;
    }
};

void insertAtHead(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    temp->next = head;
    head->prev=temp;
    head = temp;
}
void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    tail->next=temp;
    temp->prev=tail;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* tail,int d,int p){
    if(p==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp=head;
    int n=1;
    while(n<p-1){
        temp=temp->next;
        n++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,d);
        return;
    }
    Node* insert=new Node(d);
    insert->next=temp->next;
    temp->next->prev=insert;
    insert->prev=temp;
    temp->next=insert;
    return;
    
}

void print(Node* head){
    cout<<endl;
    if(head==NULL){
    cout<<"List is empty";
    }
    else{
        while(head!=NULL){
            cout<<head->data<<" <--> ";
            head=head->next;
        }
    }
    cout<<"NULL"<<endl<<endl;
}

void printp(Node* tail){
    while(tail->prev!=NULL){
        cout<<tail->data<<"<->";
        tail=tail->prev;
    }
    cout<<"NULL"<<endl<<endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 4);
    insertAtHead(head, tail, 8);
    insertAtHead(head, tail, 10);
    insertAtHead(head, tail, 12);
    insertAtTail(head,tail,2);
    insertAtPosition(head,tail,6,4);
    // printp(tail);
    print(head);
    cout<<head->data<<" "<<tail->data;
    return 0;
}