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

void insertAtPosition(Node* &head,Node* &tail,int p,int d){
    if(p==1){
        insertAtHead(head,tail,d);
        return;
    }
    else{
        Node* temp=head;
        int c=1;
        while(c<p-1){
            temp=temp->next;
            c++;
        }
        if(temp->next==NULL){
            insertAtTail(head,tail,d);
            return;
        }
        Node* insertAtNode=new Node(d);
        insertAtNode->next=temp->next;
        temp->next=insertAtNode;
    }
}

// void deleteAtNode(Node* &head,Node* &tail,int p){
//     if(p==1){
//         //delete head......
//         Node* temp=head;
//         head=head->next;
//         //delete
//         temp->next=NULL;
//         delete temp;
//         return;
//     }
//     else{
//         Node* prev=NULL;
//         Node* curr=head;
//         int c=1;
//         while(c<p){
//             prev=curr;
//             curr=curr->next;
//             c++;
//         }
//         if(curr->next==NULL){
//             //delete
//             prev->next=NULL;
//             delete curr;
//             return;
//         }
//         prev->next=curr->next;
//         // delete 
//         curr->next=NULL;
//         delete curr;
//         return;
//     }
// }

void deleteAlternativeNode(Node* &head){
    Node* curr=head;
    while(curr!=NULL && curr->next!=NULL){
        Node* temp=curr->next;
        curr->next=curr->next->next;
        free (temp);
        curr=curr->next;
    }
}

void deleteDublicateEle(Node* &head){
    Node* curr=head;
    while(curr){
        while(curr->next && curr->data==curr->next->data){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            free(temp);
        }
        curr=curr->next;
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
    int p,e;
    cout<<"Enter the insert position and element: ";
    cin>>p>>e;
    insertAtPosition(head,tail,p,e);
    print(head);
    // int p1;
    // cout<<"Enter the position for delete: ";
    // cin>>p1;
    // deleteAtNode(head,tail,p1);
    // cout<<"Before deleted even : ";
    // for(int i=1;i<n+1;i++){
    //     if(i%2==0)deleteAtNode(head,tail,i);
    // }
    // deleteAlternativeNode(head);
    deleteDublicateEle(head);
    print(head);

    return 0;

}