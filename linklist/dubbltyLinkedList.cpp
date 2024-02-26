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

void insertAtTail(Node* &head,Node* &tail,int d){
	Node* temp=new Node(d);
	if(head==NULL){
		head=tail=temp;
		return;
	}
	tail->next=temp;
	temp->prev=tail;
	tail=temp;
	return;
}


void insertAtPosition(Node* &head,Node* &tail,int d,int p){
	if(p==1){
		insertAtHead(head,tail,d);
		return;
	}
	Node* curr=head;
	int c=1;
	while(c<p){
		curr=curr->next;
		c++;
	}
	if(curr->next==NULL){
		insertAtTail(head,tail,d);
		return;
	}
//	cout<<"curr->data: "<<curr->data<<endl;
//	Node* temp=new Node(d);
//	temp->next=curr;
//	curr->prev=temp;                        // this is wrong.. think........................
//	temp->prev=curr->prev;
//	curr->prev->next=temp;


	Node* temp=new Node(d);
	temp->next=curr;
	temp->prev=curr->prev;
	curr->prev->next=temp;
	curr->prev=temp;
	return;
}

void rprint(Node* tail){
	if(tail==NULL){
		cout<<"Linked list is NULL\n";
		return;
	}
	while(tail!=NULL){
		cout<<tail->data<<" <-";
		tail=tail->prev;	
	}
	cout<<"NULL"<<endl;
}

void print(Node* head){
	if(head==NULL) return;
	while(head!=NULL){
		cout<<head->data<<" ->";
		head=head->next;
	}
	cout<<"NULL"<<endl;
}


int main(){
	Node* head=NULL;
	Node* tail=NULL;
	int n,data;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		insertAtHead(head,tail,data);
	}
	int x,p;
	cout<<"Enter X and Position p: ";
	cin>>x>>p;
	insertAtPosition(head,tail,x,p);
	print(head);
	rprint(tail);
	return 0;
}
