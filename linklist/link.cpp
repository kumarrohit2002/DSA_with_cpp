#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
		//distructor
		~Node(){
			int value=this->data;
			//memory free
			if(this->next!=NULL){
				delete next;
				this->next=NULL;
			}
			cout<<"deleted value: "<<value<<endl;
		}
};
void insertAtHead(Node* &head,int d){
	Node* temp=new Node(d);
	temp->next=head;
	head=temp;
}

void insertAtTail(Node* &tail,int d){
	Node *temp=new Node(d);
	tail->next=temp;
	tail=temp;
}

void insertAtPosition(Node* &head,Node* &tail,int p,int d){
	if(p==1){
		insertAtHead(head,d);
		return;
	}
	Node* temp=head;
	int c=1;
	while(c<p-1){
		temp=temp->next;
		c++;
	}
	if(temp->next==NULL){
		insertAtTail(tail,d);
		return;
	}
	Node* insertatnode=new Node(d);
	insertatnode->next=temp->next;
	temp->next=insertatnode;
	
	
}

void print(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;
}

void deleteatposition(int p,Node* &head){
	if(p==1){
		Node* temp=head;
		head=head->next;
		//delete 
		temp->next=NULL;
		delete temp;
	}
	else{
		Node* curr=head;
		Node* prev=NULL;
		int c=1;
		while(c<p){
			prev=curr;
			curr=curr->next;
			c++;
		}
		prev->next=curr->next;
		//delete
		curr->next=NULL;
		delete curr;
	}
}

int main(){
	Node* node1=new Node(10);
	Node* head=node1;
	Node* tail=node1;
	insertAtHead(head,5);
	insertAtTail(tail,15);
	insertAtPosition(head,tail,2,13);
	print(head);
	deleteatposition(2,head);
	print(head);
	cout<<"Head: "<<head->data<<endl;
	cout<<"Tail: "<<tail->data<<endl;	
	return 0;
}
